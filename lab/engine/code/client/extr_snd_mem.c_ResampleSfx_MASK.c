
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int* sndChunk; struct TYPE_6__* next; } ;
typedef TYPE_1__ sndBuffer ;
struct TYPE_7__ {TYPE_1__* soundData; } ;
typedef TYPE_2__ sfx_t ;
typedef int qboolean ;
typedef int data ;
typedef int byte ;
struct TYPE_8__ {float speed; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static int FUNC_1( sfx_t *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, byte *VAR_7, qboolean VAR_8 ) {
 int VAR_9;
 int VAR_10;
 float VAR_11;
 int VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16;
 int VAR_17;
 sndBuffer *VAR_18;

 VAR_11 = (float)VAR_4 / VAR_1.speed;

 VAR_9 = VAR_6 / VAR_11;

 VAR_10 = 0;
 VAR_15 = 0;
 VAR_16 = VAR_11 * 256 * VAR_3;
 VAR_18 = VAR_2->soundData;

 for (VAR_12=0 ; VAR_12<VAR_9 ; VAR_12++)
 {
  VAR_10 += VAR_15 >> 8;
  VAR_15 &= 255;
  VAR_15 += VAR_16;
  for (VAR_13=0 ; VAR_13<VAR_3 ; VAR_13++)
  {
   if( VAR_5 == 2 ) {
    VAR_14 = ( ((short *)VAR_7)[VAR_10+VAR_13] );
   } else {
    VAR_14 = (unsigned int)( (unsigned char)(VAR_7[VAR_10+VAR_13]) - 128) << 8;
   }
   VAR_17 = (VAR_12*VAR_3+VAR_13)&(VAR_0-1);
   if (VAR_17 == 0) {
    sndBuffer *VAR_19;
    VAR_19 = FUNC_0();
    if (VAR_18 == ((void*)0)) {
     VAR_2->soundData = VAR_19;
    } else {
     VAR_18->next = VAR_19;
    }
    VAR_18 = VAR_19;
   }

   VAR_18->sndChunk[VAR_17] = VAR_14;
  }
 }

 return VAR_9;
}
