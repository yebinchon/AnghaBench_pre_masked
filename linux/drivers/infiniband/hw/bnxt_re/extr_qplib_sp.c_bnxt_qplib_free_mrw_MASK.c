
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct creq_deallocate_key_resp {int dummy; } ;
struct cmdq_deallocate_key {scalar_t__ mrw_flags; void* key; } ;
struct bnxt_qplib_res {TYPE_1__* pdev; struct bnxt_qplib_rcfw* rcfw; } ;
struct bnxt_qplib_rcfw {int dummy; } ;
struct TYPE_4__ {scalar_t__ max_elements; } ;
struct bnxt_qplib_mrw {int lkey; scalar_t__ type; int rkey; TYPE_2__ hwq; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cmdq_deallocate_key,int ,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (struct bnxt_qplib_rcfw*,void*,void*,int *,int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int *,char*) ;

int FUNC_5(struct bnxt_qplib_res *VAR_4, struct bnxt_qplib_mrw *VAR_5)
{
 struct bnxt_qplib_rcfw *VAR_6 = VAR_4->rcfw;
 struct cmdq_deallocate_key VAR_7;
 struct creq_deallocate_key_resp VAR_8;
 u16 VAR_9 = 0;
 int VAR_10;

 if (VAR_5->lkey == 0xFFFFFFFF) {
  FUNC_4(&VAR_4->pdev->dev, "SP: Free a reserved lkey MRW\n");
  return 0;
 }

 FUNC_0(VAR_7, VAR_3, VAR_9);

 VAR_7.mrw_flags = VAR_5->type;

 if ((VAR_5->type == VAR_0) ||
     (VAR_5->type == VAR_1) ||
     (VAR_5->type == VAR_2))
  VAR_7.key = FUNC_3(VAR_5->rkey);
 else
  VAR_7.key = FUNC_3(VAR_5->lkey);

 VAR_10 = FUNC_2(VAR_6, (void *)&VAR_7, (void *)&VAR_8,
       ((void*)0), 0);
 if (VAR_10)
  return VAR_10;


 if (VAR_5->hwq.max_elements)
  FUNC_1(VAR_4->pdev, &VAR_5->hwq);

 return 0;
}
