
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hisi_zip_ctx {TYPE_2__* qp_ctx; } ;
struct TYPE_4__ {TYPE_1__* qp; } ;
struct TYPE_3__ {void (* req_cb ) (struct hisi_qp*,void*) ;} ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct hisi_zip_ctx *VAR_1,
      void (*VAR_2)(struct hisi_qp *, void *))
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_1->qp_ctx[VAR_3].qp->req_cb = VAR_2;
}
