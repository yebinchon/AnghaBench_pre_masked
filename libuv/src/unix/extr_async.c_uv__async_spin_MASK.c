
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pending; } ;
typedef TYPE_1__ uv_async_t ;


 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(uv_async_t* VAR_0) {
  int VAR_1;

  for (;;) {




    VAR_1 = FUNC_0(&VAR_0->pending, 2, 0);

    if (VAR_1 != 1)
      return VAR_1;


    FUNC_1();
  }
}
