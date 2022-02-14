
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_queue {unsigned int ioprio_class; } ;
struct bfq_entity {int dummy; } ;


 int VAR_0 ;
 struct bfq_queue* FUNC_0 (struct bfq_entity*) ;

__attribute__((used)) static unsigned int FUNC_1(struct bfq_entity *VAR_1)
{
 struct bfq_queue *VAR_2 = FUNC_0(VAR_1);

 return VAR_2 ? VAR_2->ioprio_class - 1 :
  VAR_0 - 1;
}
