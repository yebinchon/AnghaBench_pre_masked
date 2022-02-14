
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct carm_host {unsigned int wait_q_prod; unsigned int wait_q_cons; struct request_queue** wait_q; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (char*,struct request_queue*) ;
 int FUNC_2 (struct request_queue*) ;

__attribute__((used)) static inline void FUNC_3 (struct carm_host *VAR_1, struct request_queue *VAR_2)
{
 unsigned int VAR_3 = VAR_1->wait_q_prod % VAR_0;

 FUNC_2(VAR_2);
 FUNC_1("STOPPED QUEUE %p\n", VAR_2);

 VAR_1->wait_q[VAR_3] = VAR_2;
 VAR_1->wait_q_prod++;
 FUNC_0(VAR_1->wait_q_prod == VAR_1->wait_q_cons);
}
