
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_queue {scalar_t__ ioprio_class; } ;


 scalar_t__ FUNC_0 (struct bfq_queue*) ;
 int FUNC_1 (struct bfq_queue*) ;
 scalar_t__ FUNC_2 (struct bfq_queue*) ;
 scalar_t__ FUNC_3 (struct bfq_queue*) ;

__attribute__((used)) static bool FUNC_4(struct bfq_queue *VAR_0,
     struct bfq_queue *VAR_1)
{
 if (FUNC_3(VAR_1))
  return 0;

 if (FUNC_2(VAR_0) || FUNC_2(VAR_1) ||
     (VAR_0->ioprio_class != VAR_1->ioprio_class))
  return 0;






 if (FUNC_0(VAR_0) || FUNC_0(VAR_1))
  return 0;






 if (!FUNC_1(VAR_0) || !FUNC_1(VAR_1))
  return 0;

 return 1;
}
