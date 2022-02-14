
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct intel_hdcp_shim {int (* hdcp_capable ) (struct intel_digital_port*,int*) ;} ;
struct intel_digital_port {int dummy; } ;
struct TYPE_2__ {struct intel_hdcp_shim* shim; } ;
struct intel_connector {TYPE_1__ hdcp; } ;


 struct intel_digital_port* FUNC_0 (struct intel_connector*) ;
 int FUNC_1 (struct intel_digital_port*,struct intel_hdcp_shim const*,int *) ;
 int FUNC_2 (struct intel_digital_port*,int*) ;

bool FUNC_3(struct intel_connector *VAR_0)
{
 struct intel_digital_port *VAR_1 = FUNC_0(VAR_0);
 const struct intel_hdcp_shim *VAR_2 = VAR_0->hdcp.shim;
 bool VAR_3 = 0;
 u8 VAR_4[5];

 if (!VAR_2)
  return VAR_3;

 if (VAR_2->hdcp_capable) {
  VAR_2->hdcp_capable(VAR_1, &VAR_3);
 } else {
  if (!FUNC_1(VAR_1, VAR_2, VAR_4))
   VAR_3 = 1;
 }

 return VAR_3;
}
