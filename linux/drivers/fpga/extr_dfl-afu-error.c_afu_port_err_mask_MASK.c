
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dfl_feature_platform_data {int lock; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,int) ;
 struct dfl_feature_platform_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0, bool VAR_1)
{
 struct dfl_feature_platform_data *VAR_2 = FUNC_1(VAR_0);

 FUNC_2(&VAR_2->lock);
 FUNC_0(VAR_0, VAR_1);
 FUNC_3(&VAR_2->lock);
}
