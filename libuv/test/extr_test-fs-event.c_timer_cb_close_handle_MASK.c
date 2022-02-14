
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * data; } ;
typedef TYPE_1__ uv_timer_t ;
typedef int uv_handle_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(uv_timer_t* VAR_1) {
  uv_handle_t* VAR_2;

  FUNC_0(VAR_1 != ((void*)0));
  VAR_2 = VAR_1->data;

  FUNC_1((uv_handle_t*)VAR_1, ((void*)0));
  FUNC_1((uv_handle_t*)VAR_2, VAR_0);
}
