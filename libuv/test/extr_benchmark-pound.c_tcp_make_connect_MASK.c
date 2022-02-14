
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uv_tcp_t ;
struct TYPE_10__ {int conn_req; } ;
typedef TYPE_4__ tcp_conn_rec ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_9__ {TYPE_5__* data; } ;
struct TYPE_8__ {TYPE_5__* data; } ;
struct TYPE_7__ {TYPE_5__* data; } ;
struct TYPE_11__ {int i; TYPE_3__ stream; TYPE_2__ write_req; TYPE_1__ conn_req; } ;
typedef TYPE_5__ conn_rec ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_2 ;
 int FUNC_2 (char*,int) ;
 int VAR_3 ;
 char* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char*,int ,struct sockaddr_in*) ;
 int FUNC_5 (int *,int *,struct sockaddr const*,int ) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(conn_rec* VAR_4) {
  struct sockaddr_in VAR_5;
  tcp_conn_rec* VAR_6;
  int VAR_7;

  VAR_6 = (tcp_conn_rec*) VAR_4;

  VAR_7 = FUNC_6(VAR_2, (uv_tcp_t*)&VAR_4->stream);
  FUNC_0(VAR_7 == 0);

  FUNC_0(0 == FUNC_4("127.0.0.1", VAR_0, &VAR_5));

  VAR_7 = FUNC_5(&VAR_6->conn_req,
                     (uv_tcp_t*) &VAR_4->stream,
                     (const struct sockaddr*) &VAR_5,
                     VAR_1);
  if (VAR_7) {
    FUNC_1(VAR_3, "uv_tcp_connect error %s\n", FUNC_3(VAR_7));
    FUNC_0(0);
  }





  VAR_4->conn_req.data = VAR_4;
  VAR_4->write_req.data = VAR_4;
  VAR_4->stream.data = VAR_4;
}
