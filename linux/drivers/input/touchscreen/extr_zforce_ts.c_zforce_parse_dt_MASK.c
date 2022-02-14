
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zforce_ts_platdata {int y_max; int x_max; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct zforce_ts_platdata* FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct device*,char*) ;
 struct zforce_ts_platdata* FUNC_2 (struct device*,int,int ) ;
 scalar_t__ FUNC_3 (struct device_node*,char*,int *) ;

__attribute__((used)) static struct zforce_ts_platdata *FUNC_4(struct device *VAR_4)
{
 struct zforce_ts_platdata *VAR_5;
 struct device_node *VAR_6 = VAR_4->of_node;

 if (!VAR_6)
  return FUNC_0(-VAR_1);

 VAR_5 = FUNC_2(VAR_4, sizeof(*VAR_5), VAR_3);
 if (!VAR_5) {
  FUNC_1(VAR_4, "failed to allocate platform data\n");
  return FUNC_0(-VAR_2);
 }

 if (FUNC_3(VAR_6, "x-size", &VAR_5->x_max)) {
  FUNC_1(VAR_4, "failed to get x-size property\n");
  return FUNC_0(-VAR_0);
 }

 if (FUNC_3(VAR_6, "y-size", &VAR_5->y_max)) {
  FUNC_1(VAR_4, "failed to get y-size property\n");
  return FUNC_0(-VAR_0);
 }

 return VAR_5;
}
