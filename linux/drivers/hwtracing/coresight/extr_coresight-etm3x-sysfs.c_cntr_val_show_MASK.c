
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct etm_config {int* cntr_val; } ;
struct etm_drvdata {int nr_cntr; int spinlock; int mode; struct etm_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 struct etm_drvdata* FUNC_1 (int ) ;
 int FUNC_2 (struct etm_drvdata*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char*,char*,int,int) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_0,
        struct device_attribute *VAR_1, char *VAR_2)
{
 int VAR_3, VAR_4 = 0;
 u32 VAR_5;
 struct etm_drvdata *VAR_6 = FUNC_1(VAR_0->parent);
 struct etm_config *VAR_7 = &VAR_6->config;

 if (!FUNC_3(&VAR_6->mode)) {
  FUNC_4(&VAR_6->spinlock);
  for (VAR_3 = 0; VAR_3 < VAR_6->nr_cntr; VAR_3++)
   VAR_4 += FUNC_6(VAR_2, "counter %d: %x\n",
           VAR_3, VAR_7->cntr_val[VAR_3]);
  FUNC_5(&VAR_6->spinlock);
  return VAR_4;
 }

 for (VAR_3 = 0; VAR_3 < VAR_6->nr_cntr; VAR_3++) {
  VAR_5 = FUNC_2(VAR_6, FUNC_0(VAR_3));
  VAR_4 += FUNC_6(VAR_2, "counter %d: %x\n", VAR_3, VAR_5);
 }

 return VAR_4;
}
