
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cyapa {int state_sync_lock; int fw_min_ver; int fw_maj_ver; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct cyapa* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,char*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 int VAR_4;
 struct cyapa *VAR_5 = FUNC_0(VAR_1);

 VAR_4 = FUNC_1(&VAR_5->state_sync_lock);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_3(VAR_3, VAR_0, "%d.%d\n", VAR_5->fw_maj_ver,
    VAR_5->fw_min_ver);
 FUNC_2(&VAR_5->state_sync_lock);
 return VAR_4;
}
