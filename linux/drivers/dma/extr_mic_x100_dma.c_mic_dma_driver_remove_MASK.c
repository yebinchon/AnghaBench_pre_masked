
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_dma_device {int dbg_dir; } ;
struct mbus_device {int dev; } ;


 int FUNC_0 (int ) ;
 struct mic_dma_device* FUNC_1 (int *) ;
 int FUNC_2 (struct mic_dma_device*) ;

__attribute__((used)) static void FUNC_3(struct mbus_device *VAR_0)
{
 struct mic_dma_device *VAR_1;

 VAR_1 = FUNC_1(&VAR_0->dev);
 FUNC_0(VAR_1->dbg_dir);
 FUNC_2(VAR_1);
}
