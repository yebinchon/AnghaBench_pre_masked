
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm_fs {int dummy; } ;
struct st_clk_quadfs_fsynth {int dummy; } ;
struct clk_hw {int dummy; } ;
typedef int i ;


 int VAR_0 ;
 int FUNC_0 (struct stm_fs*,int ,int) ;
 long FUNC_1 (struct clk_hw*,unsigned long,unsigned long,struct stm_fs*) ;
 int FUNC_2 (struct st_clk_quadfs_fsynth*,struct stm_fs*) ;
 struct st_clk_quadfs_fsynth* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_1, unsigned long VAR_2,
      unsigned long VAR_3)
{
 struct st_clk_quadfs_fsynth *VAR_4 = FUNC_3(VAR_1);
 struct stm_fs VAR_5;
 long VAR_6;
 int FUNC_5(i);

 if (!VAR_2 || !VAR_3)
  return -VAR_0;

 FUNC_0(&VAR_5, 0, sizeof(struct stm_fs));

 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_5);
 if (!VAR_6)
  return -VAR_0;

 FUNC_2(VAR_4, &VAR_5);

 return 0;
}
