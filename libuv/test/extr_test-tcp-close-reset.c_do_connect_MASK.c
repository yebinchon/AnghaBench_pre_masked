
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_tcp_t ;
typedef int uv_loop_t ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char*,int ,struct sockaddr_in*) ;
 int FUNC_2 (int *,int *,struct sockaddr const*,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(uv_loop_t* VAR_3, uv_tcp_t* VAR_4) {
  struct sockaddr_in VAR_5;
  int VAR_6;

  FUNC_0(0 == FUNC_1("127.0.0.1", VAR_0, &VAR_5));

  VAR_6 = FUNC_3(VAR_3, VAR_4);
  FUNC_0(VAR_6 == 0);

  VAR_6 = FUNC_2(&VAR_2,
                     VAR_4,
                     (const struct sockaddr*) &VAR_5,
                     VAR_1);
  FUNC_0(VAR_6 == 0);
}
