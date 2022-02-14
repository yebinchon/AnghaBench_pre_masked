
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,char*,char*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(char *VAR_3)
{
 FUNC_3(VAR_3, VAR_0, "%s/tmp.XXXXXX%d",
     FUNC_1("TMPDIR") == ((void*)0) ? "/tmp" : FUNC_1("TMPDIR"),
     VAR_2);

 VAR_2++;

 FUNC_0(FUNC_2(VAR_3) != -1,
     "mkstemp failed; errno=%d", VAR_1);
 FUNC_0(FUNC_4(VAR_3) == 0,
     "unlink failed; errno=%d", VAR_1);
}
