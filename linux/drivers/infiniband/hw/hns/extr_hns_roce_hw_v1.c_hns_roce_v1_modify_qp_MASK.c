
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_qp_attr {int dummy; } ;
struct ib_qp {scalar_t__ qp_type; } ;
typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ib_qp*,struct ib_qp_attr const*,int,int,int) ;
 int FUNC_1 (struct ib_qp*,struct ib_qp_attr const*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct ib_qp *VAR_2,
     const struct ib_qp_attr *VAR_3, int VAR_4,
     enum ib_qp_state VAR_5,
     enum ib_qp_state VAR_6)
{

 if (VAR_2->qp_type == VAR_0 || VAR_2->qp_type == VAR_1)
  return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6);
 else
  return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5,
     VAR_6);
}
