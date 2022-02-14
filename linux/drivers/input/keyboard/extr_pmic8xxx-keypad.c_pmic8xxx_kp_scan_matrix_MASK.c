
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pmic8xxx_kp {int * keystate; int dev; } ;
typedef int new_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pmic8xxx_kp*,int *,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (struct pmic8xxx_kp*,int *) ;
 int FUNC_4 (struct pmic8xxx_kp*,int *,int *) ;

__attribute__((used)) static int FUNC_5(struct pmic8xxx_kp *VAR_2, unsigned int VAR_3)
{
 u16 VAR_4[VAR_1];
 u16 VAR_5[VAR_1];
 int VAR_6;

 switch (VAR_3) {
 case 0x1:
  VAR_6 = FUNC_4(VAR_2, VAR_4, ((void*)0));
  if (VAR_6 < 0)
   return VAR_6;


  if (FUNC_3(VAR_2, VAR_4))
   return 0;
  FUNC_0(VAR_2, VAR_4, VAR_2->keystate);
  FUNC_2(VAR_2->keystate, VAR_4, sizeof(VAR_4));
 break;
 case 0x3:
  VAR_6 = FUNC_4(VAR_2, VAR_4, VAR_5);
  if (VAR_6 < 0)
   return VAR_6;

  FUNC_0(VAR_2, VAR_5, VAR_2->keystate);
  FUNC_0(VAR_2, VAR_4, VAR_5);
  FUNC_2(VAR_2->keystate, VAR_4, sizeof(VAR_4));
 break;
 case 0x2:
  FUNC_1(VAR_2->dev, "Some key events were lost\n");
  VAR_6 = FUNC_4(VAR_2, VAR_4, VAR_5);
  if (VAR_6 < 0)
   return VAR_6;
  FUNC_0(VAR_2, VAR_5, VAR_2->keystate);
  FUNC_0(VAR_2, VAR_4, VAR_5);
  FUNC_2(VAR_2->keystate, VAR_4, sizeof(VAR_4));
 break;
 default:
  VAR_6 = -VAR_0;
 }
 return VAR_6;
}
