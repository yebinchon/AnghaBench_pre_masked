
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iolatency_grp {int pd; } ;
struct blkcg_gq {int dummy; } ;


 struct blkcg_gq* FUNC_0 (int *) ;

__attribute__((used)) static inline struct blkcg_gq *FUNC_1(struct iolatency_grp *VAR_0)
{
 return FUNC_0(&VAR_0->pd);
}
