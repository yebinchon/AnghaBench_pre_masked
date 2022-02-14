
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_4(int VAR_8) {
  int VAR_9;

  VAR_4 = (uv_handle_t*)&VAR_7;
  VAR_5 = VAR_0;

  VAR_9 = FUNC_2(VAR_2, &VAR_7);
  if (VAR_9) {
    FUNC_0(VAR_6, "uv_udp_init: %s\n", FUNC_1(VAR_9));
    return 1;
  }

  VAR_9 = FUNC_3(&VAR_7, VAR_1, VAR_3);
  if (VAR_9) {
    FUNC_0(VAR_6, "uv_udp_recv_start: %s\n", FUNC_1(VAR_9));
    return 1;
  }

  return 0;
}
