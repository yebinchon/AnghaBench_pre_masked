
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {char* vendor; char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct psmouse*,int ,unsigned char*) ;

int FUNC_1(struct psmouse *VAR_2, bool VAR_3)
{
 unsigned char VAR_4[3];

 if (FUNC_0(VAR_2, VAR_0, VAR_4))
  return -VAR_1;


 if (VAR_4[0] != 0x33 || VAR_4[1] != 0xCC)
  return -VAR_1;

 if (VAR_3) {
  VAR_2->vendor = "Cypress";
  VAR_2->name = "Trackpad";
 }

 return 0;
}
