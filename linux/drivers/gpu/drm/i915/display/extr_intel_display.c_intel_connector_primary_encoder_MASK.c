
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_encoder {int dummy; } ;
struct intel_connector {int base; scalar_t__ mst_port; } ;
struct TYPE_2__ {struct intel_encoder base; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 struct intel_encoder* FUNC_2 (int *) ;

__attribute__((used)) static struct intel_encoder *
FUNC_3(struct intel_connector *VAR_0)
{
 struct intel_encoder *VAR_1;

 if (VAR_0->mst_port)
  return &FUNC_1(VAR_0->mst_port)->base;

 VAR_1 = FUNC_2(&VAR_0->base);
 FUNC_0(!VAR_1);

 return VAR_1;
}
