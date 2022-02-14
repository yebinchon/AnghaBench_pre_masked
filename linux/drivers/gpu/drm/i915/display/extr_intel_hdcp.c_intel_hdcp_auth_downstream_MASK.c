
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct intel_hdcp_shim {int (* read_bstatus ) (struct intel_digital_port*,int*) ;int (* read_ksv_fifo ) (struct intel_digital_port*,int,int*) ;} ;
struct intel_digital_port {int dummy; } ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct TYPE_3__ {struct intel_hdcp_shim* shim; } ;
struct intel_connector {TYPE_2__ base; TYPE_1__ hdcp; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct intel_digital_port* FUNC_5 (struct intel_connector*) ;
 scalar_t__ FUNC_6 (struct drm_device*,int*,int) ;
 int FUNC_7 (struct intel_digital_port*,struct intel_hdcp_shim const*) ;
 int FUNC_8 (struct intel_digital_port*,struct intel_hdcp_shim const*,int*,int,int*) ;
 int* FUNC_9 (int ,int,int ) ;
 int FUNC_10 (int*) ;
 int FUNC_11 (struct intel_digital_port*,int*) ;
 int FUNC_12 (struct intel_digital_port*,int,int*) ;

__attribute__((used)) static
int FUNC_13(struct intel_connector *VAR_5)
{
 struct intel_digital_port *VAR_6 = FUNC_5(VAR_5);
 const struct intel_hdcp_shim *VAR_7 = VAR_5->hdcp.shim;
 struct drm_device *VAR_8 = VAR_5->base.dev;
 u8 VAR_9[2], VAR_10, *VAR_11;
 int VAR_12, VAR_13, VAR_14 = 3;

 VAR_12 = FUNC_7(VAR_6, VAR_7);
 if (VAR_12) {
  FUNC_0("KSV list failed to become ready (%d)\n", VAR_12);
  return VAR_12;
 }

 VAR_12 = VAR_7->read_bstatus(VAR_6, VAR_9);
 if (VAR_12)
  return VAR_12;

 if (FUNC_3(VAR_9[0]) ||
     FUNC_2(VAR_9[1])) {
  FUNC_0("Max Topology Limit Exceeded\n");
  return -VAR_3;
 }
 VAR_10 = FUNC_4(VAR_9[0]);
 if (VAR_10 == 0) {
  FUNC_0("Repeater with zero downstream devices\n");
  return -VAR_1;
 }

 VAR_11 = FUNC_9(VAR_0, VAR_10, VAR_4);
 if (!VAR_11) {
  FUNC_0("Out of mem: ksv_fifo\n");
  return -VAR_2;
 }

 VAR_12 = VAR_7->read_ksv_fifo(VAR_6, VAR_10, VAR_11);
 if (VAR_12)
  goto err;

 if (FUNC_6(VAR_8, VAR_11, VAR_10)) {
  FUNC_1("Revoked Ksv(s) in ksv_fifo\n");
  VAR_12 = -VAR_3;
  goto err;
 }





 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
  VAR_12 = FUNC_8(VAR_6, VAR_7,
        VAR_11, VAR_10,
        VAR_9);
  if (!VAR_12)
   break;
 }

 if (VAR_13 == VAR_14) {
  FUNC_0("V Prime validation failed.(%d)\n", VAR_12);
  goto err;
 }

 FUNC_0("HDCP is enabled (%d downstream devices)\n",
        VAR_10);
 VAR_12 = 0;
err:
 FUNC_10(VAR_11);
 return VAR_12;
}
