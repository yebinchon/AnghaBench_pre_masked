
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mma9553_data {int num_events; TYPE_1__* events; } ;
struct TYPE_2__ {int enabled; int * info; } ;


 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_0(struct mma9553_data *VAR_2)
{
 int VAR_3;

 VAR_2->num_events = VAR_0;
 for (VAR_3 = 0; VAR_3 < VAR_2->num_events; VAR_3++) {
  VAR_2->events[VAR_3].info = &VAR_1[VAR_3];
  VAR_2->events[VAR_3].enabled = 0;
 }
}
