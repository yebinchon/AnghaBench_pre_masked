
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedr_dev {int dummy; } ;
typedef enum qede_rdma_event { ____Placeholder_qede_rdma_event } qede_rdma_event ;






 int FUNC_0 (char*) ;
 int FUNC_1 (struct qedr_dev*) ;
 int FUNC_2 (struct qedr_dev*) ;
 int FUNC_3 (struct qedr_dev*) ;
 int FUNC_4 (struct qedr_dev*) ;

__attribute__((used)) static void FUNC_5(struct qedr_dev *VAR_0, enum qede_rdma_event VAR_1)
{
 switch (VAR_1) {
 case 128:
  FUNC_3(VAR_0);
  break;
 case 129:
  FUNC_1(VAR_0);
  break;
 case 130:
  FUNC_4(VAR_0);
  break;
 case 131:
  FUNC_2(VAR_0);
  break;
 default:
  FUNC_0("Event not supported\n");
 }
}
