
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etm_config {unsigned long seq_curr_state; } ;
struct etm_drvdata {int spinlock; int base; int mode; struct etm_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 struct etm_drvdata* FUNC_2 (int ) ;
 unsigned long FUNC_3 (struct etm_drvdata*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (char*,char*,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_2,
       struct device_attribute *VAR_3, char *VAR_4)
{
 unsigned long VAR_5, VAR_6;
 struct etm_drvdata *VAR_7 = FUNC_2(VAR_2->parent);
 struct etm_config *VAR_8 = &VAR_7->config;

 if (!FUNC_4(&VAR_7->mode)) {
  VAR_5 = VAR_8->seq_curr_state;
  goto out;
 }

 FUNC_5(VAR_2->parent);
 FUNC_7(&VAR_7->spinlock, VAR_6);

 FUNC_1(VAR_7->base);
 VAR_5 = (FUNC_3(VAR_7, VAR_0) & VAR_1);
 FUNC_0(VAR_7->base);

 FUNC_8(&VAR_7->spinlock, VAR_6);
 FUNC_6(VAR_2->parent);
out:
 return FUNC_9(VAR_4, "%#lx\n", VAR_5);
}
