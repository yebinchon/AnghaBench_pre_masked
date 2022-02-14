
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adv7511 {scalar_t__ edid_read; int wq; TYPE_1__* i2c_main; } ;
struct TYPE_2__ {scalar_t__ irq; } ;


 int VAR_0 ;
 int FUNC_0 (struct adv7511*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(struct adv7511 *VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_1->i2c_main->irq) {
  VAR_3 = FUNC_3(VAR_1->wq,
    VAR_1->edid_read, FUNC_1(VAR_2));
 } else {
  for (; VAR_2 > 0; VAR_2 -= 25) {
   VAR_3 = FUNC_0(VAR_1, 0);
   if (VAR_3 < 0)
    break;

   if (VAR_1->edid_read)
    break;

   FUNC_2(25);
  }
 }

 return VAR_1->edid_read ? 0 : -VAR_0;
}
