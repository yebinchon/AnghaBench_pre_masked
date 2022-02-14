
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {scalar_t__ fifo_time; } ;
struct deadline_data {TYPE_1__* fifo_list; } ;
struct TYPE_2__ {int next; } ;


 int VAR_0 ;
 struct request* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,unsigned long) ;

__attribute__((used)) static inline int FUNC_2(struct deadline_data *VAR_1, int VAR_2)
{
 struct request *VAR_3 = FUNC_0(VAR_1->fifo_list[VAR_2].next);




 if (FUNC_1(VAR_0, (unsigned long)VAR_3->fifo_time))
  return 1;

 return 0;
}
