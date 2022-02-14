
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int prepare_link_retrain; int output_reg; } ;
struct TYPE_3__ {int port; } ;
struct intel_digital_port {TYPE_2__ dp; TYPE_1__ base; } ;
struct intel_connector {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (int) ;
 struct intel_connector* FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (struct intel_digital_port*,struct intel_connector*) ;
 int FUNC_3 (struct intel_connector*) ;

__attribute__((used)) static struct intel_connector *
FUNC_4(struct intel_digital_port *VAR_1)
{
 struct intel_connector *VAR_2;
 enum port VAR_3 = VAR_1->base.port;

 VAR_2 = FUNC_1();
 if (!VAR_2)
  return ((void*)0);

 VAR_1->dp.output_reg = FUNC_0(VAR_3);
 VAR_1->dp.prepare_link_retrain =
  VAR_0;

 if (!FUNC_2(VAR_1, VAR_2)) {
  FUNC_3(VAR_2);
  return ((void*)0);
 }

 return VAR_2;
}
