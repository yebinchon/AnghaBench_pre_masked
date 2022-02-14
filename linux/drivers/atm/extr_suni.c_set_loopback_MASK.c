
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct atm_dev {TYPE_1__* ops; } ;
struct TYPE_4__ {scalar_t__ type; int loop_mode; } ;
struct TYPE_3__ {int (* phy_get ) (struct atm_dev*,int) ;int (* phy_put ) (struct atm_dev*,unsigned char,int) ;} ;





 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct atm_dev*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct atm_dev*,int) ;
 int FUNC_2 (struct atm_dev*,unsigned char,int) ;

__attribute__((used)) static int FUNC_3(struct atm_dev *VAR_8,int VAR_9)
{
 unsigned char VAR_10;
 int VAR_11, VAR_12, VAR_13;

 if (FUNC_0(VAR_8)->type == VAR_7) {
  VAR_11 = VAR_1;
  VAR_12 = VAR_2;
  VAR_13 = VAR_3;
 } else {
  VAR_11 = VAR_4;
  VAR_12 = VAR_5;
  VAR_13 = VAR_6;
 }

 VAR_10 = VAR_8->ops->phy_get(VAR_8, VAR_11) & ~(VAR_12 | VAR_13);
 switch (VAR_9) {
  case 129:
   break;
  case 130:
   VAR_10 |= VAR_12;
   break;
  case 128:
   VAR_10 |= VAR_13;
   break;
  default:
   return -VAR_0;
 }
 VAR_8->ops->phy_put(VAR_8, VAR_10, VAR_11);
 FUNC_0(VAR_8)->loop_mode = VAR_9;
 return 0;
}
