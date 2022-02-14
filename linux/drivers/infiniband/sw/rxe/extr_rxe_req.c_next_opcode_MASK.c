
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ resid; } ;
struct rxe_send_wqe {TYPE_1__ dma; } ;
struct rxe_qp {scalar_t__ mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int FUNC_0 (struct rxe_qp*,int ,int) ;
 int FUNC_1 (struct rxe_qp*,int ,int) ;
 int FUNC_2 (struct rxe_qp*) ;

__attribute__((used)) static int FUNC_3(struct rxe_qp *VAR_3, struct rxe_send_wqe *VAR_4,
         u32 VAR_5)
{
 int VAR_6 = (VAR_4->dma.resid <= VAR_3->mtu);

 switch (FUNC_2(VAR_3)) {
 case 133:
  return FUNC_0(VAR_3, VAR_5, VAR_6);

 case 131:
  return FUNC_1(VAR_3, VAR_5, VAR_6);

 case 132:
 case 130:
 case 134:
  switch (VAR_5) {
  case 129:
   return VAR_1;

  case 128:
   return VAR_2;
  }
  break;

 default:
  break;
 }

 return -VAR_0;
}
