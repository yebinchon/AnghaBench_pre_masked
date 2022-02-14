
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swnode {int kobj; } ;
struct fwnode_handle {struct fwnode_handle* secondary; } ;
struct device {int kobj; } ;




 struct fwnode_handle* FUNC_0 (struct device*) ;
 char* FUNC_1 (struct device*) ;
 int FUNC_2 (struct fwnode_handle*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,char*) ;
 int FUNC_6 (int *,char*) ;
 struct swnode* FUNC_7 (struct fwnode_handle*) ;

int FUNC_8(struct device *VAR_0, unsigned long VAR_1)
{
 struct fwnode_handle *VAR_2 = FUNC_0(VAR_0);
 struct swnode *VAR_3;
 int VAR_4;

 if (!VAR_2)
  return 0;

 if (!FUNC_2(VAR_2))
  VAR_2 = VAR_2->secondary;
 if (!FUNC_2(VAR_2))
  return 0;

 VAR_3 = FUNC_7(VAR_2);

 switch (VAR_1) {
 case 129:
  VAR_4 = FUNC_5(&VAR_0->kobj, &VAR_3->kobj,
     "software_node");
  if (VAR_4)
   break;

  VAR_4 = FUNC_5(&VAR_3->kobj, &VAR_0->kobj,
     FUNC_1(VAR_0));
  if (VAR_4) {
   FUNC_6(&VAR_0->kobj, "software_node");
   break;
  }
  FUNC_3(&VAR_3->kobj);
  break;
 case 128:
  FUNC_6(&VAR_3->kobj, FUNC_1(VAR_0));
  FUNC_6(&VAR_0->kobj, "software_node");
  FUNC_4(&VAR_3->kobj);
  break;
 default:
  break;
 }

 return 0;
}
