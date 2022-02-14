
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_dsi {int irq_data; } ;



__attribute__((used)) static void FUNC_0(struct mtk_dsi *VAR_0, u32 VAR_1)
{
 VAR_0->irq_data &= ~VAR_1;
}
