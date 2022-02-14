
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {char* vendor; char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct psmouse*,int ) ;

int FUNC_1(struct psmouse *VAR_2, bool VAR_3)
{
 if (!FUNC_0(VAR_2, VAR_1))
  return -VAR_0;

 if (VAR_3) {
  VAR_2->vendor = "FocalTech";
  VAR_2->name = "Touchpad";
 }

 return 0;
}
