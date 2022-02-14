
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_tcp_t ;
typedef int SOCKET ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,char const*,int) ;

__attribute__((used)) static int FUNC_2(uv_tcp_t* VAR_2, SOCKET VAR_3, int VAR_4) {
  if (FUNC_1(VAR_3,
                 VAR_0,
                 VAR_1,
                 (const char*)&VAR_4,
                 sizeof VAR_4) == -1) {
    return FUNC_0();
  }
  return 0;
}
