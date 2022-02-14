
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ib_udata {int dummy; } ;
struct TYPE_5__ {int (* create_cq ) (struct ib_cq*,struct ib_cq_init_attr*,int *) ;int (* destroy_cq ) (struct ib_cq*,struct ib_udata*) ;} ;
struct ib_device {TYPE_1__ ops; } ;
struct ib_cq_init_attr {int cqe; int comp_vector; } ;
struct TYPE_6__ {int type; } ;
struct ib_cq {int poll_ctx; struct ib_cq* wc; struct ib_device* device; TYPE_2__ res; int comp_wq; int work; int comp_handler; int iop; int usecnt; void* cq_context; } ;
typedef enum ib_poll_context { ____Placeholder_ib_poll_context } ib_poll_context ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_cq* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_1 (int *,int ) ;
 int VAR_6 ;
 int FUNC_2 (int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (struct ib_cq*,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct ib_cq*) ;
 struct ib_cq* FUNC_6 (int ,int,int ) ;
 int FUNC_7 (struct ib_cq*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,char const*) ;
 struct ib_cq* FUNC_11 (struct ib_device*,int ) ;
 int FUNC_12 (struct ib_cq*,struct ib_cq_init_attr*,int *) ;
 int FUNC_13 (struct ib_cq*,struct ib_udata*) ;

struct ib_cq *FUNC_14(struct ib_device *VAR_15, void *VAR_16,
     int VAR_17, int VAR_18,
     enum ib_poll_context VAR_19,
     const char *VAR_20, struct ib_udata *VAR_21)
{
 struct ib_cq_init_attr VAR_22 = {
  .cqe = VAR_17,
  .comp_vector = VAR_18,
 };
 struct ib_cq *VAR_23;
 int VAR_24 = -VAR_1;

 VAR_23 = FUNC_11(VAR_15, VAR_9);
 if (!VAR_23)
  return FUNC_0(VAR_24);

 VAR_23->device = VAR_15;
 VAR_23->cq_context = VAR_16;
 VAR_23->poll_ctx = VAR_19;
 FUNC_2(&VAR_23->usecnt, 0);

 VAR_23->wc = FUNC_6(VAR_4, sizeof(*VAR_23->wc), VAR_2);
 if (!VAR_23->wc)
  goto out_free_cq;

 VAR_23->res.type = VAR_6;
 FUNC_10(&VAR_23->res, VAR_20);

 VAR_24 = VAR_15->ops.create_cq(VAR_23, &VAR_22, ((void*)0));
 if (VAR_24)
  goto out_free_wc;

 FUNC_9(&VAR_23->res);

 FUNC_7(VAR_23);

 switch (VAR_23->poll_ctx) {
 case 131:
  VAR_23->comp_handler = VAR_10;
  break;
 case 130:
  VAR_23->comp_handler = VAR_11;

  FUNC_4(&VAR_23->iop, VAR_5, VAR_14);
  FUNC_3(VAR_23, VAR_3);
  break;
 case 128:
 case 129:
  VAR_23->comp_handler = VAR_12;
  FUNC_1(&VAR_23->work, VAR_13);
  FUNC_3(VAR_23, VAR_3);
  VAR_23->comp_wq = (VAR_23->poll_ctx == 128) ?
    VAR_8 : VAR_7;
  break;
 default:
  VAR_24 = -VAR_0;
  goto out_destroy_cq;
 }

 return VAR_23;

out_destroy_cq:
 FUNC_8(&VAR_23->res);
 VAR_23->device->ops.destroy_cq(VAR_23, VAR_21);
out_free_wc:
 FUNC_5(VAR_23->wc);
out_free_cq:
 FUNC_5(VAR_23);
 return FUNC_0(VAR_24);
}
