
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rvt_qp {size_t state; scalar_t__ s_head; int s_hlock; int s_last; } ;
struct TYPE_2__ {int (* schedule_send_no_lock ) (struct rvt_qp*) ;int (* do_send ) (struct rvt_qp*) ;} ;
struct rvt_dev_info {TYPE_1__ driver_f; } ;
struct ib_send_wr {struct ib_send_wr* next; } ;
struct ib_qp {int device; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int* VAR_2 ;
 struct rvt_dev_info* FUNC_1 (int ) ;
 struct rvt_qp* FUNC_2 (struct ib_qp*) ;
 int FUNC_3 (struct rvt_qp*,struct ib_send_wr const*,int*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct rvt_qp*) ;
 int FUNC_7 (struct rvt_qp*) ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(struct ib_qp *VAR_3, const struct ib_send_wr *VAR_4,
    const struct ib_send_wr **VAR_5)
{
 struct rvt_qp *VAR_6 = FUNC_2(VAR_3);
 struct rvt_dev_info *VAR_7 = FUNC_1(VAR_3->device);
 unsigned long VAR_8 = 0;
 bool VAR_9;
 unsigned VAR_10 = 0;
 int VAR_11 = 0;

 FUNC_4(&VAR_6->s_hlock, VAR_8);





 if (FUNC_8(!(VAR_2[VAR_6->state] & VAR_1))) {
  FUNC_5(&VAR_6->s_hlock, VAR_8);
  return -VAR_0;
 }






 VAR_9 = VAR_6->s_head == FUNC_0(VAR_6->s_last) && !VAR_4->next;

 for (; VAR_4; VAR_4 = VAR_4->next) {
  VAR_11 = FUNC_3(VAR_6, VAR_4, &VAR_9);
  if (FUNC_8(VAR_11)) {
   *VAR_5 = VAR_4;
   goto bail;
  }
  VAR_10++;
 }
bail:
 FUNC_5(&VAR_6->s_hlock, VAR_8);
 if (VAR_10) {




  if (VAR_10 == 1 && VAR_9)
   VAR_7->driver_f.do_send(VAR_6);
  else
   VAR_7->driver_f.schedule_send_no_lock(VAR_6);
 }
 return VAR_11;
}
