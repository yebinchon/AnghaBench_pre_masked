
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_hdcp {int hdcp2_encrypted; int content_type; } ;
struct TYPE_3__ {int id; } ;
struct TYPE_4__ {TYPE_1__ base; int name; } ;
struct intel_connector {TYPE_2__ base; struct intel_hdcp hdcp; } ;


 int FUNC_0 (char*,int ,int,...) ;
 int FUNC_1 (struct intel_connector*) ;

__attribute__((used)) static int FUNC_2(struct intel_connector *VAR_0)
{
 struct intel_hdcp *VAR_1 = &VAR_0->hdcp;
 int VAR_2;

 FUNC_0("[%s:%d] HDCP2.2 is being enabled. Type: %d\n",
        VAR_0->base.name, VAR_0->base.base.id,
        VAR_1->content_type);

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2) {
  FUNC_0("HDCP2 Type%d  Enabling Failed. (%d)\n",
         VAR_1->content_type, VAR_2);
  return VAR_2;
 }

 FUNC_0("[%s:%d] HDCP2.2 is enabled. Type %d\n",
        VAR_0->base.name, VAR_0->base.base.id,
        VAR_1->content_type);

 VAR_1->hdcp2_encrypted = 1;
 return 0;
}
