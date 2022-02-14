
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_qp_attr {int qp_state; } ;
struct ib_qp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ib_qp*,struct ib_qp_attr*,int ) ;

__attribute__((used)) static int FUNC_1(struct ib_qp *VAR_3)
{
 struct ib_qp_attr VAR_4;

 if (!VAR_3)
  return -VAR_0;

 VAR_4.qp_state = VAR_1;
 return FUNC_0(VAR_3, &VAR_4, VAR_2);
}
