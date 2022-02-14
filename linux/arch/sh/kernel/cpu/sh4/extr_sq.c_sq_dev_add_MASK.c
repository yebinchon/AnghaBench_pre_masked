
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subsys_interface {int dummy; } ;
struct kobject {int dummy; } ;
struct device {unsigned int id; int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kobject*,int *,int *,char*,char*) ;
 int FUNC_1 (struct kobject*,int ) ;
 int VAR_3 ;
 struct kobject* FUNC_2 (int,int ) ;
 struct kobject** VAR_4 ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_5, struct subsys_interface *VAR_6)
{
 unsigned int VAR_7 = VAR_5->id;
 struct kobject *VAR_8;
 int VAR_9;

 VAR_4[VAR_7] = FUNC_2(sizeof(struct kobject), VAR_1);
 if (FUNC_3(!VAR_4[VAR_7]))
  return -VAR_0;

 VAR_8 = VAR_4[VAR_7];
 VAR_9 = FUNC_0(VAR_8, &VAR_3, &VAR_5->kobj,
         "%s", "sq");
 if (!VAR_9)
  FUNC_1(VAR_8, VAR_2);
 return VAR_9;
}
