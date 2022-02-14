
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ qp_type; } ;
struct rvt_qp {TYPE_1__ ibqp; } ;
struct rvt_ibport {int n_pkt_drops; } ;
typedef enum ib_wc_status { ____Placeholder_ib_wc_status } ib_wc_status ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static enum ib_wc_status FUNC_0(struct rvt_ibport *VAR_3,
       struct rvt_qp *VAR_4)
{
 VAR_3->n_pkt_drops++;




 return VAR_4->ibqp.qp_type == VAR_0 ?
  VAR_1 : VAR_2;
}
