
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prcm_config {long mpu_speed; int flags; scalar_t__ xtal_speed; } ;
struct clk_hw {int dummy; } ;


 long VAR_0 ;
 int VAR_1 ;
 struct prcm_config* VAR_2 ;
 scalar_t__ VAR_3 ;

long FUNC_0(struct clk_hw *VAR_4, unsigned long VAR_5,
          unsigned long *VAR_6)
{
 const struct prcm_config *VAR_7;
 long VAR_8;

 VAR_8 = -VAR_0;

 for (VAR_7 = VAR_2; VAR_7->mpu_speed; VAR_7++) {
  if (!(VAR_7->flags & VAR_1))
   continue;
  if (VAR_7->xtal_speed != VAR_3)
   continue;

  VAR_8 = VAR_7->mpu_speed;


  if (VAR_7->mpu_speed <= VAR_5)
   break;
 }
 return VAR_8;
}
