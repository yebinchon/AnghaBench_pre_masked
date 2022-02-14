
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_tcp_t ;
typedef int SOCKET ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,char const*,int) ;

__attribute__((used)) static int FUNC_2(uv_tcp_t* VAR_4, SOCKET VAR_5, int VAR_6, unsigned int VAR_7) {
  if (FUNC_1(VAR_5,
                 VAR_1,
                 VAR_2,
                 (const char*)&VAR_6,
                 sizeof VAR_6) == -1) {
    return FUNC_0();
  }

  if (VAR_6 && FUNC_1(VAR_5,
                           VAR_0,
                           VAR_3,
                           (const char*)&VAR_7,
                           sizeof VAR_7) == -1) {
    return FUNC_0();
  }

  return 0;
}
