
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct ib_device {TYPE_1__ cg_device; int name; } ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(struct ib_device *VAR_0)
{
 VAR_0->cg_device.name = VAR_0->name;
 FUNC_0(&VAR_0->cg_device);
}
