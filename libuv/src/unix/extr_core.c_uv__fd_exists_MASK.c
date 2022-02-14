
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int nwatchers; int ** watchers; } ;
typedef TYPE_1__ uv_loop_t ;



int FUNC_0(uv_loop_t* VAR_0, int VAR_1) {
  return (unsigned) VAR_1 < VAR_0->nwatchers && VAR_0->watchers[VAR_1] != ((void*)0);
}
