
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_stream_t ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char*,int ,struct sockaddr_in*) ;
 scalar_t__ FUNC_3 (int *,int,int ) ;
 scalar_t__ FUNC_4 (int *,struct sockaddr*,int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(void) {
  struct sockaddr_in VAR_3;

  FUNC_0(0 == FUNC_2("0.0.0.0", VAR_0, &VAR_3));

  FUNC_0(0 == FUNC_5(FUNC_1(), &VAR_2));
  FUNC_0(0 == FUNC_4(&VAR_2, (struct sockaddr*) &VAR_3, 0));
  FUNC_0(0 == FUNC_3((uv_stream_t*) &VAR_2, 128, VAR_1));
}
