
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cyapa {int state_sync_lock; int gen; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct cyapa*) ;
 struct cyapa* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,char*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
       struct device_attribute *VAR_2, char *VAR_3)
{
 struct cyapa *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(&VAR_4->state_sync_lock);
 if (VAR_6)
  return VAR_6;

 VAR_5 = FUNC_4(VAR_3, VAR_0, "gen%d %s\n",
   VAR_4->gen, FUNC_0(VAR_4));

 FUNC_3(&VAR_4->state_sync_lock);
 return VAR_5;
}
