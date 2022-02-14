
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 char* FUNC_2 (char const*,char const*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(const char *VAR_1,
       const char *VAR_2,
       const char *VAR_3,
       void *VAR_4)
{
 char *VAR_5 = FUNC_2(VAR_2, VAR_3, FUNC_1());
 FUNC_4(&VAR_0,
    "setup: move $GIT_DIR to '%s'",
    VAR_5);
 FUNC_3(VAR_5);
 FUNC_0(VAR_5);
}
