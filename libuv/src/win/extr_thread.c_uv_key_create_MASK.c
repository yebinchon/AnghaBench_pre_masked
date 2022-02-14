
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tls_index; } ;
typedef TYPE_1__ uv_key_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int VAR_1 ;

int FUNC_1(uv_key_t* VAR_2) {
  VAR_2->tls_index = FUNC_0();
  if (VAR_2->tls_index == VAR_0)
    return VAR_1;
  return 0;
}
