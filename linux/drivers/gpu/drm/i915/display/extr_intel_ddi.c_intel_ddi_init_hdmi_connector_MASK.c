
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int hdmi_reg; } ;
struct TYPE_3__ {int port; } ;
struct intel_digital_port {TYPE_2__ hdmi; TYPE_1__ base; } ;
struct intel_connector {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (int) ;
 struct intel_connector* FUNC_1 () ;
 int FUNC_2 (struct intel_digital_port*,struct intel_connector*) ;

__attribute__((used)) static struct intel_connector *
FUNC_3(struct intel_digital_port *VAR_0)
{
 struct intel_connector *VAR_1;
 enum port VAR_2 = VAR_0->base.port;

 VAR_1 = FUNC_1();
 if (!VAR_1)
  return ((void*)0);

 VAR_0->hdmi.hdmi_reg = FUNC_0(VAR_2);
 FUNC_2(VAR_0, VAR_1);

 return VAR_1;
}
