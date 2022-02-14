
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dataBase; } ;
typedef int FILE ;


 TYPE_1__* VAR_0 ;
 int * FUNC_0 (char*,char*) ;
 int FUNC_1 (int *,char*,int,void*,int,int,int,int,int) ;

void FUNC_2( int *VAR_1 ) {
 static int VAR_2;
 static FILE *VAR_3;

 if ( !VAR_3 ) {
  VAR_3 = FUNC_0("syscalls.log", "w" );
 }
 VAR_2++;
 FUNC_1(VAR_3, "%i: %p (%i) = %i %i %i %i\n", VAR_2, (void*)(VAR_1 - (int *)VAR_0->dataBase),
  VAR_1[0], VAR_1[1], VAR_1[2], VAR_1[3], VAR_1[4] );
}
