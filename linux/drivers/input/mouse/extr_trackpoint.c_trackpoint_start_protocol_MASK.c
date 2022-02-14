
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct psmouse {int ps2dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;
 int VAR_1 ;




 int FUNC_1 (int *,int*,int ) ;

__attribute__((used)) static int FUNC_2(struct psmouse *VAR_2,
         u8 *VAR_3, u8 *VAR_4)
{
 u8 VAR_5[2] = { 0 };
 int VAR_6;

 VAR_6 = FUNC_1(&VAR_2->ps2dev,
       VAR_5, FUNC_0(0, 2, VAR_1));
 if (VAR_6)
  return VAR_6;

 switch (VAR_5[0]) {
 case 129:
 case 131:
 case 130:
 case 128:
  if (VAR_3)
   *VAR_3 = VAR_5[0];
  if (VAR_4)
   *VAR_4 = VAR_5[1];
  return 0;
 }

 return -VAR_0;
}
