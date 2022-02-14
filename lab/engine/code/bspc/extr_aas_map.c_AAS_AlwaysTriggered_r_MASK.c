
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,int,char*,char*) ;
 int FUNC_2 (char*) ;
 int * VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;

int FUNC_5(char *VAR_4)
{
 int VAR_5;

 if (!FUNC_4(VAR_4)) {
  return 0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {

  if ( !FUNC_3(VAR_4, FUNC_0(&VAR_1[VAR_5], "target")) ) {

   if (!(FUNC_2(FUNC_0(&VAR_1[VAR_5], "spawnflags")) & VAR_0)) {

    if (!FUNC_3("trigger_always", FUNC_0(&VAR_1[VAR_5], "classname"))) {
     return 1;
    }

    if ( VAR_2[VAR_5] ) {
     FUNC_1( "entity %d, classname %s has recursive targetname %s\n", VAR_5,
          FUNC_0(&VAR_1[VAR_5], "classname"), VAR_4 );
     return 0;
    }
    VAR_2[VAR_5] = 1;
    if ( FUNC_5(FUNC_0(&VAR_1[VAR_5], "targetname")) ) {
     return 1;
    }
   }
  }
 }
 return 0;
}
