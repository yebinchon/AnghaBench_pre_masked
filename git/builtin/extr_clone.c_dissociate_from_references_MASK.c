
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char const**,int) ;
 scalar_t__ FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
 static const char* VAR_5[] = { "repack", "-a", "-d", ((void*)0) };
 char *VAR_6 = FUNC_5("objects/info/alternates");

 if (!FUNC_1(VAR_6, VAR_1)) {
  if (FUNC_6(VAR_5, VAR_3|VAR_2))
   FUNC_2(FUNC_0("cannot repack to clean up"));
  if (FUNC_7(VAR_6) && VAR_4 != VAR_0)
   FUNC_3(FUNC_0("cannot unlink temporary alternates file"));
 }
 FUNC_4(VAR_6);
}
