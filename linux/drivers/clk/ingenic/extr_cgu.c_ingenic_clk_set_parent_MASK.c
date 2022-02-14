
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct ingenic_clk {size_t idx; struct ingenic_cgu* cgu; } ;
struct TYPE_2__ {int bits; size_t shift; scalar_t__ reg; } ;
struct ingenic_cgu_clk_info {int type; int* parents; TYPE_1__ mux; } ;
struct ingenic_cgu {int lock; scalar_t__ base; struct ingenic_cgu_clk_info* clock_info; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (int,int ) ;
 size_t FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct ingenic_clk* FUNC_5 (struct clk_hw*) ;
 int FUNC_6 (size_t,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_2, u8 VAR_3)
{
 struct ingenic_clk *VAR_4 = FUNC_5(VAR_2);
 struct ingenic_cgu *VAR_5 = VAR_4->cgu;
 const struct ingenic_cgu_clk_info *VAR_6;
 unsigned long VAR_7;
 u8 VAR_8, VAR_9, VAR_10;
 u32 VAR_11, VAR_12;

 VAR_6 = &VAR_5->clock_info[VAR_4->idx];

 if (VAR_6->type & VAR_0) {






  VAR_9 = VAR_8 = 0;
  VAR_10 = 1 << VAR_6->mux.bits;
  for (; VAR_9 < VAR_10; VAR_9++) {
   if (VAR_6->parents[VAR_9] == -1)
    continue;
   if (VAR_8 == VAR_3)
    break;
   VAR_8++;
  }


  FUNC_0(VAR_8 != VAR_3);

  VAR_12 = FUNC_1(VAR_6->mux.bits - 1, 0);
  VAR_12 <<= VAR_6->mux.shift;

  FUNC_3(&VAR_5->lock, VAR_7);


  VAR_11 = FUNC_2(VAR_5->base + VAR_6->mux.reg);
  VAR_11 &= ~VAR_12;
  VAR_11 |= VAR_9 << VAR_6->mux.shift;
  FUNC_6(VAR_11, VAR_5->base + VAR_6->mux.reg);

  FUNC_4(&VAR_5->lock, VAR_7);
  return 0;
 }

 return VAR_3 ? -VAR_1 : 0;
}
