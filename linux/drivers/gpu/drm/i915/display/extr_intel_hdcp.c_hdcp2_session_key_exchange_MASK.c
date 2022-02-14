
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_hdcp {TYPE_1__* shim; } ;
struct intel_digital_port {int dummy; } ;
struct intel_connector {struct intel_hdcp hdcp; } ;
struct hdcp2_ske_send_eks {int dummy; } ;
typedef int send_eks ;
struct TYPE_2__ {int (* write_2_2_msg ) (struct intel_digital_port*,struct hdcp2_ske_send_eks*,int) ;} ;


 struct intel_digital_port* FUNC_0 (struct intel_connector*) ;
 int FUNC_1 (struct intel_connector*,struct hdcp2_ske_send_eks*) ;
 int FUNC_2 (struct intel_digital_port*,struct hdcp2_ske_send_eks*,int) ;

__attribute__((used)) static int FUNC_3(struct intel_connector *VAR_0)
{
 struct intel_digital_port *VAR_1 = FUNC_0(VAR_0);
 struct intel_hdcp *VAR_2 = &VAR_0->hdcp;
 struct hdcp2_ske_send_eks VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = VAR_2->shim->write_2_2_msg(VAR_1, &VAR_3,
     sizeof(VAR_3));
 if (VAR_4 < 0)
  return VAR_4;

 return 0;
}
