
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cursize; int maxsize; int* data; int bit; void* overflowed; scalar_t__ oob; } ;
typedef TYPE_1__ msg_t ;
struct TYPE_5__ {int compressor; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int*,int*) ;
 int FUNC_2 (int*,short*) ;
 int VAR_0 ;
 int FUNC_3 (int *,int,int*,int*,int) ;
 int FUNC_4 (int,int*,int*) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;

void FUNC_5( msg_t *VAR_4, int VAR_5, int VAR_6 ) {
 int VAR_7;

 VAR_2 += VAR_6;

 if ( VAR_4->overflowed ) {
  return;
 }

 if ( VAR_6 == 0 || VAR_6 < -31 || VAR_6 > 32 ) {
  FUNC_0( VAR_0, "MSG_WriteBits: bad bits %i", VAR_6 );
 }

 if ( VAR_6 < 0 ) {
  VAR_6 = -VAR_6;
 }

 if ( VAR_4->oob ) {
  if ( VAR_4->cursize + ( VAR_6 >> 3 ) > VAR_4->maxsize ) {
   VAR_4->overflowed = VAR_3;
   return;
  }

  if ( VAR_6 == 8 ) {
   VAR_4->data[VAR_4->cursize] = VAR_5;
   VAR_4->cursize += 1;
   VAR_4->bit += 8;
  } else if ( VAR_6 == 16 ) {
   short VAR_8 = VAR_5;

   FUNC_2( &VAR_4->data[VAR_4->cursize], &VAR_8 );
   VAR_4->cursize += 2;
   VAR_4->bit += 16;
  } else if ( VAR_6==32 ) {
   FUNC_1( &VAR_4->data[VAR_4->cursize], &VAR_5 );
   VAR_4->cursize += 4;
   VAR_4->bit += 32;
  } else {
   FUNC_0( VAR_0, "can't write %d bits", VAR_6 );
  }
 } else {
  VAR_5 &= (0xffffffff >> (32 - VAR_6));
  if ( VAR_6&7 ) {
   int VAR_9;
   VAR_9 = VAR_6&7;
   if ( VAR_4->bit + VAR_9 > VAR_4->maxsize << 3 ) {
    VAR_4->overflowed = VAR_3;
    return;
   }
   for( VAR_7 = 0; VAR_7 < VAR_9; VAR_7++ ) {
    FUNC_4( (VAR_5 & 1), VAR_4->data, &VAR_4->bit );
    VAR_5 = (VAR_5 >> 1);
   }
   VAR_6 = VAR_6 - VAR_9;
  }
  if ( VAR_6 ) {
   for( VAR_7 = 0; VAR_7 < VAR_6; VAR_7 += 8 ) {
    FUNC_3( &VAR_1.compressor, (VAR_5 & 0xff), VAR_4->data, &VAR_4->bit, VAR_4->maxsize << 3 );
    VAR_5 = (VAR_5 >> 8);

    if ( VAR_4->bit > VAR_4->maxsize << 3 ) {
     VAR_4->overflowed = VAR_3;
     return;
    }
   }
  }
  VAR_4->cursize = (VAR_4->bit >> 3) + 1;
  if (VAR_4->bit % 8 == 0) {
   VAR_4->data[VAR_4->bit / 8] = 0;
  }
 }
}
