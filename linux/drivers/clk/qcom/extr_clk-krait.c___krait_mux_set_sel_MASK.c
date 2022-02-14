
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct krait_mux_clk {int mask; int shift; int offset; scalar_t__ lpl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct krait_mux_clk *VAR_2, int VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5;

 FUNC_3(&VAR_1, VAR_4);
 VAR_5 = FUNC_0(VAR_2->offset);
 VAR_5 &= ~(VAR_2->mask << VAR_2->shift);
 VAR_5 |= (VAR_3 & VAR_2->mask) << VAR_2->shift;
 if (VAR_2->lpl) {
  VAR_5 &= ~(VAR_2->mask << (VAR_2->shift + VAR_0));
  VAR_5 |= (VAR_3 & VAR_2->mask) << (VAR_2->shift + VAR_0);
 }
 FUNC_1(VAR_2->offset, VAR_5);
 FUNC_4(&VAR_1, VAR_4);


 FUNC_2();
 FUNC_5(1);
}
