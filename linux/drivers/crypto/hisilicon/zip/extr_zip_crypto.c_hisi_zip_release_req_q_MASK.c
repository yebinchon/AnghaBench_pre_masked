
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hisi_zip_ctx {TYPE_2__* qp_ctx; } ;
struct TYPE_3__ {int req_bitmap; int q; } ;
struct TYPE_4__ {TYPE_1__ req_q; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct hisi_zip_ctx *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_0(VAR_1->qp_ctx[VAR_2].req_q.q);
  FUNC_0(VAR_1->qp_ctx[VAR_2].req_q.req_bitmap);
 }
}
