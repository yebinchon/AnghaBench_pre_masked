
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char const*) ;
 int VAR_1 ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int,char const*,int ) ;

__attribute__((used)) static void FUNC_5(int VAR_2, const char *VAR_3)
{
 if (VAR_0)
  FUNC_2(VAR_1, "Debug: Remote helper: -> %s", VAR_3);
 if (FUNC_4(VAR_2, VAR_3, FUNC_3(VAR_3)) < 0)
  FUNC_1(FUNC_0("full write to remote helper failed"));
}
