
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {char** platform_data; scalar_t__ of_node; } ;
struct platform_device {struct device dev; } ;
struct component_match {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,struct component_match**,scalar_t__) ;
 int VAR_2 ;
 struct device* FUNC_1 (int *,int *,char*) ;
 int VAR_3 ;
 int FUNC_2 (struct device*,int *,struct component_match*) ;
 int FUNC_3 (struct device*,struct component_match**,int ,char*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,int ,int *) ;
 int VAR_4 ;
 int FUNC_6 (struct device*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_5)
{
 struct component_match *VAR_6 = ((void*)0);
 struct device *VAR_7 = &VAR_5->dev;
 int VAR_8;

 VAR_8 = FUNC_5(VAR_7, VAR_3, &VAR_2);
 if (VAR_8 != -VAR_0)
  return VAR_8;

 if (VAR_7->platform_data) {
  char **VAR_9 = VAR_7->platform_data;
  struct device *VAR_10;
  int VAR_11;

  for (VAR_11 = 0; VAR_9[VAR_11]; VAR_11++)
   FUNC_3(VAR_7, &VAR_6, VAR_3,
         VAR_9[VAR_11]);

  if (VAR_11 == 0) {
   FUNC_4(VAR_7, "missing 'ports' property\n");
   return -VAR_1;
  }

  for (VAR_11 = 0; VAR_9[VAR_11]; VAR_11++) {
   VAR_10 = FUNC_1(&VAR_4, ((void*)0),
          VAR_9[VAR_11]);
   if (VAR_10 && VAR_10->of_node)
    FUNC_0(VAR_7, &VAR_6, VAR_10->of_node);
   FUNC_6(VAR_10);
  }
 }

 return FUNC_2(&VAR_5->dev, &VAR_2,
            VAR_6);
}
