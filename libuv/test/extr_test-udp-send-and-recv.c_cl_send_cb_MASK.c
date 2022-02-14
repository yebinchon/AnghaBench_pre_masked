
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int handle; } ;
typedef TYPE_1__ uv_udp_send_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(uv_udp_send_t* VAR_3, int VAR_4) {
  int VAR_5;

  FUNC_0(VAR_3 != ((void*)0));
  FUNC_0(VAR_4 == 0);
  FUNC_1(VAR_3->handle);

  VAR_5 = FUNC_2(VAR_3->handle, VAR_0, VAR_1);
  FUNC_0(VAR_5 == 0);

  VAR_2++;
}
