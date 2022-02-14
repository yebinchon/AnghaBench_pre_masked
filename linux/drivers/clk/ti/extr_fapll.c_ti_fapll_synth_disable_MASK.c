
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fapll_synth {int index; TYPE_1__* fd; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct fapll_synth* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct clk_hw *VAR_1)
{
 struct fapll_synth *VAR_2 = FUNC_1(VAR_1);
 u32 VAR_3 = FUNC_0(VAR_2->fd->base + VAR_0);

 VAR_3 |= 1 << VAR_2->index;
 FUNC_2(VAR_3, VAR_2->fd->base + VAR_0);
}
