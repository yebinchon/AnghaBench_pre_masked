
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {struct resp_res* resources; } ;
struct TYPE_3__ {int max_dest_rd_atomic; } ;
struct rxe_qp {TYPE_2__ resp; TYPE_1__ attr; } ;
struct resp_res {scalar_t__ type; int last_psn; int first_psn; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static struct resp_res *FUNC_1(struct rxe_qp *VAR_0, u32 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->attr.max_dest_rd_atomic; VAR_2++) {
  struct resp_res *VAR_3 = &VAR_0->resp.resources[VAR_2];

  if (VAR_3->type == 0)
   continue;

  if (FUNC_0(VAR_1, VAR_3->first_psn) >= 0 &&
      FUNC_0(VAR_1, VAR_3->last_psn) <= 0) {
   return VAR_3;
  }
 }

 return ((void*)0);
}
