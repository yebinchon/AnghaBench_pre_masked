
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct psmouse {int ps2dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,scalar_t__*,int ) ;

int FUNC_1(struct psmouse *VAR_4)
{
 u8 VAR_5[2];
 int VAR_6;

 VAR_6 = FUNC_0(&VAR_4->ps2dev, VAR_5, VAR_1);
 if (VAR_6)
  return VAR_6;

 if (VAR_5[0] != VAR_2 && VAR_5[1] != VAR_3)
  return -VAR_0;

 return 0;
}
