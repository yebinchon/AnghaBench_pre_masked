
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ib_qp {int device; } ;
struct rvt_qp {struct ib_qp ibqp; } ;
struct ib_udata {int dummy; } ;
struct ib_qp_attr {int alt_ah_attr; int ah_attr; } ;
struct hfi1_ibdev {int dummy; } ;
struct hfi1_devdata {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 struct hfi1_devdata* FUNC_1 (struct hfi1_ibdev*) ;
 int FUNC_2 (struct rvt_qp*,int) ;
 int FUNC_3 (struct rvt_qp*,int) ;
 struct hfi1_ibdev* FUNC_4 (int ) ;

int FUNC_5(struct rvt_qp *VAR_4, struct ib_qp_attr *VAR_5,
    int VAR_6, struct ib_udata *VAR_7)
{
 struct ib_qp *VAR_8 = &VAR_4->ibqp;
 struct hfi1_ibdev *VAR_9 = FUNC_4(VAR_8->device);
 struct hfi1_devdata *VAR_10 = FUNC_1(VAR_9);
 u8 VAR_11;

 if (VAR_6 & VAR_3) {
  VAR_11 = FUNC_0(VAR_8->device, &VAR_5->ah_attr);
  if (VAR_11 == 0xf)
   return -VAR_0;

  if (!FUNC_2(VAR_4, VAR_11) &&
      VAR_10->flags & VAR_1)
   return -VAR_0;

  if (!FUNC_3(VAR_4, VAR_11))
   return -VAR_0;
 }

 if (VAR_6 & VAR_2) {
  VAR_11 = FUNC_0(VAR_8->device, &VAR_5->alt_ah_attr);
  if (VAR_11 == 0xf)
   return -VAR_0;

  if (!FUNC_2(VAR_4, VAR_11) &&
      VAR_10->flags & VAR_1)
   return -VAR_0;

  if (!FUNC_3(VAR_4, VAR_11))
   return -VAR_0;
 }

 return 0;
}
