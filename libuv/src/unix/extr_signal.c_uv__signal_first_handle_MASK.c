
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int signum; int * loop; scalar_t__ flags; } ;
typedef TYPE_1__ uv_signal_t ;


 TYPE_1__* FUNC_0 (int ,int *,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static uv_signal_t* FUNC_1(int VAR_2) {

  uv_signal_t VAR_3;
  uv_signal_t* VAR_4;

  VAR_3.signum = VAR_2;
  VAR_3.flags = 0;
  VAR_3.loop = ((void*)0);

  VAR_4 = FUNC_0(VAR_1, &VAR_0, &VAR_3);

  if (VAR_4 != ((void*)0) && VAR_4->signum == VAR_2)
    return VAR_4;

  return ((void*)0);
}
