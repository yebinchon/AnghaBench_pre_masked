
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efa_comp_ctx {int dummy; } ;
struct efa_com_admin_queue {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct efa_comp_ctx*,struct efa_com_admin_queue*) ;
 int FUNC_1 (struct efa_comp_ctx*,struct efa_com_admin_queue*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct efa_comp_ctx *VAR_1,
          struct efa_com_admin_queue *VAR_2)
{
 if (FUNC_2(VAR_0, &VAR_2->state))
  return FUNC_1(VAR_1, VAR_2);

 return FUNC_0(VAR_1, VAR_2);
}
