
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_tcp_t ;
typedef int uv_connect_t ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char*,int ,struct sockaddr_in*) ;
 int FUNC_4 (int *,int *,struct sockaddr const*,int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(void) {
  struct sockaddr_in VAR_2;
  uv_tcp_t* VAR_3 = (uv_tcp_t*)FUNC_1(sizeof *VAR_3);
  uv_connect_t* VAR_4 = FUNC_1(sizeof *VAR_4);
  int VAR_5;

  FUNC_0(0 == FUNC_3("127.0.0.1", VAR_0, &VAR_2));
  FUNC_0(VAR_3 != ((void*)0));
  FUNC_0(VAR_4 != ((void*)0));

  VAR_5 = FUNC_5(FUNC_2(), VAR_3);
  FUNC_0(VAR_5 == 0);

  VAR_5 = FUNC_4(VAR_4,
                     VAR_3,
                     (const struct sockaddr*) &VAR_2,
                     VAR_1);
  FUNC_0(VAR_5 == 0);
}
