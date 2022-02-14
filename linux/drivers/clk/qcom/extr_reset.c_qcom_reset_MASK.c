
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reset_controller_dev {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* deassert ) (struct reset_controller_dev*,unsigned long) ;int (* assert ) (struct reset_controller_dev*,unsigned long) ;} ;


 int FUNC_0 (struct reset_controller_dev*,unsigned long) ;
 int FUNC_1 (struct reset_controller_dev*,unsigned long) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct reset_controller_dev *VAR_0, unsigned long VAR_1)
{
 VAR_0->ops->assert(VAR_0, VAR_1);
 FUNC_2(1);
 VAR_0->ops->deassert(VAR_0, VAR_1);
 return 0;
}
