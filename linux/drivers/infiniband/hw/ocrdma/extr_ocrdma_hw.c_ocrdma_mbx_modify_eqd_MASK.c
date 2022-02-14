
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ocrdma_mqe {int dummy; } ;
struct TYPE_7__ {int num_eq; TYPE_2__* set_eqd; int req; } ;
struct ocrdma_modify_eqd_req {TYPE_3__ cmd; } ;
struct TYPE_8__ {int prev_eqd; } ;
struct TYPE_5__ {int id; } ;
struct ocrdma_eq {TYPE_4__ aic_obj; TYPE_1__ q; } ;
struct ocrdma_dev {int dummy; } ;
struct TYPE_6__ {int delay_multiplier; scalar_t__ phase; int eq_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ocrdma_modify_eqd_req*) ;
 struct ocrdma_modify_eqd_req* FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int ,int ,int) ;
 int FUNC_3 (struct ocrdma_dev*,struct ocrdma_mqe*) ;

__attribute__((used)) static int FUNC_4(struct ocrdma_dev *VAR_3, struct ocrdma_eq *VAR_4,
     int VAR_5)
{
 int VAR_6, VAR_7;
 struct ocrdma_modify_eqd_req *VAR_8;

 VAR_8 = FUNC_1(VAR_1, sizeof(*VAR_8));
 if (!VAR_8)
  return -VAR_0;

 FUNC_2(&VAR_8->cmd.req, VAR_1,
   VAR_2, sizeof(*VAR_8));

 VAR_8->cmd.num_eq = VAR_5;
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_8->cmd.set_eqd[VAR_6].eq_id = VAR_4[VAR_6].q.id;
  VAR_8->cmd.set_eqd[VAR_6].phase = 0;
  VAR_8->cmd.set_eqd[VAR_6].delay_multiplier =
    (VAR_4[VAR_6].aic_obj.prev_eqd * 65)/100;
 }
 VAR_7 = FUNC_3(VAR_3, (struct ocrdma_mqe *)VAR_8);

 FUNC_0(VAR_8);
 return VAR_7;
}
