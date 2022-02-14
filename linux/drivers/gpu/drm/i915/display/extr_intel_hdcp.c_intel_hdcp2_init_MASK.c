
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_hdcp_shim {int dummy; } ;
struct intel_hdcp {int hdcp2_supported; } ;
struct intel_connector {struct intel_hdcp hdcp; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct intel_connector*,struct intel_hdcp_shim const*) ;

__attribute__((used)) static void FUNC_2(struct intel_connector *VAR_0,
        const struct intel_hdcp_shim *VAR_1)
{
 struct intel_hdcp *VAR_2 = &VAR_0->hdcp;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (VAR_3) {
  FUNC_0("Mei hdcp data init failed\n");
  return;
 }

 VAR_2->hdcp2_supported = 1;
}
