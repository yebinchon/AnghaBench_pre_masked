
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;
typedef int filename ;


 int FUNC_0 (char*,int,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,char*,...) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (char*,void**) ;
 int VAR_0 ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (char*,int ,int) ;

void FUNC_9( void ) {
 qboolean VAR_1;
 union {
  char *c;
  void *v;
 } VAR_2;
 char VAR_3[VAR_0];

 VAR_1 = !FUNC_7(FUNC_3(0), "execq");

 if (FUNC_2 () != 2) {
  FUNC_4 ("exec%s <filename> : execute a script file%s\n",
              VAR_1 ? "q" : "", VAR_1 ? " without notification" : "");
  return;
 }

 FUNC_8( VAR_3, FUNC_3(1), sizeof( VAR_3 ) );
 FUNC_0( VAR_3, sizeof( VAR_3 ), ".cfg" );
 FUNC_6( VAR_3, &VAR_2.v);
 if (!VAR_2.c) {
  FUNC_4 ("couldn't exec %s\n", VAR_3);
  return;
 }
 if (!VAR_1)
  FUNC_4 ("execing %s\n", VAR_3);

 FUNC_1 (VAR_2.c);

 FUNC_5 (VAR_2.v);
}
