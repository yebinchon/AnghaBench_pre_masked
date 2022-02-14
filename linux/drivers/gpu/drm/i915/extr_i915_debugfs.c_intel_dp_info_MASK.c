
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct intel_encoder {int base; } ;
struct intel_dp {int aux; int downstream_ports; int * dpcd; int has_audio; } ;
struct TYPE_4__ {scalar_t__ shim; } ;
struct TYPE_3__ {scalar_t__ connector_type; } ;
struct intel_connector {TYPE_2__ hdcp; int panel; TYPE_1__ base; struct intel_encoder* encoder; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct seq_file*,int *,int ,int *) ;
 struct intel_dp* FUNC_1 (int *) ;
 int FUNC_2 (struct seq_file*,struct intel_connector*) ;
 int FUNC_3 (struct seq_file*,int *) ;
 int FUNC_4 (struct seq_file*,char*,int ) ;
 int FUNC_5 (struct seq_file*,char*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct seq_file *VAR_2,
     struct intel_connector *VAR_3)
{
 struct intel_encoder *VAR_4 = VAR_3->encoder;
 struct intel_dp *VAR_5 = FUNC_1(&VAR_4->base);

 FUNC_4(VAR_2, "\tDPCD rev: %x\n", VAR_5->dpcd[VAR_0]);
 FUNC_4(VAR_2, "\taudio support: %s\n", FUNC_6(VAR_5->has_audio));
 if (VAR_3->base.connector_type == VAR_1)
  FUNC_3(VAR_2, &VAR_3->panel);

 FUNC_0(VAR_2, VAR_5->dpcd, VAR_5->downstream_ports,
    &VAR_5->aux);
 if (VAR_3->hdcp.shim) {
  FUNC_5(VAR_2, "\tHDCP version: ");
  FUNC_2(VAR_2, VAR_3);
 }
}
