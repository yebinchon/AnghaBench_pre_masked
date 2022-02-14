
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ encoder; } ;
struct adv7511 {int edid_read; int wq; TYPE_2__* i2c_main; int hpd_work; TYPE_1__ bridge; int regmap; } ;
struct TYPE_4__ {scalar_t__ irq; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct adv7511*,unsigned int) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (int ,int ,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct adv7511 *VAR_3, bool VAR_4)
{
 unsigned int VAR_5, VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_3->regmap, FUNC_0(0), &VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_3->regmap, FUNC_0(1), &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_3(VAR_3->regmap, FUNC_0(0), VAR_5);
 FUNC_3(VAR_3->regmap, FUNC_0(1), VAR_6);

 if (VAR_4 && VAR_5 & VAR_1 && VAR_3->bridge.encoder)
  FUNC_4(&VAR_3->hpd_work);

 if (VAR_5 & VAR_0 || VAR_6 & VAR_2) {
  VAR_3->edid_read = 1;

  if (VAR_3->i2c_main->irq)
   FUNC_5(&VAR_3->wq);
 }





 return 0;
}
