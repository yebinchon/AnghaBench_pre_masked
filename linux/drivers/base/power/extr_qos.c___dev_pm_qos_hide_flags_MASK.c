
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* qos; } ;
struct device {TYPE_1__ power; } ;
struct TYPE_4__ {scalar_t__ flags_req; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct device*,int ) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_1)
{
 if (!FUNC_0(VAR_1->power.qos) && VAR_1->power.qos->flags_req)
  FUNC_1(VAR_1, VAR_0);
}
