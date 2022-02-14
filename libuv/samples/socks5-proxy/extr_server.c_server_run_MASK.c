
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_loop_t ;
struct TYPE_3__ {int bind_host; } ;
struct addrinfo {int * servers; int getaddrinfo_req; int ai_protocol; int ai_socktype; int ai_family; int * loop; TYPE_1__ config; } ;
typedef int state ;
typedef struct addrinfo server_state ;
typedef TYPE_1__ server_config ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct addrinfo*,int ,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *,int *,int ,int ,int *,struct addrinfo*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (int) ;

int FUNC_8(const server_config *VAR_5, uv_loop_t *VAR_6) {
  struct addrinfo VAR_7;
  server_state VAR_8;
  int VAR_9;

  FUNC_2(&VAR_8, 0, sizeof(VAR_8));
  VAR_8.servers = ((void*)0);
  VAR_8.config = *VAR_5;
  VAR_8.loop = VAR_6;




  FUNC_2(&VAR_7, 0, sizeof(VAR_7));
  VAR_7.ai_family = VAR_0;
  VAR_7.ai_socktype = VAR_2;
  VAR_7.ai_protocol = VAR_1;

  VAR_9 = FUNC_4(VAR_6,
                       &VAR_8.getaddrinfo_req,
                       VAR_4,
                       VAR_5->bind_host,
                       ((void*)0),
                       &VAR_7);
  if (VAR_9 != 0) {
    FUNC_3("getaddrinfo: %s", FUNC_7(VAR_9));
    return VAR_9;
  }


  if (FUNC_6(VAR_6, VAR_3)) {
    FUNC_0();
  }


  FUNC_5(VAR_6);
  FUNC_1(VAR_8.servers);
  return 0;
}
