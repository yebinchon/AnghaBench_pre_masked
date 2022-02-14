
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int handle; } ;
typedef TYPE_1__ uv_lib_t ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,char const*) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;

int FUNC_3(uv_lib_t* VAR_0, const char* VAR_1, void** VAR_2) {

  *VAR_2 = (void*)(uintptr_t) FUNC_1(VAR_0->handle, VAR_1);
  return FUNC_2(VAR_0, "", *VAR_2 ? 0 : FUNC_0());
}
