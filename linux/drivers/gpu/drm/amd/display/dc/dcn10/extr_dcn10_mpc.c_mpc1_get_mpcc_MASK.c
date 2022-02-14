
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpcc {int dummy; } ;
struct mpc {struct mpcc* mpcc_array; } ;
struct dcn10_mpc {int num_mpcc; } ;


 int FUNC_0 (int) ;
 struct dcn10_mpc* FUNC_1 (struct mpc*) ;

struct mpcc *FUNC_2(struct mpc *VAR_0, int VAR_1)
{
 struct dcn10_mpc *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_1 < VAR_2->num_mpcc);
 return &(VAR_0->mpcc_array[VAR_1]);
}
