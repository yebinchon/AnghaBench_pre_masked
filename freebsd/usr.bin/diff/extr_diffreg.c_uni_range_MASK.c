
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,...) ;

__attribute__((used)) static void
FUNC_1(int VAR_0, int VAR_1)
{
 if (VAR_0 < VAR_1)
  FUNC_0("%d,%d", VAR_0, VAR_1 - VAR_0 + 1);
 else if (VAR_0 == VAR_1)
  FUNC_0("%d", VAR_1);
 else
  FUNC_0("%d,0", VAR_1);
}
