
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_tmu_device {scalar_t__ has_clocksource; scalar_t__ has_clockevent; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct sh_tmu_device*) ;
 struct sh_tmu_device* FUNC_3 (int,int ) ;
 struct sh_tmu_device* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct sh_tmu_device*,struct platform_device*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_2)
{
 struct sh_tmu_device *VAR_3 = FUNC_4(VAR_2);
 int VAR_4;

 if (!FUNC_1(VAR_2)) {
  FUNC_8(&VAR_2->dev);
  FUNC_5(&VAR_2->dev);
 }

 if (VAR_3) {
  FUNC_0(&VAR_2->dev, "kept as earlytimer\n");
  goto out;
 }

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_1);
 if (VAR_3 == ((void*)0))
  return -VAR_0;

 VAR_4 = FUNC_9(VAR_3, VAR_2);
 if (VAR_4) {
  FUNC_2(VAR_3);
  FUNC_6(&VAR_2->dev);
  return VAR_4;
 }
 if (FUNC_1(VAR_2))
  return 0;

 out:
 if (VAR_3->has_clockevent || VAR_3->has_clocksource)
  FUNC_7(&VAR_2->dev);
 else
  FUNC_6(&VAR_2->dev);

 return 0;
}
