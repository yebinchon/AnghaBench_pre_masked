
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct co_cache_error {int ed; int notifier; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct co_cache_error* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct co_cache_error *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(&VAR_1->notifier);
 FUNC_0(&VAR_0->dev);
 FUNC_1(VAR_1->ed);
 return 0;
}
