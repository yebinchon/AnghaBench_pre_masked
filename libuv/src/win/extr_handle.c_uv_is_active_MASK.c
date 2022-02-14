
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ uv_handle_t ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(const uv_handle_t* VAR_2) {
  return (VAR_2->flags & VAR_0) &&
        !(VAR_2->flags & VAR_1);
}
