
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_uverbs_file {int dummy; } ;
struct ib_uverbs_ex_create_qp_resp {int base; } ;
struct ib_udata {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ib_udata*,int *,int) ;

__attribute__((used)) static int FUNC_1(struct ib_uverbs_file *VAR_1,
      struct ib_uverbs_ex_create_qp_resp *VAR_2,
      struct ib_udata *VAR_3)
{
 if (FUNC_0(VAR_3, &VAR_2->base, sizeof(VAR_2->base)))
  return -VAR_0;

 return 0;
}
