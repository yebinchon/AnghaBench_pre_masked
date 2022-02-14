
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uv_os_sock_t ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__,struct sockaddr const*,int) ;
 int FUNC_2 (scalar_t__,int ,int ,int*,int) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static uv_os_sock_t FUNC_4 (struct sockaddr_in VAR_6) {
  uv_os_sock_t VAR_7;
  int VAR_8;

  VAR_7 = FUNC_3(VAR_0, VAR_3, VAR_2);



  FUNC_0(VAR_7 >= 0);



  {

    int VAR_9 = 1;
    VAR_8 = FUNC_2(VAR_7, VAR_4, VAR_5, &VAR_9, sizeof VAR_9);
    FUNC_0(VAR_8 == 0);
  }


  VAR_8 = FUNC_1(VAR_7, (const struct sockaddr*) &VAR_6, sizeof VAR_6);
  FUNC_0(VAR_8 == 0);

  return VAR_7;
}
