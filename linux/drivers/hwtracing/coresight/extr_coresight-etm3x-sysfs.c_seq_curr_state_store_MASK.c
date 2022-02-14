
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etm_config {unsigned long seq_curr_state; } ;
struct etm_drvdata {struct etm_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 struct etm_drvdata* FUNC_0 (int ) ;
 int FUNC_1 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
        struct device_attribute *VAR_3,
        const char *VAR_4, size_t VAR_5)
{
 int VAR_6;
 unsigned long VAR_7;
 struct etm_drvdata *VAR_8 = FUNC_0(VAR_2->parent);
 struct etm_config *VAR_9 = &VAR_8->config;

 VAR_6 = FUNC_1(VAR_4, 16, &VAR_7);
 if (VAR_6)
  return VAR_6;

 if (VAR_7 > VAR_1)
  return -VAR_0;

 VAR_9->seq_curr_state = VAR_7;

 return VAR_5;
}
