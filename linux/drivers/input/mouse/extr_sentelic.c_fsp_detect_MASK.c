
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {char* vendor; char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct psmouse*,int ,int*) ;

int FUNC_1(struct psmouse *VAR_3, bool VAR_4)
{
 int VAR_5;

 if (FUNC_0(VAR_3, VAR_2, &VAR_5))
  return -VAR_0;

 if (VAR_5 != 0x01)
  return -VAR_1;

 if (VAR_4) {
  VAR_3->vendor = "Sentelic";
  VAR_3->name = "FingerSensingPad";
 }

 return 0;
}
