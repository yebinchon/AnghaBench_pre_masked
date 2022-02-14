
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_tcp_t ;
typedef int uv_handle_t ;
struct TYPE_3__ {scalar_t__ handle; } ;
typedef TYPE_1__ uv_connect_t ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sockaddr*,char*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,struct sockaddr*,int*) ;
 int FUNC_4 (int *,struct sockaddr*,int*) ;

__attribute__((used)) static void FUNC_5(uv_connect_t* VAR_4, int VAR_5) {
  struct sockaddr VAR_6, VAR_7;
  int VAR_8, VAR_9;

  FUNC_0(VAR_5 == 0);

  VAR_9 = sizeof VAR_6;
  VAR_8 = FUNC_4((uv_tcp_t*) VAR_4->handle, &VAR_6, &VAR_9);
  FUNC_0(VAR_8 == 0);
  FUNC_1(&VAR_6, "127.0.0.1", 0, "connected socket");
  VAR_1++;

  VAR_9 = sizeof VAR_7;
  VAR_8 = FUNC_3((uv_tcp_t*) VAR_4->handle, &VAR_7, &VAR_9);
  FUNC_0(VAR_8 == 0);
  FUNC_1(&VAR_7, "127.0.0.1", VAR_2, "connected socket peer");
  VAR_0++;

  FUNC_2((uv_handle_t*)&VAR_3, ((void*)0));
}
