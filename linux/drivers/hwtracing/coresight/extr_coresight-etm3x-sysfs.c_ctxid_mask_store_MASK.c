
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etm_config {unsigned long ctxid_mask; } ;
struct etm_drvdata {struct etm_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct etm_drvdata* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char const*,int,unsigned long*) ;
 int * FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3,
    struct device_attribute *VAR_4,
    const char *VAR_5, size_t VAR_6)
{
 int VAR_7;
 unsigned long VAR_8;
 struct etm_drvdata *VAR_9 = FUNC_0(VAR_3->parent);
 struct etm_config *VAR_10 = &VAR_9->config;





 if (FUNC_2(VAR_1) != &VAR_2)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_5, 16, &VAR_8);
 if (VAR_7)
  return VAR_7;

 VAR_10->ctxid_mask = VAR_8;
 return VAR_6;
}
