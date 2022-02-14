
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct prio_queue {int (* compare ) (int ,int ,int ) ;TYPE_1__* array; int cb_data; } ;
struct TYPE_2__ {int ctr; int data; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct prio_queue *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = VAR_0->compare(VAR_0->array[VAR_1].data, VAR_0->array[VAR_2].data,
     VAR_0->cb_data);
 if (!VAR_3)
  VAR_3 = VAR_0->array[VAR_1].ctr - VAR_0->array[VAR_2].ctr;
 return VAR_3;
}
