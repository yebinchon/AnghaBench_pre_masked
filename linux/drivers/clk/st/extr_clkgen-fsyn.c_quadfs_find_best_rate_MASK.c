
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef struct stm_fs const stm_fs ;
struct st_clk_quadfs_fsynth {TYPE_1__* data; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int (* get_rate ) (unsigned long,struct stm_fs const*,unsigned long*) ;int (* get_params ) (unsigned long,unsigned long,struct stm_fs const*) ;} ;


 struct st_clk_quadfs_fsynth* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_1(struct clk_hw *VAR_0, unsigned long VAR_1,
    unsigned long VAR_2, struct stm_fs *VAR_3)
{
 struct st_clk_quadfs_fsynth *VAR_4 = FUNC_0(VAR_0);
 int (*VAR_5)(unsigned long ,
    const struct stm_fs *, unsigned long *);
 int (*VAR_6)(unsigned long, unsigned long, struct stm_fs *);
 unsigned long VAR_7 = 0;

 VAR_5 = VAR_4->data->get_rate;
 VAR_6 = VAR_4->data->get_params;

 if (!VAR_6(VAR_2, VAR_1, VAR_3))
  VAR_5(VAR_2, VAR_3, &VAR_7);

 return VAR_7;
}
