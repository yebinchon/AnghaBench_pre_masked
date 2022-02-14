
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ parent; } ;
struct amba_device {TYPE_1__ res; } ;


 int FUNC_0 (struct amba_device*) ;
 int FUNC_1 (TYPE_1__*) ;
 struct amba_device* FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct amba_device *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->res.parent)
  FUNC_1(&VAR_1->res);
 FUNC_0(VAR_1);
}
