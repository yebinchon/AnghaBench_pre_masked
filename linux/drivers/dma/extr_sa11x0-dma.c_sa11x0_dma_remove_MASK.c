
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa11x0_dma_dev {int base; int task; int * phy; int slave; } ;
struct platform_device {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sa11x0_dma_dev*) ;
 struct sa11x0_dma_dev* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct platform_device*,unsigned int,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct sa11x0_dma_dev *VAR_2 = FUNC_3(VAR_1);
 unsigned VAR_3;

 FUNC_0(&VAR_2->slave);

 FUNC_4(&VAR_2->slave);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_5(VAR_1, VAR_3, &VAR_2->phy[VAR_3]);
 FUNC_6(&VAR_2->task);
 FUNC_1(VAR_2->base);
 FUNC_2(VAR_2);

 return 0;
}
