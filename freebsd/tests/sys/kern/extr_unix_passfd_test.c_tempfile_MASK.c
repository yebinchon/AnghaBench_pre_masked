
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,char*) ;
 int VAR_0 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(int *VAR_1)
{
 char VAR_2[VAR_0];
 int VAR_3;

 FUNC_3(VAR_2, VAR_0, "%s/unix_passfd.XXXXXXXXXXXXXXX",
     FUNC_1("TMPDIR") == ((void*)0) ? "/tmp" : FUNC_1("TMPDIR"));
 VAR_3 = FUNC_2(VAR_2);
 FUNC_0(VAR_3 != -1, "mkstemp(%s) failed", VAR_2);
 (void)FUNC_4(VAR_2);
 *VAR_1 = VAR_3;
}
