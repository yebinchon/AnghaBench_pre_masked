
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(int VAR_0)
{
 FUNC_0("Remaining battery time: ");
 if (VAR_0 == -1)
  FUNC_0("unknown\n");
 else {
  int VAR_1, VAR_2, VAR_3;

  VAR_1 = VAR_0;
  VAR_3 = VAR_1 % 60;
  VAR_1 /= 60;
  VAR_2 = VAR_1 % 60;
  VAR_1 /= 60;
  FUNC_0("%2d:%02d:%02d\n", VAR_1, VAR_2, VAR_3);
 }
}
