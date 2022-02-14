
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct intel_hdmi {TYPE_1__* attached_connector; } ;
struct intel_hdcp {int is_paired; } ;
struct intel_digital_port {struct intel_hdmi hdmi; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct intel_hdcp hdcp; } ;


 int FUNC_0 (char*,int,int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct intel_digital_port*,int,int ) ;
 int FUNC_2 (struct intel_digital_port*,unsigned int,void*,int) ;

__attribute__((used)) static
int FUNC_3(struct intel_digital_port *VAR_1,
         u8 VAR_2, void *VAR_3, size_t VAR_4)
{
 struct intel_hdmi *VAR_5 = &VAR_1->hdmi;
 struct intel_hdcp *VAR_6 = &VAR_5->attached_connector->hdcp;
 unsigned int VAR_7;
 ssize_t VAR_8;

 VAR_8 = FUNC_1(VAR_1, VAR_2,
         VAR_6->is_paired);
 if (VAR_8 < 0)
  return VAR_8;





 if (VAR_8 > VAR_4) {
  FUNC_0("msg_sz(%zd) is more than exp size(%zu)\n",
         VAR_8, VAR_4);
  return -1;
 }

 VAR_7 = VAR_0;
 VAR_8 = FUNC_2(VAR_1, VAR_7, VAR_3, VAR_8);
 if (VAR_8)
  FUNC_0("Failed to read msg_id: %d(%zd)\n", VAR_2, VAR_8);

 return VAR_8;
}
