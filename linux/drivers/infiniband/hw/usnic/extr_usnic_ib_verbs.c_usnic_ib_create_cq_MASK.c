
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_udata {int dummy; } ;
struct ib_cq_init_attr {scalar_t__ flags; } ;
struct ib_cq {int dummy; } ;


 int VAR_0 ;

int FUNC_0(struct ib_cq *VAR_1, const struct ib_cq_init_attr *VAR_2,
         struct ib_udata *VAR_3)
{
 if (VAR_2->flags)
  return -VAR_0;

 return 0;
}
