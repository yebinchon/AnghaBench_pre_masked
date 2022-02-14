
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ran; } ;
typedef TYPE_1__ uv_once_t ;


 int FUNC_0 (TYPE_1__*,void (*) ()) ;

void FUNC_1(uv_once_t* VAR_0, void (*VAR_1)(void)) {

  if (VAR_0->ran) {
    return;
  }

  FUNC_0(VAR_0, VAR_1);
}
