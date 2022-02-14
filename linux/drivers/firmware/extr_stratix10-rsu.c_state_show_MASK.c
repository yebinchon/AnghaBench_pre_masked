
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct stratix10_rsu_priv {TYPE_1__ status; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct stratix10_rsu_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
     char *VAR_3)
{
 struct stratix10_rsu_priv *VAR_4 = FUNC_0(VAR_1);

 if (!VAR_4)
  return -VAR_0;

 return FUNC_1(VAR_3, "0x%08x\n", VAR_4->status.state);
}
