
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(u_char *VAR_0, int VAR_1)
{
 if (VAR_1 < 1)
  return;
 switch (VAR_0[0]) {
 case 1:
  if (VAR_1 < 2)
   goto err;
  FUNC_0("\tDisk interface: %s\n",
         (VAR_0[1] & 1) ? "IDE" : "Undefined");
  break;
 case 2:
 case 3:
  if (VAR_1 < 3)
   goto err;
  FUNC_0("\tDisk features: %s, %s%s\n",
         (VAR_0[1] & 0x04) ? "Silicon" : "Rotating",
         (VAR_0[1] & 0x08) ? "Unique, " : "",
         (VAR_0[1] & 0x10) ? "Dual" : "Single");
  if (VAR_0[2] & 0x7f)
   FUNC_0("\t\t%s%s%s%s%s%s%s\n",
          (VAR_0[2] & 0x01) ? "Sleep, " : "",
          (VAR_0[2] & 0x02) ? "Standby, " : "",
          (VAR_0[2] & 0x04) ? "Idle, " : "",
          (VAR_0[2] & 0x08) ? "Low power, " : "",
          (VAR_0[2] & 0x10) ? "Reg inhibit, " : "",
          (VAR_0[2] & 0x20) ? "Index, " : "",
          (VAR_0[2] & 0x40) ? "Iois16" : "");
  break;
 err:
  FUNC_0("\tWrong length for fixed disk extension tuple\n");
  return;
 }
}
