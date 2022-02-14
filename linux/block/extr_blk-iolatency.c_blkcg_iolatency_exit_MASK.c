
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_qos {int q; } ;
struct blk_iolatency {int timer; } ;


 struct blk_iolatency* FUNC_0 (struct rq_qos*) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct blk_iolatency*) ;

__attribute__((used)) static void FUNC_4(struct rq_qos *VAR_1)
{
 struct blk_iolatency *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(&VAR_2->timer);
 FUNC_1(VAR_1->q, &VAR_0);
 FUNC_3(VAR_2);
}
