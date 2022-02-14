
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ipu_pre {scalar_t__ buffer_virt; int iram; int clk_axi; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long,int) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct ipu_pre* FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_4)
{
 struct ipu_pre *VAR_5 = FUNC_5(VAR_4);

 FUNC_3(&VAR_3);
 FUNC_2(&VAR_5->list);
 VAR_2--;
 FUNC_4(&VAR_3);

 FUNC_0(VAR_5->clk_axi);

 if (VAR_5->buffer_virt)
  FUNC_1(VAR_5->iram, (unsigned long)VAR_5->buffer_virt,
         VAR_0 * VAR_1 * 4);
 return 0;
}
