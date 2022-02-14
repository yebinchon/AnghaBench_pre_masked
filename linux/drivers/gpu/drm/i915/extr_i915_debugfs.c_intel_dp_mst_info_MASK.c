
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct intel_encoder {int base; } ;
struct intel_dp_mst_encoder {struct intel_digital_port* primary; } ;
struct intel_dp {int mst_mgr; } ;
struct intel_digital_port {struct intel_dp dp; } ;
struct intel_connector {int port; struct intel_encoder* encoder; } ;


 int FUNC_0 (int *,int ) ;
 struct intel_dp_mst_encoder* FUNC_1 (int *) ;
 int FUNC_2 (struct seq_file*,char*,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct seq_file *VAR_0,
     struct intel_connector *VAR_1)
{
 struct intel_encoder *VAR_2 = VAR_1->encoder;
 struct intel_dp_mst_encoder *VAR_3 =
  FUNC_1(&VAR_2->base);
 struct intel_digital_port *VAR_4 = VAR_3->primary;
 struct intel_dp *VAR_5 = &VAR_4->dp;
 bool VAR_6 = FUNC_0(&VAR_5->mst_mgr,
     VAR_1->port);

 FUNC_2(VAR_0, "\taudio support: %s\n", FUNC_3(VAR_6));
}
