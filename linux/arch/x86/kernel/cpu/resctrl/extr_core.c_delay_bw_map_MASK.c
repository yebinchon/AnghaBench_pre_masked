
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ delay_linear; } ;
struct rdt_resource {scalar_t__ default_ctrl; TYPE_1__ membw; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;

u32 FUNC_1(unsigned long VAR_1, struct rdt_resource *VAR_2)
{
 if (VAR_2->membw.delay_linear)
  return VAR_0 - VAR_1;

 FUNC_0("Non Linear delay-bw map not supported but queried\n");
 return VAR_2->default_ctrl;
}
