
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int alt_stfle_fac_list; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int VAR_2 ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (int) ;

ssize_t FUNC_4(struct device *VAR_3,
       struct device_attribute *VAR_4, char *VAR_5)
{
 if (FUNC_3(156))
  return FUNC_2(VAR_5, "Mitigation: etokens\n");
 if (FUNC_0(VAR_0) && !VAR_2)
  return FUNC_2(VAR_5, "Mitigation: execute trampolines\n");
 if (FUNC_1(82, VAR_1.alt_stfle_fac_list))
  return FUNC_2(VAR_5, "Mitigation: limited branch prediction\n");
 return FUNC_2(VAR_5, "Vulnerable\n");
}
