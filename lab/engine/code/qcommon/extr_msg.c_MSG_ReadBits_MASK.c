
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_6__ {int readcount; int cursize; int* data; int bit; scalar_t__ oob; } ;
typedef TYPE_2__ msg_t ;
struct TYPE_5__ {int tree; } ;
struct TYPE_7__ {TYPE_1__ decompressor; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int*,int*) ;
 int FUNC_2 (short*,int*) ;
 int VAR_0 ;
 int FUNC_3 (int*,int*) ;
 int FUNC_4 (int ,int*,int*,int*,int) ;
 TYPE_3__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

int FUNC_5( msg_t *VAR_4, int VAR_5 ) {
 int VAR_6;
 int VAR_7;
 qboolean VAR_8;
 int VAR_9, VAR_10;


 if ( VAR_4->readcount > VAR_4->cursize ) {
  return 0;
 }

 VAR_6 = 0;

 if ( VAR_5 < 0 ) {
  VAR_5 = -VAR_5;
  VAR_8 = VAR_3;
 } else {
  VAR_8 = VAR_2;
 }

 if (VAR_4->oob) {
  if (VAR_4->readcount + (VAR_5>>3) > VAR_4->cursize) {
   VAR_4->readcount = VAR_4->cursize + 1;
   return 0;
  }

  if(VAR_5==8)
  {
   VAR_6 = VAR_4->data[VAR_4->readcount];
   VAR_4->readcount += 1;
   VAR_4->bit += 8;
  }
  else if(VAR_5==16)
  {
   short VAR_11;

   FUNC_2(&VAR_11, &VAR_4->data[VAR_4->readcount]);
   VAR_6 = VAR_11;
   VAR_4->readcount += 2;
   VAR_4->bit += 16;
  }
  else if(VAR_5==32)
  {
   FUNC_1(&VAR_6, &VAR_4->data[VAR_4->readcount]);
   VAR_4->readcount += 4;
   VAR_4->bit += 32;
  }
  else
   FUNC_0(VAR_0, "can't read %d bits", VAR_5);
 } else {
  VAR_10 = 0;
  if (VAR_5&7) {
   VAR_10 = VAR_5&7;
   if (VAR_4->bit + VAR_10 > VAR_4->cursize << 3) {
    VAR_4->readcount = VAR_4->cursize + 1;
    return 0;
   }
   for(VAR_9=0;VAR_9<VAR_10;VAR_9++) {
    VAR_6 |= (FUNC_3(VAR_4->data, &VAR_4->bit)<<VAR_9);
   }
   VAR_5 = VAR_5 - VAR_10;
  }
  if (VAR_5) {

   for(VAR_9=0;VAR_9<VAR_5;VAR_9+=8) {
    FUNC_4 (VAR_1.decompressor.tree, &VAR_7, VAR_4->data, &VAR_4->bit, VAR_4->cursize<<3);

    VAR_6 = (unsigned int)VAR_6 | ((unsigned int)VAR_7<<(VAR_9+VAR_10));

    if (VAR_4->bit > VAR_4->cursize<<3) {
     VAR_4->readcount = VAR_4->cursize + 1;
     return 0;
    }
   }

  }
  VAR_4->readcount = (VAR_4->bit>>3)+1;
 }
 if ( VAR_8 && VAR_5 > 0 && VAR_5 < 32 ) {
  if ( VAR_6 & ( 1 << ( VAR_5 - 1 ) ) ) {
   VAR_6 |= -1 ^ ( ( 1 << VAR_5 ) - 1 );
  }
 }

 return VAR_6;
}
