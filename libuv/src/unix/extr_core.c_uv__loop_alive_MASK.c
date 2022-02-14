
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * closing_handles; } ;
typedef TYPE_1__ uv_loop_t ;


 scalar_t__ FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_2(const uv_loop_t* VAR_0) {
  return FUNC_0(VAR_0) ||
         FUNC_1(VAR_0) ||
         VAR_0->closing_handles != ((void*)0);
}
