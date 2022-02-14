
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_udp_t ;
typedef int uv_handle_t ;
struct TYPE_3__ {int base; } ;
typedef TYPE_1__ uv_buf_t ;
struct sockaddr {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int sockname ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sockaddr*,char*,int ,char*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct sockaddr*,int,int) ;
 int VAR_1 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,struct sockaddr*,int*) ;

__attribute__((used)) static void FUNC_6(uv_udp_t* VAR_2,
                     ssize_t VAR_3,
                     const uv_buf_t* VAR_4,
                     const struct sockaddr* VAR_5,
                     unsigned VAR_6) {
  struct sockaddr VAR_7;
  int VAR_8;
  int VAR_9;

  FUNC_0(VAR_3 >= 0);
  FUNC_2(VAR_4->base);

  if (VAR_3 == 0) {
    return;
  }

  FUNC_3(&VAR_7, -1, sizeof VAR_7);
  VAR_8 = sizeof(VAR_7);
  VAR_9 = FUNC_5(&VAR_1, &VAR_7, &VAR_8);
  FUNC_0(VAR_9 == 0);
  FUNC_1(&VAR_7, "0.0.0.0", 0, "udp receiving socket");
  VAR_0++;

  FUNC_4((uv_handle_t*) &VAR_1, ((void*)0));
  FUNC_4((uv_handle_t*) VAR_2, ((void*)0));
}
