
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i3c_ibi_setup {int num_slots; int handler; } ;
struct i3c_device {int bus; TYPE_1__* desc; } ;
struct TYPE_2__ {int ibi_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,struct i3c_ibi_setup const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct i3c_device *VAR_2,
      const struct i3c_ibi_setup *VAR_3)
{
 int VAR_4 = -VAR_1;

 if (!VAR_3->handler || !VAR_3->num_slots)
  return -VAR_0;

 FUNC_0(VAR_2->bus);
 if (VAR_2->desc) {
  FUNC_3(&VAR_2->desc->ibi_lock);
  VAR_4 = FUNC_2(VAR_2->desc, VAR_3);
  FUNC_4(&VAR_2->desc->ibi_lock);
 }
 FUNC_1(VAR_2->bus);

 return VAR_4;
}
