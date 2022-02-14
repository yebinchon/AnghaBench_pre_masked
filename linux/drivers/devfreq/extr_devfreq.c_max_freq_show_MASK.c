
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct devfreq {int max_freq; int scaling_max_freq; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char*,int ) ;
 struct devfreq* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
        char *VAR_2)
{
 struct devfreq *VAR_3 = FUNC_2(VAR_0);

 return FUNC_1(VAR_2, "%lu\n", FUNC_0(VAR_3->scaling_max_freq, VAR_3->max_freq));
}
