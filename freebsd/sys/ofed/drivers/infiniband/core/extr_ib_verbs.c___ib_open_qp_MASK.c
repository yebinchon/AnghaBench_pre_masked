
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_qp {void (* event_handler ) (struct ib_event*,void*) ;TYPE_1__* device; int open_list; int qp_type; int qp_num; void* qp_context; int usecnt; struct ib_qp* real_qp; } ;
struct TYPE_2__ {int event_handler_lock; } ;


 int VAR_0 ;
 struct ib_qp* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct ib_qp* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static struct ib_qp *FUNC_6(struct ib_qp *VAR_2,
      void (*VAR_3)(struct ib_event *, void *),
      void *VAR_4)
{
 struct ib_qp *VAR_5;
 unsigned long VAR_6;

 VAR_5 = FUNC_2(sizeof *VAR_5, VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_5->real_qp = VAR_2;
 FUNC_1(&VAR_2->usecnt);
 VAR_5->device = VAR_2->device;
 VAR_5->event_handler = VAR_3;
 VAR_5->qp_context = VAR_4;
 VAR_5->qp_num = VAR_2->qp_num;
 VAR_5->qp_type = VAR_2->qp_type;

 FUNC_4(&VAR_2->device->event_handler_lock, VAR_6);
 FUNC_3(&VAR_5->open_list, &VAR_2->open_list);
 FUNC_5(&VAR_2->device->event_handler_lock, VAR_6);

 return VAR_5;
}
