
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_timer_t ;
typedef int uv_handle_t ;
struct TYPE_4__ {int udp_handle; } ;
struct TYPE_3__ {int udp_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(uv_timer_t* VAR_6) {
  int VAR_7;

  VAR_1 = 1;

  for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
    FUNC_0((uv_handle_t*)&VAR_5[VAR_7].udp_handle, VAR_0);

  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
    FUNC_0((uv_handle_t*)&VAR_4[VAR_7].udp_handle, VAR_0);
}
