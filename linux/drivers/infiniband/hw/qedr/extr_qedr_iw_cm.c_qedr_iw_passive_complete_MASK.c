
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedr_iw_ep {int qp; struct qedr_dev* dev; } ;
struct qedr_dev {int dummy; } ;
struct qed_iwarp_cm_event_params {int status; } ;


 int FUNC_0 (struct qedr_dev*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct qedr_iw_ep*) ;
 int FUNC_2 (void*,struct qed_iwarp_cm_event_params*) ;
 int FUNC_3 (void*,struct qed_iwarp_cm_event_params*,int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_3,
    struct qed_iwarp_cm_event_params *VAR_4)
{
 struct qedr_iw_ep *VAR_5 = (struct qedr_iw_ep *)VAR_3;
 struct qedr_dev *VAR_6 = VAR_5->dev;




 if ((VAR_4->status == -VAR_0) && (!VAR_5->qp)) {
  FUNC_0(VAR_6, VAR_2,
    "PASSIVE connection refused releasing ep...\n");
  FUNC_1(VAR_5);
  return;
 }

 FUNC_3(VAR_3, VAR_4, VAR_1);

 if (VAR_4->status < 0)
  FUNC_2(VAR_3, VAR_4);
}
