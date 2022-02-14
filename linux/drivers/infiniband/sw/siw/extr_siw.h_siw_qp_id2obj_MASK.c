
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siw_qp {int ref; } ;
struct siw_device {int qp_xa; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct siw_qp* FUNC_4 (int *,int) ;

__attribute__((used)) static inline struct siw_qp *FUNC_5(struct siw_device *VAR_0, int VAR_1)
{
 struct siw_qp *VAR_2;

 FUNC_2();
 VAR_2 = FUNC_4(&VAR_0->qp_xa, VAR_1);
 if (FUNC_1(VAR_2 && FUNC_0(&VAR_2->ref))) {
  FUNC_3();
  return VAR_2;
 }
 FUNC_3();
 return ((void*)0);
}
