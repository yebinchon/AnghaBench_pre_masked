
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int base; } ;
struct vic {int falcon; TYPE_1__ client; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct vic* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct vic *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(&VAR_1->client.base);
 if (VAR_2 < 0) {
  FUNC_0(&VAR_0->dev, "failed to unregister host1x client: %d\n",
   VAR_2);
  return VAR_2;
 }

 if (FUNC_5(&VAR_0->dev))
  FUNC_4(&VAR_0->dev);
 else
  FUNC_6(&VAR_0->dev);

 FUNC_1(&VAR_1->falcon);

 return 0;
}
