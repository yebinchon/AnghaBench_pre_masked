
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int resources; scalar_t__ res_tail; scalar_t__ res_head; } ;
struct rxe_qp {TYPE_1__ resp; } ;
struct resp_res {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct rxe_qp *VAR_2, unsigned int VAR_3)
{
 VAR_2->resp.res_head = 0;
 VAR_2->resp.res_tail = 0;
 VAR_2->resp.resources = FUNC_0(VAR_3, sizeof(struct resp_res), VAR_1);

 if (!VAR_2->resp.resources)
  return -VAR_0;

 return 0;
}
