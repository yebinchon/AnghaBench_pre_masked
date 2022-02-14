
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tls_index; } ;
typedef TYPE_1__ uv_key_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 void* FUNC_1 (int ) ;
 int FUNC_2 () ;

void* FUNC_3(uv_key_t* VAR_1) {
  void* VAR_2;

  VAR_2 = FUNC_1(VAR_1->tls_index);
  if (VAR_2 == ((void*)0))
    if (FUNC_0() != VAR_0)
      FUNC_2();

  return VAR_2;
}
