
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc {int dummy; } ;
struct dcn20_mpc {int dummy; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int ,int ,int,int ,int) ;
 struct dcn20_mpc* FUNC_2 (struct mpc*) ;

__attribute__((used)) static void FUNC_3(
  struct mpc *VAR_4, int VAR_5,
  bool VAR_6)
{
 struct dcn20_mpc *VAR_7 = FUNC_2(VAR_4);

 FUNC_1(VAR_1[VAR_5],
   VAR_3, 7,
   VAR_2, VAR_6 == 1 ? 0:1);

 FUNC_0(VAR_0[VAR_5], 0, VAR_0, 0);
}
