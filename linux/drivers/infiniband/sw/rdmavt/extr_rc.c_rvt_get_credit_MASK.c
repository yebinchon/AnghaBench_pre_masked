
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {int device; } ;
struct rvt_qp {int s_flags; size_t s_lsn; int s_lock; TYPE_1__ ibqp; } ;
struct TYPE_4__ {int (* schedule_send ) (struct rvt_qp*) ;} ;
struct rvt_dev_info {TYPE_2__ driver_f; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t* VAR_6 ;
 struct rvt_dev_info* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (size_t,size_t) ;
 int FUNC_3 (struct rvt_qp*) ;
 int FUNC_4 (struct rvt_qp*) ;

void FUNC_5(struct rvt_qp *VAR_7, u32 VAR_8)
{
 struct rvt_dev_info *VAR_9 = FUNC_0(VAR_7->ibqp.device);
 u32 VAR_10 = (VAR_8 >> VAR_2) & VAR_1;

 FUNC_1(&VAR_7->s_lock);





 if (VAR_10 == VAR_0) {
  if (!(VAR_7->s_flags & VAR_4)) {
   VAR_7->s_flags |= VAR_4;
   if (VAR_7->s_flags & VAR_5) {
    VAR_7->s_flags &= ~VAR_5;
    VAR_9->driver_f.schedule_send(VAR_7);
   }
  }
 } else if (!(VAR_7->s_flags & VAR_4)) {

  VAR_10 = (VAR_8 + VAR_6[VAR_10]) & VAR_3;
  if (FUNC_2(VAR_10, VAR_7->s_lsn) > 0) {
   VAR_7->s_lsn = VAR_10;
   if (VAR_7->s_flags & VAR_5) {
    VAR_7->s_flags &= ~VAR_5;
    VAR_9->driver_f.schedule_send(VAR_7);
   }
  }
 }
}
