
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int hdcp2_encrypted; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_5__ {TYPE_1__ base; int name; } ;
struct intel_connector {TYPE_3__ hdcp; TYPE_2__ base; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (struct intel_connector*) ;
 int FUNC_2 (struct intel_connector*) ;

__attribute__((used)) static int FUNC_3(struct intel_connector *VAR_0)
{
 int VAR_1;

 FUNC_0("[%s:%d] HDCP2.2 is being Disabled\n",
        VAR_0->base.name, VAR_0->base.base.id);

 VAR_1 = FUNC_2(VAR_0);

 if (FUNC_1(VAR_0) < 0)
  FUNC_0("Port deauth failed.\n");

 VAR_0->hdcp.hdcp2_encrypted = 0;

 return VAR_1;
}
