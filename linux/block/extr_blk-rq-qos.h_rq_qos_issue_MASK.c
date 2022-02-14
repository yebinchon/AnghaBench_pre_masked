
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {scalar_t__ rq_qos; } ;
struct request {int dummy; } ;


 int FUNC_0 (scalar_t__,struct request*) ;

__attribute__((used)) static inline void FUNC_1(struct request_queue *VAR_0, struct request *VAR_1)
{
 if (VAR_0->rq_qos)
  FUNC_0(VAR_0->rq_qos, VAR_1);
}
