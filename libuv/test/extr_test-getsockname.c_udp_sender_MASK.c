
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_buf_t ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (char*,int ,struct sockaddr_in*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int *,int *,int,struct sockaddr const*,int ) ;

__attribute__((used)) static void FUNC_5(void) {
  struct sockaddr_in VAR_5;
  uv_buf_t VAR_6;
  int VAR_7;

  VAR_7 = FUNC_3(VAR_0, &VAR_3);
  FUNC_0(!VAR_7);

  VAR_6 = FUNC_1("PING", 4);
  FUNC_0(0 == FUNC_2("127.0.0.1", VAR_2, &VAR_5));

  VAR_7 = FUNC_4(&VAR_1,
                  &VAR_3,
                  &VAR_6,
                  1,
                  (const struct sockaddr*) &VAR_5,
                  VAR_4);
  FUNC_0(!VAR_7);
}
