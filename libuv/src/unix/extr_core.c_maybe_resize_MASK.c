
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int nwatchers; int ** watchers; } ;
typedef TYPE_1__ uv_loop_t ;
typedef int uv__io_t ;


 int FUNC_0 () ;
 int FUNC_1 (unsigned int) ;
 int ** FUNC_2 (int **,unsigned int) ;

__attribute__((used)) static void FUNC_3(uv_loop_t* VAR_0, unsigned int VAR_1) {
  uv__io_t** VAR_2;
  void* VAR_3;
  void* VAR_4;
  unsigned int VAR_5;
  unsigned int VAR_6;

  if (VAR_1 <= VAR_0->nwatchers)
    return;


  if (VAR_0->watchers != ((void*)0)) {
    VAR_3 = VAR_0->watchers[VAR_0->nwatchers];
    VAR_4 = VAR_0->watchers[VAR_0->nwatchers + 1];
  } else {
    VAR_3 = ((void*)0);
    VAR_4 = ((void*)0);
  }

  VAR_5 = FUNC_1(VAR_1 + 2) - 2;
  VAR_2 = FUNC_2(VAR_0->watchers,
                         (VAR_5 + 2) * sizeof(VAR_0->watchers[0]));

  if (VAR_2 == ((void*)0))
    FUNC_0();
  for (VAR_6 = VAR_0->nwatchers; VAR_6 < VAR_5; VAR_6++)
    VAR_2[VAR_6] = ((void*)0);
  VAR_2[VAR_5] = VAR_3;
  VAR_2[VAR_5 + 1] = VAR_4;

  VAR_0->watchers = VAR_2;
  VAR_0->nwatchers = VAR_5;
}
