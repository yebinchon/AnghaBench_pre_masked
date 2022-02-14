
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int mouseButtonLeft; } ;
struct aiptek {TYPE_1__ curSetting; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct aiptek* FUNC_0 (struct device*) ;
 char* FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2, struct device_attribute *VAR_3, char *VAR_4)
{
 struct aiptek *VAR_5 = FUNC_0(VAR_2);

 return FUNC_2(VAR_4, VAR_0, "%s\n",
   FUNC_1(VAR_1,
     VAR_5->curSetting.mouseButtonLeft));
}
