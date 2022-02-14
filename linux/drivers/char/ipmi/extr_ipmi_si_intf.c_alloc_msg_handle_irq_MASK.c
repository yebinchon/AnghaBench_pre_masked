
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smi_info {int si_state; } ;
struct ipmi_smi_msg {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct smi_info*) ;
 scalar_t__ FUNC_1 (struct smi_info*) ;
 struct ipmi_smi_msg* FUNC_2 () ;
 int FUNC_3 (struct ipmi_smi_msg*) ;

__attribute__((used)) static struct ipmi_smi_msg *FUNC_4(struct smi_info *VAR_1)
{
 struct ipmi_smi_msg *VAR_2;

 VAR_2 = FUNC_2();
 if (!VAR_2) {
  if (!FUNC_0(VAR_1))
   VAR_1->si_state = VAR_0;
 } else if (FUNC_1(VAR_1)) {
  FUNC_3(VAR_2);
  VAR_2 = ((void*)0);
 }
 return VAR_2;
}
