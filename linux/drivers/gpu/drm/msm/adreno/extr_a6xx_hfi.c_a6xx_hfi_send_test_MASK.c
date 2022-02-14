
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct a6xx_hfi_msg_test {int member_0; } ;
struct a6xx_gmu {int dummy; } ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (struct a6xx_gmu*,int ,struct a6xx_hfi_msg_test*,int,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct a6xx_gmu *VAR_1)
{
 struct a6xx_hfi_msg_test VAR_2 = { 0 };

 return FUNC_0(VAR_1, VAR_0, &VAR_2, sizeof(VAR_2),
  ((void*)0), 0);
}
