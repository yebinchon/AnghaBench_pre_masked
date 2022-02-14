
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_smi {int dummy; } ;
struct ipmi_device_id {int dummy; } ;
struct bmc_device {int dummy; } ;
typedef int guid_t ;


 int FUNC_0 (struct ipmi_smi*,struct bmc_device*,struct ipmi_device_id*,int*,int *,int) ;

__attribute__((used)) static int FUNC_1(struct ipmi_smi *VAR_0, struct bmc_device *VAR_1,
        struct ipmi_device_id *VAR_2,
        bool *VAR_3, guid_t *VAR_4)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, -1);
}
