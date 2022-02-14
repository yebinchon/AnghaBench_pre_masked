
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_hdcp_shim {int (* write_2_2_msg ) (struct intel_digital_port*,struct hdcp2_lc_init*,int) ;int (* read_2_2_msg ) (struct intel_digital_port*,int ,struct hdcp2_lc_send_lprime*,int) ;} ;
struct intel_hdcp {struct intel_hdcp_shim* shim; } ;
struct intel_digital_port {int dummy; } ;
struct intel_connector {struct intel_hdcp hdcp; } ;
struct hdcp2_lc_send_lprime {int dummy; } ;
struct hdcp2_lc_init {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct intel_digital_port* FUNC_0 (struct intel_connector*) ;
 int FUNC_1 (struct intel_connector*,struct hdcp2_lc_init*) ;
 int FUNC_2 (struct intel_connector*,struct hdcp2_lc_send_lprime*) ;
 int FUNC_3 (struct intel_digital_port*,struct hdcp2_lc_init*,int) ;
 int FUNC_4 (struct intel_digital_port*,int ,struct hdcp2_lc_send_lprime*,int) ;

__attribute__((used)) static int FUNC_5(struct intel_connector *VAR_2)
{
 struct intel_digital_port *VAR_3 = FUNC_0(VAR_2);
 struct intel_hdcp *VAR_4 = &VAR_2->hdcp;
 union {
  struct hdcp2_lc_init lc_init;
  struct hdcp2_lc_send_lprime send_lprime;
 } VAR_5;
 const struct intel_hdcp_shim *VAR_6 = VAR_4->shim;
 int VAR_7 = VAR_0, VAR_8, VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  VAR_8 = FUNC_1(VAR_2, &VAR_5.lc_init);
  if (VAR_8 < 0)
   continue;

  VAR_8 = VAR_6->write_2_2_msg(VAR_3, &VAR_5.lc_init,
          sizeof(VAR_5.lc_init));
  if (VAR_8 < 0)
   continue;

  VAR_8 = VAR_6->read_2_2_msg(VAR_3,
      VAR_1,
      &VAR_5.send_lprime,
      sizeof(VAR_5.send_lprime));
  if (VAR_8 < 0)
   continue;

  VAR_8 = FUNC_2(VAR_2, &VAR_5.send_lprime);
  if (!VAR_8)
   break;
 }

 return VAR_8;
}
