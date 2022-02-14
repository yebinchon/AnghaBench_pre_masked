
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int socket; } ;
typedef TYPE_1__ uv_udp_t ;
struct TYPE_6__ {int socket; } ;
typedef TYPE_2__ uv_tcp_t ;
struct TYPE_7__ {scalar_t__ type; } ;
typedef TYPE_3__ uv_handle_t ;
typedef int SOCKET ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int,char*,int*) ;
 int FUNC_2 (int ,int ,int,char const*,int) ;
 int FUNC_3 (int ) ;

int FUNC_4(uv_handle_t* VAR_6, int VAR_7, int* VAR_8) {
  int VAR_9;
  int VAR_10;
  SOCKET VAR_11;

  if (VAR_6 == ((void*)0) || VAR_8 == ((void*)0))
    return VAR_2;

  if (VAR_6->type == VAR_4)
    VAR_11 = ((uv_tcp_t*) VAR_6)->socket;
  else if (VAR_6->type == VAR_5)
    VAR_11 = ((uv_udp_t*) VAR_6)->socket;
  else
    return VAR_3;

  VAR_10 = sizeof(*VAR_8);

  if (*VAR_8 == 0)
    VAR_9 = FUNC_1(VAR_11, VAR_1, VAR_7, (char*) VAR_8, &VAR_10);
  else
    VAR_9 = FUNC_2(VAR_11, VAR_1, VAR_7, (const char*) VAR_8, VAR_10);

  if (VAR_9 == VAR_0)
    return FUNC_3(FUNC_0());

  return 0;
}
