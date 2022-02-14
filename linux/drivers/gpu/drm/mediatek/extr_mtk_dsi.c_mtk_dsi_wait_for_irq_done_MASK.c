
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_dsi {int irq_data; int irq_wait_queue; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*,int) ;
 unsigned long FUNC_1 (unsigned int) ;
 int FUNC_2 (struct mtk_dsi*) ;
 int FUNC_3 (struct mtk_dsi*) ;
 scalar_t__ FUNC_4 (int ,int,unsigned long) ;

__attribute__((used)) static s32 FUNC_5(struct mtk_dsi *VAR_0, u32 VAR_1,
         unsigned int VAR_2)
{
 s32 VAR_3 = 0;
 unsigned long VAR_4 = FUNC_1(VAR_2);

 VAR_3 = FUNC_4(VAR_0->irq_wait_queue,
            VAR_0->irq_data & VAR_1,
            VAR_4);
 if (VAR_3 == 0) {
  FUNC_0("Wait DSI IRQ(0x%08x) Timeout\n", VAR_1);

  FUNC_2(VAR_0);
  FUNC_3(VAR_0);
 }

 return VAR_3;
}
