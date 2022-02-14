
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * handle; int * errmsg; } ;
typedef TYPE_1__ uv_lib_t ;
typedef int WCHAR ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int * FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int ,int ,char const*,int,int *,int ) ;
 int FUNC_4 (TYPE_1__*,char const*,int ) ;

int FUNC_5(const char* VAR_2, uv_lib_t* VAR_3) {
  WCHAR VAR_4[32768];

  VAR_3->handle = ((void*)0);
  VAR_3->errmsg = ((void*)0);

  if (!FUNC_3(VAR_0,
                           0,
                           VAR_2,
                           -1,
                           VAR_4,
                           FUNC_0(VAR_4))) {
    return FUNC_4(VAR_3, VAR_2, FUNC_1());
  }

  VAR_3->handle = FUNC_2(VAR_4, ((void*)0), VAR_1);
  if (VAR_3->handle == ((void*)0)) {
    return FUNC_4(VAR_3, VAR_2, FUNC_1());
  }

  return 0;
}
