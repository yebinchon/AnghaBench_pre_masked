
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct intel_hdmi {int has_audio; } ;
struct intel_encoder {int base; } ;
struct TYPE_2__ {scalar_t__ shim; } ;
struct intel_connector {TYPE_1__ hdcp; struct intel_encoder* encoder; } ;


 struct intel_hdmi* FUNC_0 (int *) ;
 int FUNC_1 (struct seq_file*,struct intel_connector*) ;
 int FUNC_2 (struct seq_file*,char*,int ) ;
 int FUNC_3 (struct seq_file*,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct seq_file *VAR_0,
       struct intel_connector *VAR_1)
{
 struct intel_encoder *VAR_2 = VAR_1->encoder;
 struct intel_hdmi *VAR_3 = FUNC_0(&VAR_2->base);

 FUNC_2(VAR_0, "\taudio support: %s\n", FUNC_4(VAR_3->has_audio));
 if (VAR_1->hdcp.shim) {
  FUNC_3(VAR_0, "\tHDCP version: ");
  FUNC_1(VAR_0, VAR_1);
 }
}
