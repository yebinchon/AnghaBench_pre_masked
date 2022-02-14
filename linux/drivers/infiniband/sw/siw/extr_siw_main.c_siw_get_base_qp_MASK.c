
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siw_qp {struct ib_qp* ib_qp; } ;
struct ib_qp {int dummy; } ;
struct ib_device {int dummy; } ;


 struct siw_qp* FUNC_0 (int ,int) ;
 int FUNC_1 (struct siw_qp*) ;
 int FUNC_2 (struct ib_device*) ;

__attribute__((used)) static struct ib_qp *FUNC_3(struct ib_device *VAR_0, int VAR_1)
{
 struct siw_qp *VAR_2 = FUNC_0(FUNC_2(VAR_0), VAR_1);

 if (VAR_2) {



  FUNC_1(VAR_2);
  return VAR_2->ib_qp;
 }
 return ((void*)0);
}
