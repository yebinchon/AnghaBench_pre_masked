
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int make_connect_fn ;
typedef int conn_rec ;
struct TYPE_2__ {int make_connect; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(int VAR_1, make_connect_fn VAR_2, void* VAR_3) {
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
    FUNC_0((conn_rec*)&VAR_0[VAR_4]);
    VAR_0[VAR_4].make_connect = VAR_2;
  }

  return 0;
}
