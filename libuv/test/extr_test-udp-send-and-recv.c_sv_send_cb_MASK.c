
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ handle; } ;
typedef TYPE_1__ uv_udp_send_t ;
typedef int uv_handle_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(uv_udp_send_t* VAR_2, int VAR_3) {
  FUNC_0(VAR_2 != ((void*)0));
  FUNC_0(VAR_3 == 0);
  FUNC_1(VAR_2->handle);

  FUNC_3((uv_handle_t*) VAR_2->handle, VAR_0);
  FUNC_2(VAR_2);

  VAR_1++;
}
