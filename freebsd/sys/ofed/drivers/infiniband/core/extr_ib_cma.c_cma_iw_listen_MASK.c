
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct iw_cm_id* iw; } ;
struct TYPE_4__ {int device; } ;
struct rdma_id_private {TYPE_1__ cm_id; int tos; TYPE_2__ id; } ;
struct iw_cm_id {int local_addr; int tos; } ;


 scalar_t__ FUNC_0 (struct iw_cm_id*) ;
 int FUNC_1 (struct iw_cm_id*) ;
 int FUNC_2 (struct rdma_id_private*) ;
 int FUNC_3 (struct iw_cm_id*,int) ;
 int VAR_0 ;
 struct iw_cm_id* FUNC_4 (int ,int ,struct rdma_id_private*) ;
 int FUNC_5 (struct iw_cm_id*) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct rdma_id_private *VAR_1, int VAR_2)
{
 int VAR_3;
 struct iw_cm_id *VAR_4;

 VAR_4 = FUNC_4(VAR_1->id.device,
        VAR_0,
        VAR_1);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_4->tos = VAR_1->tos;
 VAR_1->cm_id.iw = VAR_4;

 FUNC_6(&VAR_1->cm_id.iw->local_addr, FUNC_2(VAR_1),
        FUNC_7(FUNC_2(VAR_1)));

 VAR_3 = FUNC_3(VAR_1->cm_id.iw, VAR_2);

 if (VAR_3) {
  FUNC_5(VAR_1->cm_id.iw);
  VAR_1->cm_id.iw = ((void*)0);
 }

 return VAR_3;
}
