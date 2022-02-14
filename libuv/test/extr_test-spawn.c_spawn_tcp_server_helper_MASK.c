
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_tcp_t ;
typedef int uv_stream_t ;
typedef int uv_os_sock_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int) ;

int FUNC_6(void) {
  uv_tcp_t VAR_1;
  uv_os_sock_t VAR_2;
  int VAR_3;

  VAR_3 = FUNC_4(FUNC_2(), &VAR_1);
  FUNC_0(VAR_3 == 0);




  VAR_2 = 3;

  VAR_3 = FUNC_5(&VAR_1, VAR_2);
  FUNC_0(VAR_3 == 0);




  VAR_3 = FUNC_3((uv_stream_t*)&VAR_1, VAR_0, ((void*)0));
  FUNC_0(VAR_3 == 0);

  return 1;
}
