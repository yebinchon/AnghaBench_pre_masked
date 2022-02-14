
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_uverbs_device {int disassociate_srcu; int ib_dev; } ;
struct ib_device {char* name; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct ib_uverbs_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,char*) ;
 struct ib_device* FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1, struct device_attribute *VAR_2,
     char *VAR_3)
{
 int VAR_4 = -VAR_0;
 int VAR_5;
 struct ib_uverbs_device *VAR_6 = FUNC_0(VAR_1);
 struct ib_device *VAR_7;

 if (!VAR_6)
  return -VAR_0;

 VAR_5 = FUNC_3(&VAR_6->disassociate_srcu);
 VAR_7 = FUNC_2(VAR_6->ib_dev, &VAR_6->disassociate_srcu);
 if (VAR_7)
  VAR_4 = FUNC_1(VAR_3, "%s\n", VAR_7->name);
 FUNC_4(&VAR_6->disassociate_srcu, VAR_5);

 return VAR_4;
}
