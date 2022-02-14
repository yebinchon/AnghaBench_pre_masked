
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sndBuffer ;
struct TYPE_3__ {int integer; } ;
typedef TYPE_1__ cvar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (char*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 void* FUNC_2 (int) ;
 void* VAR_7 ;
 int * VAR_8 ;

void FUNC_3(void) {
 sndBuffer *VAR_9, *VAR_10;
 cvar_t *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_1( "com_soundMegs", VAR_2, VAR_1 | VAR_0 );

 VAR_12 = (VAR_11->integer*1536);

 VAR_4 = FUNC_2(VAR_12*sizeof(sndBuffer) );

 VAR_7 = FUNC_2(VAR_3 * sizeof(short) * 4);
 VAR_8 = ((void*)0);

 VAR_6 = VAR_12*sizeof(sndBuffer);
 VAR_9 = VAR_4;;
 VAR_10 = VAR_9 + VAR_12;
 while (--VAR_10 > VAR_9)
  *(sndBuffer **)VAR_10 = VAR_10-1;

 *(sndBuffer **)VAR_10 = ((void*)0);
 VAR_5 = VAR_9 + VAR_12 - 1;

 FUNC_0("Sound memory manager started\n");
}
