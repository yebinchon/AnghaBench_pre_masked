
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u64 ;
struct TYPE_2__ {size_t max_events; int* hw_events; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_0(u64 VAR_2)
{
 if (VAR_2 >= VAR_1->max_events)
  return -VAR_0;

 return VAR_1->hw_events[VAR_2];
}
