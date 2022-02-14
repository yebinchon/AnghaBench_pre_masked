
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int ,char const*,int) ;
 int FUNC_1 (char const*,int,char*,int,char*,int,int) ;
 int VAR_0 ;
 int FUNC_2 (int*,int ,char const*) ;

__attribute__((used)) static void FUNC_3(
 bool VAR_1, const char *VAR_2, const char *VAR_3, int VAR_4)
{
 int VAR_5 = 0;

 FUNC_0(
  FUNC_2(&VAR_5, VAR_0, VAR_2), 0, VAR_3, VAR_4);

 FUNC_1(
  VAR_3, VAR_4, "expected != is_ignored", 1, "%d",
  (int)(VAR_1 != 0), (int)(VAR_5 != 0));
}
