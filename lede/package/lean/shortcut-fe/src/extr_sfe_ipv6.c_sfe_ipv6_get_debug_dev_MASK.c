
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfe_ipv6 {int debug_dev; int lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 struct sfe_ipv6 VAR_1 ;
 int FUNC_0 (char*,int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
          struct device_attribute *VAR_3,
          char *VAR_4)
{
 struct sfe_ipv6 *VAR_5 = &VAR_1;
 ssize_t VAR_6;
 int VAR_7;

 FUNC_1(&VAR_5->lock);
 VAR_7 = VAR_5->debug_dev;
 FUNC_2(&VAR_5->lock);

 VAR_6 = FUNC_0(VAR_4, (ssize_t)VAR_0, "%d\n", VAR_7);
 return VAR_6;
}
