
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_2(int VAR_2, off_t VAR_3, char *VAR_4)
{
 if (VAR_1 == 0)
  return;
 if (!VAR_2)
  FUNC_0(VAR_0, "found at %d:", (int) VAR_3);
 else
  FUNC_0(VAR_0, "new at %d:", (int) VAR_3);
 FUNC_1(VAR_4);
 FUNC_0(VAR_0, "\n");
}
