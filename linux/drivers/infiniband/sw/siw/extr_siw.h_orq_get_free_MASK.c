
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siw_sqe {int flags; } ;
struct siw_qp {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct siw_sqe* FUNC_1 (struct siw_qp*) ;

__attribute__((used)) static inline struct siw_sqe *FUNC_2(struct siw_qp *VAR_0)
{
 struct siw_sqe *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1 && FUNC_0(VAR_1->flags) == 0)
  return VAR_1;

 return ((void*)0);
}
