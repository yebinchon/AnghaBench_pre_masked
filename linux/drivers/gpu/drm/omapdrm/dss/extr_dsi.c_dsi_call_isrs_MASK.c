
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dsi_isr_data {int mask; int arg; int (* isr ) (int ,int) ;} ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct dsi_isr_data *VAR_0,
  unsigned int VAR_1, u32 VAR_2)
{
 struct dsi_isr_data *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3 = &VAR_0[VAR_4];
  if (VAR_3->isr && VAR_3->mask & VAR_2)
   VAR_3->isr(VAR_3->arg, VAR_2);
 }
}
