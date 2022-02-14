
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct athregrec {int op; int reg; int val; } ;
typedef int a ;






 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct athregrec*) ;
 int FUNC_3 (struct athregrec*) ;
 int FUNC_4 (struct athregrec*) ;
 int FUNC_5 (struct athregrec*) ;
 int FUNC_6 (char const*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int,struct athregrec*,int) ;

int
FUNC_10(int VAR_1, const char *VAR_2[])
{
 const char *VAR_3 = VAR_2[1];
 int VAR_4;
 struct athregrec VAR_5;
 int VAR_6;

 if (VAR_1 < 2) {
  FUNC_8("usage: %s <ahq log>\n", VAR_2[0]);
  FUNC_1(127);
 }

 VAR_4 = FUNC_6(VAR_3, VAR_0);
 if (VAR_4 < 0) {
  FUNC_7("open");
  FUNC_1(127);
 }

 while (1) {
  VAR_6 = FUNC_9(VAR_4, &VAR_5, sizeof(VAR_5));
  if (VAR_6 != sizeof(VAR_5))
   break;
  switch (VAR_5.op) {
   case 129:
    FUNC_4(&VAR_5);
    break;
   case 128:
    FUNC_5(&VAR_5);
    break;
   case 131:
    FUNC_2(&VAR_5);
    break;
   case 130:
    FUNC_3(&VAR_5);
    break;
   default:
    FUNC_8("op: %d; reg: 0x%x; val: 0x%x\n",
        VAR_5.op, VAR_5.reg, VAR_5.val);
  }
 }
 FUNC_0(VAR_4);
}
