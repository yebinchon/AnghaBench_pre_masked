
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t4_cqe {int dummy; } ;
struct t4_cq {scalar_t__ gen; } ;


 scalar_t__ FUNC_0 (struct t4_cqe*) ;

__attribute__((used)) static inline int FUNC_1(struct t4_cq *VAR_0, struct t4_cqe *VAR_1)
{
 return (FUNC_0(VAR_1) == VAR_0->gen);
}
