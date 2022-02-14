
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_engine_cs {int dummy; } ;
struct TYPE_3__ {int prev; } ;
struct TYPE_4__ {TYPE_1__ link; } ;
struct active_node {TYPE_2__ base; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline struct intel_engine_cs *
FUNC_1(struct active_node *VAR_0)
{
 return (struct intel_engine_cs *)FUNC_0(VAR_0->base.link.prev);
}
