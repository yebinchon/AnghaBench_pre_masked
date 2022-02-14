
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etm_drvdata {int spinlock; int base; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 struct etm_drvdata* FUNC_2 (int ) ;
 unsigned long FUNC_3 (struct etm_drvdata*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (char*,char*,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 unsigned long VAR_4, VAR_5;
 struct etm_drvdata *VAR_6 = FUNC_2(VAR_1->parent);

 FUNC_4(VAR_1->parent);
 FUNC_6(&VAR_6->spinlock, VAR_4);
 FUNC_1(VAR_6->base);

 VAR_5 = FUNC_3(VAR_6, VAR_0);

 FUNC_0(VAR_6->base);
 FUNC_7(&VAR_6->spinlock, VAR_4);
 FUNC_5(VAR_1->parent);

 return FUNC_8(VAR_3, "%#lx\n", VAR_5);
}
