
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uv_tcp_t ;
typedef int uv_stream_t ;
typedef int uv_handle_t ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {int conn; int conn_req; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char*,int ,struct sockaddr_in*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int ,int *,int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *,struct sockaddr const*,int ) ;
 int FUNC_12 (int *,int *,struct sockaddr const*,int ) ;
 int FUNC_13 (int ,int *) ;

int FUNC_14(void) {





  int VAR_11;
  struct sockaddr_in VAR_12;

  VAR_11 = FUNC_8(FUNC_2(), &VAR_3, 1);
  FUNC_0(VAR_11 == 0);

  FUNC_9(&VAR_3, 0);

  FUNC_0(1 == FUNC_5((uv_stream_t*) &VAR_3));
  FUNC_0(1 == FUNC_6((uv_stream_t*) &VAR_3));
  FUNC_0(0 == FUNC_4((uv_handle_t*) &VAR_3));

  VAR_11 = FUNC_13(FUNC_2(), &VAR_10);
  FUNC_0(VAR_11 == 0);

  FUNC_0(0 == FUNC_3("0.0.0.0", VAR_1, &VAR_12));

  VAR_11 = FUNC_11(&VAR_10, (const struct sockaddr*) &VAR_12, 0);
  FUNC_0(VAR_11 == 0);

  VAR_11 = FUNC_7((uv_stream_t*)&VAR_10, VAR_0, VAR_7);
  FUNC_0(VAR_11 == 0);


  VAR_11 = FUNC_13(FUNC_2(), &VAR_5.conn);
  FUNC_0(VAR_11 == 0);

  FUNC_0(0 == FUNC_3("127.0.0.1", VAR_1, &VAR_12));

  VAR_11 = FUNC_12(&VAR_5.conn_req,
                     (uv_tcp_t*) &VAR_5.conn,
                     (const struct sockaddr*) &VAR_12,
                     VAR_6);
  FUNC_0(VAR_11 == 0);

  VAR_11 = FUNC_10(FUNC_2(), VAR_2);
  FUNC_0(VAR_11 == 0);

  FUNC_0(VAR_8 == 1);
  FUNC_0(VAR_9 == 1);
  FUNC_0(VAR_4 == 4);

  FUNC_1();
  return 0;
}
