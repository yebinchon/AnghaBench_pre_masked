
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct clk_hw {struct clk_init_data* init; } ;
struct clk_scu {struct clk_hw hw; int clk_type; scalar_t__ rsrc_id; } ;
struct clk_init_data {char const* name; char const* const* parent_names; int num_parents; int flags; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct clk_hw* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,struct clk_hw*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct clk_scu*) ;
 struct clk_scu* FUNC_3 (int,int ) ;

struct clk_hw *FUNC_4(const char *VAR_6, const char * const *VAR_7,
        int VAR_8, u32 VAR_9, u8 VAR_10)
{
 struct clk_init_data VAR_11;
 struct clk_scu *VAR_12;
 struct clk_hw *VAR_13;
 int VAR_14;

 VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return FUNC_0(-VAR_1);

 VAR_12->rsrc_id = VAR_9;
 VAR_12->clk_type = VAR_10;

 VAR_11.name = VAR_6;
 VAR_11.ops = &VAR_5;
 if (VAR_9 == VAR_3)
  VAR_11.ops = &VAR_4;
 else
  VAR_11.ops = &VAR_5;
 VAR_11.parent_names = VAR_7;
 VAR_11.num_parents = VAR_8;
 VAR_11.flags = VAR_0;
 VAR_12->hw.init = &VAR_11;

 VAR_13 = &VAR_12->hw;
 VAR_14 = FUNC_1(((void*)0), VAR_13);
 if (VAR_14) {
  FUNC_2(VAR_12);
  VAR_13 = FUNC_0(VAR_14);
 }

 return VAR_13;
}
