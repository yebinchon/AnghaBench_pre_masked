
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_uverbs_file {int dummy; } ;
struct ib_uverbs_ex_create_cq_resp {int base; } ;
struct ib_udata {int dummy; } ;
struct ib_ucq_object {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ib_udata*,int *,int) ;

__attribute__((used)) static int FUNC_1(struct ib_uverbs_file *VAR_1,
      struct ib_ucq_object *VAR_2,
      struct ib_uverbs_ex_create_cq_resp *VAR_3,
      struct ib_udata *VAR_4, void *VAR_5)
{
 if (FUNC_0(VAR_4, &VAR_3->base, sizeof(VAR_3->base)))
  return -VAR_0;

 return 0;
}
