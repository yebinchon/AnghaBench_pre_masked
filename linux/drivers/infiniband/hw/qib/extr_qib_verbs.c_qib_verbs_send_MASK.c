
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rvt_sge_state {int dummy; } ;
struct TYPE_2__ {scalar_t__ qp_type; int device; } ;
struct rvt_qp {TYPE_1__ ibqp; } ;
struct qib_devdata {int flags; } ;
struct ib_header {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct qib_devdata* FUNC_0 (int ) ;
 int FUNC_1 (struct rvt_qp*,struct ib_header*,int,struct rvt_sge_state*,int,int,int) ;
 int FUNC_2 (struct rvt_qp*,struct ib_header*,int,struct rvt_sge_state*,int,int,int) ;

int FUNC_3(struct rvt_qp *VAR_2, struct ib_header *VAR_3,
     u32 VAR_4, struct rvt_sge_state *VAR_5, u32 VAR_6)
{
 struct qib_devdata *VAR_7 = FUNC_0(VAR_2->ibqp.device);
 u32 VAR_8;
 int VAR_9;
 u32 VAR_10 = (VAR_6 + 3) >> 2;





 VAR_8 = VAR_4 + VAR_10 + 1;






 if (VAR_2->ibqp.qp_type == VAR_0 ||
     !(VAR_7->flags & VAR_1))
  VAR_9 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_8, VAR_10);
 else
  VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_8, VAR_10);

 return VAR_9;
}
