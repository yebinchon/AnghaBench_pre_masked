
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpumf_ctr_info {int act_ctl; int enable_ctl; int auth_ctl; int csvn; int cfvn; } ;
typedef int cf_info ;


 int FUNC_0 (struct cpumf_ctr_info*,int ,int) ;
 int FUNC_1 (char*,int,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct cpumf_ctr_info*) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void)
{
 struct cpumf_ctr_info VAR_0;
 int VAR_1 = FUNC_3();

 FUNC_0(&VAR_0, 0, sizeof(VAR_0));
 if (!FUNC_2(&VAR_0))
  FUNC_1("CPU[%i] CPUM_CF: ver=%u.%u A=%04x E=%04x C=%04x\n",
   VAR_1, VAR_0.cfvn, VAR_0.csvn,
   VAR_0.auth_ctl, VAR_0.enable_ctl, VAR_0.act_ctl);
}
