
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sun9i_a80_cpus_clk {int reg; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (unsigned long,int *,int *,int ,unsigned long) ;
 int VAR_0 ;
 struct sun9i_a80_cpus_clk* FUNC_7 (struct clk_hw*) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct clk_hw *VAR_1, unsigned long VAR_2,
           unsigned long VAR_3)
{
 struct sun9i_a80_cpus_clk *VAR_4 = FUNC_7(VAR_1);
 unsigned long VAR_5;
 u8 VAR_6, VAR_7, VAR_8;
 u32 VAR_9;

 FUNC_4(&VAR_0, VAR_5);

 VAR_9 = FUNC_3(VAR_4->reg);


 VAR_8 = FUNC_1(VAR_9);
 FUNC_6(VAR_2, &VAR_6, &VAR_7, VAR_8, VAR_3);

 VAR_9 = FUNC_0(VAR_9, VAR_6);
 VAR_9 = FUNC_2(VAR_9, VAR_7);
 FUNC_8(VAR_9, VAR_4->reg);

 FUNC_5(&VAR_0, VAR_5);

 return 0;
}
