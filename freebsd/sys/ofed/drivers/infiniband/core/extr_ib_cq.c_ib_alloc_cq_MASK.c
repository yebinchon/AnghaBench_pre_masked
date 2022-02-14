
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device {struct ib_cq* (* create_cq ) (struct ib_device*,struct ib_cq_init_attr*,int *,int *) ;} ;
struct ib_cq_init_attr {int cqe; int comp_vector; } ;
struct ib_cq {int poll_ctx; int work; int * comp_handler; int usecnt; void* cq_context; int * event_handler; int * uobject; struct ib_device* device; } ;
typedef enum ib_poll_context { ____Placeholder_ib_poll_context } ib_poll_context ;


 int VAR_0 ;
 struct ib_cq* FUNC_0 (int ) ;
 int VAR_1 ;



 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct ib_cq*) ;
 int FUNC_3 (int *,int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct ib_cq*,int ) ;
 struct ib_cq* FUNC_5 (struct ib_device*,struct ib_cq_init_attr*,int *,int *) ;

struct ib_cq *
FUNC_6(struct ib_device *VAR_4, void *VAR_5,
    int VAR_6, int VAR_7, enum ib_poll_context VAR_8)
{
 struct ib_cq_init_attr VAR_9 = {
  .cqe = VAR_6,
  .comp_vector = VAR_7,
 };
 struct ib_cq *VAR_10;





 switch (VAR_8) {
 case 130:
 case 129:
 case 128:
  break;
 default:
  return (FUNC_0(-VAR_0));
 }

 VAR_10 = VAR_4->create_cq(VAR_4, &VAR_9, ((void*)0), ((void*)0));
 if (FUNC_2(VAR_10))
  return (VAR_10);

 VAR_10->device = VAR_4;
 VAR_10->uobject = ((void*)0);
 VAR_10->event_handler = ((void*)0);
 VAR_10->cq_context = VAR_5;
 VAR_10->poll_ctx = VAR_8;
 FUNC_3(&VAR_10->usecnt, 0);

 switch (VAR_8) {
 case 130:
  VAR_10->comp_handler = ((void*)0);
  break;
 case 129:
 case 128:
  VAR_10->comp_handler = VAR_2;
  FUNC_1(&VAR_10->work, VAR_3);
  FUNC_4(VAR_10, VAR_1);
  break;
 default:
  break;
 }
 return (VAR_10);
}
