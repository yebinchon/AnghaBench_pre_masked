
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rkey; } ;
struct siw_wqe {TYPE_1__ sqe; } ;
struct siw_qp {int pd; } ;


 int VAR_0 ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct siw_wqe*) ;

__attribute__((used)) static int FUNC_3(struct siw_qp *VAR_1, struct siw_wqe *VAR_2)
{
 int VAR_3;

 switch (FUNC_2(VAR_2)) {
 case 128:
  VAR_3 = FUNC_0(VAR_1->pd, &VAR_2->sqe);
  break;

 case 129:
  VAR_3 = FUNC_1(VAR_1->pd, VAR_2->sqe.rkey);
  break;

 default:
  VAR_3 = -VAR_0;
 }
 return VAR_3;
}
