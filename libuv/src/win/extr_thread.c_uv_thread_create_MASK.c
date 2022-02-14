
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_thread_t ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ uv_thread_options_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,void (*) (void*),void*) ;

int FUNC_1(uv_thread_t *VAR_1, void (*VAR_2)(void *VAR_3), void *VAR_4) {
  uv_thread_options_t VAR_5;
  VAR_5.flags = VAR_0;
  return FUNC_0(VAR_1, &VAR_5, VAR_2, VAR_4);
}
