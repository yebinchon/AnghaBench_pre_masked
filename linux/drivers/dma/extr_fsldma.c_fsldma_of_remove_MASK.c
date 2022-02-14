
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct fsldma_device {int regs; scalar_t__* chan; int common; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct fsldma_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct fsldma_device*) ;
 struct fsldma_device* FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct fsldma_device *VAR_2;
 unsigned int VAR_3;

 VAR_2 = FUNC_5(VAR_1);
 FUNC_0(&VAR_2->common);

 FUNC_2(VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2->chan[VAR_3])
   FUNC_1(VAR_2->chan[VAR_3]);
 }

 FUNC_3(VAR_2->regs);
 FUNC_4(VAR_2);

 return 0;
}
