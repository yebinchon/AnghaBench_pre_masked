
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etm_config {int * addr_type; int trigger_event; int mode; } ;
struct etm_drvdata {int nr_addr_cmp; int spinlock; struct etm_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct etm_drvdata* FUNC_0 (int ) ;
 int FUNC_1 (struct etm_config*) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (struct etm_config*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
      struct device_attribute *VAR_4,
      const char *VAR_5, size_t VAR_6)
{
 int VAR_7, VAR_8;
 unsigned long VAR_9;
 struct etm_drvdata *VAR_10 = FUNC_0(VAR_3->parent);
 struct etm_config *VAR_11 = &VAR_10->config;

 VAR_8 = FUNC_2(VAR_5, 16, &VAR_9);
 if (VAR_8)
  return VAR_8;

 if (VAR_9) {
  FUNC_4(&VAR_10->spinlock);
  FUNC_3(VAR_11, 0, sizeof(struct etm_config));
  VAR_11->mode = VAR_2;
  VAR_11->trigger_event = VAR_1;
  for (VAR_7 = 0; VAR_7 < VAR_10->nr_addr_cmp; VAR_7++) {
   VAR_11->addr_type[VAR_7] = VAR_0;
  }

  FUNC_1(VAR_11);
  FUNC_5(&VAR_10->spinlock);
 }

 return VAR_6;
}
