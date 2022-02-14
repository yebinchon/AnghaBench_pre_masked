
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_driver {int driver; } ;
struct device {int dummy; } ;
struct component_match {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct component_match* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct component_match*) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,struct component_match**,int ,struct device*) ;
 int FUNC_3 (struct device*,struct device*,int ) ;
 int VAR_3 ;
 struct device* FUNC_4 (struct device*,int *) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 struct platform_driver** VAR_4 ;

__attribute__((used)) static struct component_match *FUNC_7(struct device *VAR_5)
{
 struct component_match *VAR_6 = ((void*)0);
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  struct platform_driver *VAR_8 = VAR_4[VAR_7];
  struct device *VAR_9 = ((void*)0), *VAR_10;

  do {
   VAR_10 = FUNC_4(VAR_9, &VAR_8->driver);
   FUNC_5(VAR_9);
   VAR_9 = VAR_10;

   if (!VAR_10)
    break;

   FUNC_3(VAR_5, VAR_10, VAR_0);
   FUNC_2(VAR_5, &VAR_6, VAR_2, VAR_10);
  } while (1);
 }

 if (FUNC_1(VAR_6))
  FUNC_6(VAR_5);

 return VAR_6 ?: FUNC_0(-VAR_1);
}
