
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cyapa {int state_sync_lock; int * input; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cyapa*,char*) ;
 int FUNC_1 (struct cyapa*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,...) ;
 struct cyapa* FUNC_4 (struct device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char const*,size_t) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_2,
         struct device_attribute *VAR_3,
         const char *VAR_4, size_t VAR_5)
{
 struct cyapa *VAR_6 = FUNC_4(VAR_2);
 char VAR_7[VAR_1];
 int VAR_8, VAR_9;

 if (VAR_5 >= VAR_1) {
  FUNC_3(VAR_2, "File name too long\n");
  return -VAR_0;
 }

 FUNC_6(VAR_7, VAR_4, VAR_5);
 if (VAR_7[VAR_5 - 1] == '\n')
  VAR_7[VAR_5 - 1] = '\0';
 else
  VAR_7[VAR_5] = '\0';

 if (VAR_6->input) {





  FUNC_5(VAR_6->input);
  VAR_6->input = ((void*)0);
 }

 VAR_9 = FUNC_7(&VAR_6->state_sync_lock);
 if (VAR_9) {




  FUNC_1(VAR_6);
  return VAR_9;
 }

 VAR_9 = FUNC_0(VAR_6, VAR_7);
 if (VAR_9)
  FUNC_3(VAR_2, "firmware update failed: %d\n", VAR_9);
 else
  FUNC_2(VAR_2, "firmware update successfully done.\n");





 VAR_8 = FUNC_1(VAR_6);
 if (VAR_8) {
  FUNC_3(VAR_2, "failed to re-detect after updated: %d\n", VAR_8);
  VAR_9 = VAR_9 ? VAR_9 : VAR_8;
 }

 FUNC_8(&VAR_6->state_sync_lock);

 return VAR_9 ? VAR_9 : VAR_5;
}
