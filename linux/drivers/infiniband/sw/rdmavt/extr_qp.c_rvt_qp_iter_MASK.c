
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct rvt_qp_iter {int specials; void (* cb ) (struct rvt_qp*,int ) ;struct rvt_qp* qp; int v; struct rvt_dev_info* rdi; } ;
struct TYPE_2__ {int phys_port_cnt; } ;
struct rvt_dev_info {TYPE_1__ ibdev; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct rvt_qp*) ;
 int FUNC_3 (struct rvt_qp*) ;
 int FUNC_4 (struct rvt_qp_iter*) ;
 void FUNC_5 (struct rvt_qp*,int ) ;

void FUNC_6(struct rvt_dev_info *VAR_0,
   u64 VAR_1,
   void (*VAR_2)(struct rvt_qp *VAR_3, u64 VAR_4))
{
 int VAR_5;
 struct rvt_qp_iter VAR_6 = {
  .rdi = VAR_0,
  .specials = VAR_0->ibdev.phys_port_cnt * 2,
  .v = VAR_1,
  .cb = VAR_2
 };

 FUNC_0();
 do {
  VAR_5 = FUNC_4(&VAR_6);
  if (!VAR_5) {
   FUNC_2(VAR_6.qp);
   FUNC_1();
   VAR_6.cb(VAR_6.qp, VAR_6.v);
   FUNC_0();
   FUNC_3(VAR_6.qp);
  }
 } while (!VAR_5);
 FUNC_1();
}
