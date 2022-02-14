
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssif_info {struct ipmi_smi* intf; } ;
struct ipmi_smi {int dummy; } ;



__attribute__((used)) static int FUNC_0(void *VAR_0,
     struct ipmi_smi *VAR_1)
{
 struct ssif_info *VAR_2 = VAR_0;

 VAR_2->intf = VAR_1;

 return 0;
}
