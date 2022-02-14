
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_tcp_t ;
typedef int uv_pipe_t ;
typedef int uv_connect_t ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int * VAR_8 ;
 scalar_t__ FUNC_1 () ;
 int * VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int *,int *,int ,int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int *,int *,struct sockaddr const*,int ) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static void FUNC_6(void) {
  uv_connect_t* VAR_12;
  uv_tcp_t* VAR_13;
  uv_pipe_t* VAR_14;
  int VAR_15;

  while (VAR_7 < VAR_1 &&
         VAR_7 < VAR_11 + VAR_0) {
    if (VAR_10 == VAR_2) {
      VAR_13 = &VAR_9[VAR_7++];

      VAR_15 = FUNC_5(VAR_6, VAR_13);
      FUNC_0(VAR_15 == 0);

      VAR_12 = (uv_connect_t*) FUNC_1();
      VAR_15 = FUNC_4(VAR_12,
                         VAR_13,
                         (const struct sockaddr*) &VAR_4,
                         VAR_5);
      FUNC_0(VAR_15 == 0);
    } else {
      VAR_14 = &VAR_8[VAR_7++];

      VAR_15 = FUNC_3(VAR_6, VAR_14, 0);
      FUNC_0(VAR_15 == 0);

      VAR_12 = (uv_connect_t*) FUNC_1();
      FUNC_2(VAR_12, VAR_14, VAR_3, VAR_5);
    }
  }
}
