
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct psmouse {struct ps2dev ps2dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ps2dev*,unsigned char*,int ) ;

__attribute__((used)) static int FUNC_1(struct psmouse *VAR_3,
          unsigned char VAR_4, unsigned char VAR_5[])
{
 struct ps2dev *VAR_6 = &VAR_3->ps2dev;

 switch (VAR_4) {
 case 0:
  if (FUNC_0(VAR_6, ((void*)0), VAR_2) ||
      FUNC_0(VAR_6, ((void*)0), VAR_2) ||
      FUNC_0(VAR_6, VAR_5, VAR_0))
   return -1;

  break;

 case 1:
  if (FUNC_0(VAR_6, ((void*)0), VAR_1) ||
      FUNC_0(VAR_6, ((void*)0), VAR_1) ||
      FUNC_0(VAR_6, VAR_5, VAR_0))
   return -1;

  break;
 }

 return 0;
}
