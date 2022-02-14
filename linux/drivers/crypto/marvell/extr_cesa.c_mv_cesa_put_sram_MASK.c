
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mv_cesa_engine {int sram_dma; scalar_t__ sram; scalar_t__ pool; } ;
struct mv_cesa_dev {int sram_size; int dev; struct mv_cesa_engine* engines; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__,unsigned long,int ) ;
 struct mv_cesa_dev* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_1, int VAR_2)
{
 struct mv_cesa_dev *VAR_3 = FUNC_2(VAR_1);
 struct mv_cesa_engine *VAR_4 = &VAR_3->engines[VAR_2];

 if (VAR_4->pool)
  FUNC_1(VAR_4->pool, (unsigned long)VAR_4->sram,
         VAR_3->sram_size);
 else
  FUNC_0(VAR_3->dev, VAR_4->sram_dma,
       VAR_3->sram_size, VAR_0, 0);
}
