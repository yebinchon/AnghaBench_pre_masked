
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i3c_device {int bus; TYPE_1__* desc; } ;
struct TYPE_2__ {int ibi_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct i3c_device *VAR_1)
{
 int VAR_2 = -VAR_0;

 FUNC_0(VAR_1->bus);
 if (VAR_1->desc) {
  FUNC_3(&VAR_1->desc->ibi_lock);
  VAR_2 = FUNC_2(VAR_1->desc);
  FUNC_4(&VAR_1->desc->ibi_lock);
 }
 FUNC_1(VAR_1->bus);

 return VAR_2;
}
