
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t nwatchers; scalar_t__* watchers; } ;
typedef TYPE_1__ uv_loop_t ;
struct port_event {int portev_object; } ;


 int FUNC_0 (int) ;

void FUNC_1(uv_loop_t* VAR_0, int VAR_1) {
  struct port_event* VAR_2;
  uintptr_t VAR_3;
  uintptr_t VAR_4;

  FUNC_0(VAR_0->watchers != ((void*)0));
  FUNC_0(VAR_1 >= 0);

  VAR_2 = (struct port_event*) VAR_0->watchers[VAR_0->nwatchers];
  VAR_4 = (uintptr_t) VAR_0->watchers[VAR_0->nwatchers + 1];
  if (VAR_2 == ((void*)0))
    return;


  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
    if ((int) VAR_2[VAR_3].portev_object == VAR_1)
      VAR_2[VAR_3].portev_object = -1;
}
