
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int groups; int * class; struct device* parent; } ;
struct fw_sysfs {int nowait; struct device dev; struct firmware* fw; } ;
struct firmware {int dummy; } ;
typedef enum fw_opt { ____Placeholder_fw_opt } fw_opt ;


 int VAR_0 ;
 struct fw_sysfs* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*,char const*) ;
 int FUNC_2 (struct device*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct fw_sysfs* FUNC_3 (int,int ) ;

__attribute__((used)) static struct fw_sysfs *
FUNC_4(struct firmware *VAR_5, const char *VAR_6,
     struct device *VAR_7, enum fw_opt VAR_8)
{
 struct fw_sysfs *VAR_9;
 struct device *VAR_10;

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_2);
 if (!VAR_9) {
  VAR_9 = FUNC_0(-VAR_0);
  goto exit;
 }

 VAR_9->nowait = !!(VAR_8 & VAR_1);
 VAR_9->fw = VAR_5;
 VAR_10 = &VAR_9->dev;

 FUNC_2(VAR_10);
 FUNC_1(VAR_10, "%s", VAR_6);
 VAR_10->parent = VAR_7;
 VAR_10->class = &VAR_3;
 VAR_10->groups = VAR_4;
exit:
 return VAR_9;
}
