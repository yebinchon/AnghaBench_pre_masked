
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct clk_ops {int dummy; } ;
struct clk_hw {int dummy; } ;
struct clk_mux {struct clk_hw hw; scalar_t__ flags; void* mask; void* shift; void* reg; int * lock; void* bit_idx; } ;
struct clk_gate {struct clk_hw hw; scalar_t__ flags; void* mask; void* shift; void* reg; int * lock; void* bit_idx; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 struct clk_hw* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct clk_hw*) ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 struct clk_ops VAR_5 ;
 struct clk_hw* FUNC_2 (int *,char const*,char const* const*,int,struct clk_hw*,struct clk_ops const*,int *,int *,struct clk_hw*,struct clk_ops const*,unsigned long) ;
 struct clk_ops VAR_6 ;
 int FUNC_3 (struct clk_mux*) ;
 struct clk_mux* FUNC_4 (int,int ) ;

__attribute__((used)) static struct clk_hw *FUNC_5(const char *VAR_7,
  const char * const *VAR_8, int VAR_9,
  int VAR_10, u8 VAR_11, u8 VAR_12,
  int VAR_13, u8 VAR_14,
  unsigned long VAR_15, spinlock_t *VAR_16)
{
 struct clk_hw *VAR_17;
 struct clk_gate *VAR_18 = ((void*)0);
 struct clk_mux *VAR_19 = ((void*)0);
 struct clk_hw *VAR_20 = ((void*)0), *VAR_21 = ((void*)0);
 const struct clk_ops *VAR_22 = ((void*)0), *VAR_23 = ((void*)0);

 if (VAR_13 != VAR_2) {
  VAR_18 = FUNC_4(sizeof(*VAR_18), VAR_1);
  if (!VAR_18) {
   VAR_17 = FUNC_0(-VAR_0);
   goto fail;
  }

  VAR_18->reg = VAR_4 + VAR_13;
  VAR_18->bit_idx = VAR_14;
  VAR_18->flags = 0;
  VAR_18->lock = VAR_16;
  VAR_21 = &VAR_18->hw;
  VAR_23 = &VAR_5;
 }

 if (VAR_10 != VAR_3) {
  VAR_19 = FUNC_4(sizeof(*VAR_19), VAR_1);
  if (!VAR_19) {
   VAR_17 = FUNC_0(-VAR_0);
   goto fail;
  }

  VAR_19->reg = VAR_4 + VAR_10;
  VAR_19->shift = VAR_11;
  VAR_19->mask = VAR_12;
  VAR_19->flags = 0;
  VAR_20 = &VAR_19->hw;
  VAR_22 = &VAR_6;
 }

 if (VAR_20 == ((void*)0) && VAR_21 == ((void*)0)) {
  VAR_17 = FUNC_0(-VAR_0);
  goto fail;
 }

 VAR_17 = FUNC_2(((void*)0), VAR_7, VAR_8, VAR_9,
   VAR_20, VAR_22,
   ((void*)0), ((void*)0),
   VAR_21, VAR_23,
   VAR_15);

fail:
 if (FUNC_1(VAR_17)) {
  FUNC_3(VAR_18);
  FUNC_3(VAR_19);
 }

 return VAR_17;
}
