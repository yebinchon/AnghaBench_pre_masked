
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_tcp_t ;
typedef int uv_stream_t ;
typedef int uv_loop_t ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,int ,struct sockaddr_in*) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,struct sockaddr const*,int ) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(uv_loop_t* VAR_2, uv_tcp_t* VAR_3) {
  struct sockaddr_in VAR_4;
  int VAR_5;

  FUNC_0(0 == FUNC_1("0.0.0.0", VAR_0, &VAR_4));

  VAR_5 = FUNC_4(VAR_2, VAR_3);
  FUNC_0(VAR_5 == 0);

  VAR_5 = FUNC_3(VAR_3, (const struct sockaddr*) &VAR_4, 0);
  FUNC_0(VAR_5 == 0);

  VAR_5 = FUNC_2((uv_stream_t*) VAR_3, 128, VAR_1);
  FUNC_0(VAR_5 == 0);
}
