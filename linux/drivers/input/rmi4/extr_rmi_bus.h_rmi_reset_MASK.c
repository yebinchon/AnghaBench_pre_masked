
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rmi_device {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* reset_handler ) (struct rmi_device*) ;} ;


 int FUNC_0 (struct rmi_device*) ;

__attribute__((used)) static inline int FUNC_1(struct rmi_device *VAR_0)
{
 return VAR_0->driver->reset_handler(VAR_0);
}
