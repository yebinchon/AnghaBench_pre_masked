
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
typedef size_t u32 ;
struct clk_hw {int dummy; } ;
struct berlin2_pll_map {size_t fbdiv_shift; size_t rfdiv_shift; size_t divsel_shift; size_t* vcodiv; size_t mult; } ;
struct berlin2_pll {scalar_t__ base; struct berlin2_pll_map map; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (size_t,size_t) ;
 int FUNC_2 (char*,int ,...) ;
 size_t FUNC_3 (scalar_t__) ;
 struct berlin2_pll* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static unsigned long
FUNC_5(struct clk_hw *VAR_5, unsigned long VAR_6)
{
 struct berlin2_pll *VAR_7 = FUNC_4(VAR_5);
 struct berlin2_pll_map *VAR_8 = &VAR_7->map;
 u32 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 u64 VAR_14 = VAR_6;

 VAR_9 = FUNC_3(VAR_7->base + VAR_3);
 VAR_10 = (VAR_9 >> VAR_8->fbdiv_shift) & VAR_1;
 VAR_11 = (VAR_9 >> VAR_8->rfdiv_shift) & VAR_2;
 if (VAR_11 == 0) {
  FUNC_2("%s has zero rfdiv\n", FUNC_0(VAR_5));
  VAR_11 = 1;
 }

 VAR_9 = FUNC_3(VAR_7->base + VAR_4);
 VAR_12 = (VAR_9 >> VAR_8->divsel_shift) & VAR_0;
 VAR_13 = VAR_8->vcodiv[VAR_12];
 if (VAR_13 == 0) {
  FUNC_2("%s has zero vcodiv (index %d)\n",
   FUNC_0(VAR_5), VAR_12);
  VAR_13 = 1;
 }

 VAR_14 *= VAR_10 * VAR_8->mult;
 FUNC_1(VAR_14, VAR_11 * VAR_13);

 return (unsigned long)VAR_14;
}
