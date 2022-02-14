
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_qp_init_attr {scalar_t__ qp_type; scalar_t__ create_flags; scalar_t__ srq; } ;
struct efa_dev {int ibdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static int FUNC_1(struct efa_dev *VAR_3,
    struct ib_qp_init_attr *VAR_4)
{
 if (VAR_4->qp_type != VAR_1 &&
     VAR_4->qp_type != VAR_2) {
  FUNC_0(&VAR_3->ibdev,
     "Unsupported qp type %d\n", VAR_4->qp_type);
  return -VAR_0;
 }

 if (VAR_4->srq) {
  FUNC_0(&VAR_3->ibdev, "SRQ is not supported\n");
  return -VAR_0;
 }

 if (VAR_4->create_flags) {
  FUNC_0(&VAR_3->ibdev, "Unsupported create flags\n");
  return -VAR_0;
 }

 return 0;
}
