
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {int mc_idx; } ;
struct i82975x_error_info {int dummy; } ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (struct mem_ctl_info*,struct i82975x_error_info*) ;
 int FUNC_2 (struct mem_ctl_info*,struct i82975x_error_info*,int) ;

__attribute__((used)) static void FUNC_3(struct mem_ctl_info *VAR_0)
{
 struct i82975x_error_info VAR_1;

 FUNC_0(1, "MC%d\n", VAR_0->mc_idx);
 FUNC_1(VAR_0, &VAR_1);
 FUNC_2(VAR_0, &VAR_1, 1);
}
