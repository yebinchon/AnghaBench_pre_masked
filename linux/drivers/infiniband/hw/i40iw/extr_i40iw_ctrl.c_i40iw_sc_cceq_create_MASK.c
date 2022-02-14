
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct i40iw_sc_ceq {int dummy; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int FUNC_0 (struct i40iw_sc_ceq*) ;
 int FUNC_1 (struct i40iw_sc_ceq*,int ,int) ;

__attribute__((used)) static enum i40iw_status_code FUNC_2(struct i40iw_sc_ceq *VAR_0, u64 VAR_1)
{
 enum i40iw_status_code VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1, 1);
 if (!VAR_2)
  VAR_2 = FUNC_0(VAR_0);
 return VAR_2;
}
