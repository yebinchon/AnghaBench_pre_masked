
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct ingenic_clk {size_t idx; struct ingenic_cgu* cgu; } ;
struct TYPE_2__ {size_t shift; scalar_t__ bits; scalar_t__ reg; } ;
struct ingenic_cgu_clk_info {int type; int* parents; TYPE_1__ mux; } ;
struct ingenic_cgu {scalar_t__ base; struct ingenic_cgu_clk_info* clock_info; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (scalar_t__,int ) ;
 size_t FUNC_1 (scalar_t__) ;
 struct ingenic_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_3(struct clk_hw *VAR_1)
{
 struct ingenic_clk *VAR_2 = FUNC_2(VAR_1);
 struct ingenic_cgu *VAR_3 = VAR_2->cgu;
 const struct ingenic_cgu_clk_info *VAR_4;
 u32 VAR_5;
 u8 VAR_6, VAR_7, VAR_8 = 0;

 VAR_4 = &VAR_3->clock_info[VAR_2->idx];

 if (VAR_4->type & VAR_0) {
  VAR_5 = FUNC_1(VAR_3->base + VAR_4->mux.reg);
  VAR_7 = (VAR_5 >> VAR_4->mux.shift) &
    FUNC_0(VAR_4->mux.bits - 1, 0);





  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
   if (VAR_4->parents[VAR_6] != -1)
    VAR_8++;
  }
 }

 return VAR_8;
}
