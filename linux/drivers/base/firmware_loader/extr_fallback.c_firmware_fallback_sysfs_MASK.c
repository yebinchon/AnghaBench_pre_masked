
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firmware {int dummy; } ;
struct device {int dummy; } ;
typedef enum fw_opt { ____Placeholder_fw_opt } fw_opt ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,char const*) ;
 int FUNC_1 (struct device*,char*,char const*) ;
 int FUNC_2 (struct firmware*,char const*,struct device*,int) ;
 int FUNC_3 (int) ;

int FUNC_4(struct firmware *VAR_1, const char *VAR_2,
       struct device *VAR_3,
       enum fw_opt VAR_4,
       int VAR_5)
{
 if (!FUNC_3(VAR_4))
  return VAR_5;

 if (!(VAR_4 & VAR_0))
  FUNC_1(VAR_3, "Falling back to sysfs fallback for: %s\n",
     VAR_2);
 else
  FUNC_0(VAR_3, "Falling back to sysfs fallback for: %s\n",
    VAR_2);
 return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
}
