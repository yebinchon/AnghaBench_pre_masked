
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int num_common_rates; int common_rates; int num_sink_rates; int sink_rates; int num_source_rates; int source_rates; } ;
typedef int str ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct intel_dp *VAR_2)
{
 char VAR_3[128];

 if ((VAR_1 & VAR_0) == 0)
  return;

 FUNC_1(VAR_3, sizeof(VAR_3),
      VAR_2->source_rates, VAR_2->num_source_rates);
 FUNC_0("source rates: %s\n", VAR_3);

 FUNC_1(VAR_3, sizeof(VAR_3),
      VAR_2->sink_rates, VAR_2->num_sink_rates);
 FUNC_0("sink rates: %s\n", VAR_3);

 FUNC_1(VAR_3, sizeof(VAR_3),
      VAR_2->common_rates, VAR_2->num_common_rates);
 FUNC_0("common rates: %s\n", VAR_3);
}
