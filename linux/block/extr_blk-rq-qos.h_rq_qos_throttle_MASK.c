
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {scalar_t__ rq_qos; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,struct bio*) ;
 int FUNC_1 (struct bio*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct request_queue *VAR_1, struct bio *VAR_2)
{




 FUNC_1(VAR_2, VAR_0);
 if (VAR_1->rq_qos)
  FUNC_0(VAR_1->rq_qos, VAR_2);
}
