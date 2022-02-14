
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hws_qsi_info_block {int dear; int tear; int dsdes; int cd; int ed; scalar_t__ ad; int bsdes; int cs; int es; scalar_t__ as; int cpu_speed; int max_sampl_rate; int min_sampl_rate; } ;
typedef int si ;


 int FUNC_0 (struct hws_qsi_info_block*,int ,int) ;
 int FUNC_1 (char*,int,scalar_t__,int ,int ,int ,int ,...) ;
 scalar_t__ FUNC_2 (struct hws_qsi_info_block*) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void)
{
 struct hws_qsi_info_block VAR_0;
 int VAR_1 = FUNC_3();

 FUNC_0(&VAR_0, 0, sizeof(VAR_0));
 if (FUNC_2(&VAR_0))
  return;

 FUNC_1("CPU[%i] CPUM_SF: basic=%i diag=%i min=%lu max=%lu cpu_speed=%u\n",
  VAR_1, VAR_0.as, VAR_0.ad, VAR_0.min_sampl_rate, VAR_0.max_sampl_rate,
  VAR_0.cpu_speed);

 if (VAR_0.as)
  FUNC_1("CPU[%i] CPUM_SF: Basic-sampling: a=%i e=%i c=%i"
   " bsdes=%i tear=%016lx dear=%016lx\n", VAR_1,
   VAR_0.as, VAR_0.es, VAR_0.cs, VAR_0.bsdes, VAR_0.tear, VAR_0.dear);
 if (VAR_0.ad)
  FUNC_1("CPU[%i] CPUM_SF: Diagnostic-sampling: a=%i e=%i c=%i"
   " dsdes=%i tear=%016lx dear=%016lx\n", VAR_1,
   VAR_0.ad, VAR_0.ed, VAR_0.cd, VAR_0.dsdes, VAR_0.tear, VAR_0.dear);
}
