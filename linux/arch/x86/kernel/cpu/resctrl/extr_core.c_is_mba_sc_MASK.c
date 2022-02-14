
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int mba_sc; } ;
struct rdt_resource {TYPE_2__ membw; } ;
struct TYPE_4__ {int mba_sc; } ;
struct TYPE_6__ {TYPE_1__ membw; } ;


 size_t VAR_0 ;
 TYPE_3__* VAR_1 ;

bool FUNC_0(struct rdt_resource *VAR_2)
{
 if (!VAR_2)
  return VAR_1[VAR_0].membw.mba_sc;

 return VAR_2->membw.mba_sc;
}
