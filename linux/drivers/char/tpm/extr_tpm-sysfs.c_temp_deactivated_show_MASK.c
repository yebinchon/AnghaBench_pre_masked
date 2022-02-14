
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tpm_chip {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int deactivated; } ;
struct TYPE_5__ {TYPE_1__ stclear_flags; } ;
typedef TYPE_2__ cap_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 struct tpm_chip* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct tpm_chip*,int ,TYPE_2__*,char*,int) ;
 int FUNC_3 (struct tpm_chip*) ;
 scalar_t__ FUNC_4 (struct tpm_chip*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
         struct device_attribute *VAR_2, char *VAR_3)
{
 struct tpm_chip *VAR_4 = FUNC_1(VAR_1);
 ssize_t VAR_5 = 0;
 cap_t VAR_6;

 if (FUNC_4(VAR_4))
  return 0;

 if (FUNC_2(FUNC_1(VAR_1), VAR_0, &VAR_6,
   "attempting to determine the temporary state",
   sizeof(VAR_6.stclear_flags)))
  goto out_ops;

 VAR_5 = FUNC_0(VAR_3, "%d\n", VAR_6.stclear_flags.deactivated);
out_ops:
 FUNC_3(VAR_4);
 return VAR_5;
}
