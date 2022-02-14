
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rq_wait {int inflight; } ;
struct rq_qos {int q; } ;
struct iolatency_grp {struct rq_wait rq_wait; } ;
struct TYPE_2__ {int use_delay; } ;


 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_4 (struct iolatency_grp*) ;
 int FUNC_5 (struct rq_wait*,struct iolatency_grp*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct rq_qos *VAR_3,
           struct iolatency_grp *VAR_4,
           bool VAR_5,
           bool VAR_6)
{
 struct rq_wait *VAR_7 = &VAR_4->rq_wait;
 unsigned VAR_8 = FUNC_1(&FUNC_4(VAR_4)->use_delay);

 if (VAR_8)
  FUNC_2(VAR_3->q, VAR_6);
 if (VAR_5 || FUNC_3(VAR_0)) {
  FUNC_0(&VAR_7->inflight);
  return;
 }

 FUNC_5(VAR_7, VAR_4, VAR_1, VAR_2);
}
