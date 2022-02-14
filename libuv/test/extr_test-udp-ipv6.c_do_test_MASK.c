
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_udp_recv_cb ;
typedef int uv_buf_t ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char*,int ,struct sockaddr_in*) ;
 scalar_t__ FUNC_5 (char*,int ,struct sockaddr_in6*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *,int ,int,int ) ;
 int FUNC_9 (int *,struct sockaddr const*,int) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (int *,int *,int *,int,struct sockaddr const*,int ) ;

__attribute__((used)) static void FUNC_13(uv_udp_recv_cb VAR_12, int VAR_13) {
  struct sockaddr_in6 VAR_14;
  struct sockaddr_in VAR_15;
  uv_buf_t VAR_16;
  int VAR_17;

  FUNC_0(0 == FUNC_5("::0", VAR_0, &VAR_14));

  VAR_17 = FUNC_10(FUNC_3(), &VAR_9);
  FUNC_0(VAR_17 == 0);

  VAR_17 = FUNC_9(&VAR_9, (const struct sockaddr*) &VAR_14, VAR_13);
  FUNC_0(VAR_17 == 0);

  VAR_17 = FUNC_11(&VAR_9, VAR_2, VAR_12);
  FUNC_0(VAR_17 == 0);

  VAR_17 = FUNC_10(FUNC_3(), &VAR_3);
  FUNC_0(VAR_17 == 0);

  VAR_16 = FUNC_2("PING", 4);
  FUNC_0(0 == FUNC_4("127.0.0.1", VAR_0, &VAR_15));

  VAR_17 = FUNC_12(&VAR_6,
                  &VAR_3,
                  &VAR_16,
                  1,
                  (const struct sockaddr*) &VAR_15,
                  VAR_7);
  FUNC_0(VAR_17 == 0);

  VAR_17 = FUNC_7(FUNC_3(), &VAR_10);
  FUNC_0(VAR_17 == 0);

  VAR_17 = FUNC_8(&VAR_10, VAR_11, 500, 0);
  FUNC_0(VAR_17 == 0);

  FUNC_0(VAR_4 == 0);
  FUNC_0(VAR_8 == 0);
  FUNC_0(VAR_5 == 0);

  FUNC_6(FUNC_3(), VAR_1);

  FUNC_0(VAR_4 == 3);

  FUNC_1();
}
