
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct resp_res* resources; } ;
struct TYPE_3__ {int max_dest_rd_atomic; } ;
struct rxe_qp {TYPE_2__ resp; TYPE_1__ attr; } ;
struct resp_res {int dummy; } ;


 int FUNC_0 (struct rxe_qp*,struct resp_res*) ;

__attribute__((used)) static void FUNC_1(struct rxe_qp *VAR_0)
{
 int VAR_1;
 struct resp_res *VAR_2;

 if (VAR_0->resp.resources) {
  for (VAR_1 = 0; VAR_1 < VAR_0->attr.max_dest_rd_atomic; VAR_1++) {
   VAR_2 = &VAR_0->resp.resources[VAR_1];
   FUNC_0(VAR_0, VAR_2);
  }
 }
}
