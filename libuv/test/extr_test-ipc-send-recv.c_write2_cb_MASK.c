
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uv_write_t ;
typedef int uv_handle_t ;
struct TYPE_5__ {int handle; } ;
struct TYPE_4__ {int handle; } ;
struct TYPE_6__ {int listen; int channel; TYPE_2__ recv2; TYPE_1__ recv; } ;


 int FUNC_0 (int) ;
 TYPE_3__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(uv_write_t* VAR_4, int VAR_5) {
  FUNC_0(VAR_5 == 0);



  if (++VAR_3 == 2 && (VAR_1 || VAR_2)) {
    FUNC_1(&VAR_0, ((void*)0));
    FUNC_1(&VAR_0, ((void*)0));
    FUNC_1((uv_handle_t*)&VAR_0, ((void*)0));
    FUNC_1((uv_handle_t*)&VAR_0, ((void*)0));
  }
}
