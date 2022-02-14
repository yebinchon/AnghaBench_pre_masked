
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_connect_cb ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char*,int ,struct sockaddr_in*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int *,struct sockaddr const*,int ) ;
 int FUNC_5 (int *,int *,struct sockaddr const*,int ) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(uv_connect_cb VAR_6) {
  struct sockaddr_in VAR_7, VAR_8;
  int VAR_9;

  FUNC_0(0 == FUNC_2("0.0.0.0", 0, &VAR_7));


  FUNC_0(0 == FUNC_2("127.0.0.1", VAR_0, &VAR_8));


  VAR_9 = FUNC_6(FUNC_1(), &VAR_5);
  FUNC_0(!VAR_9);



  FUNC_0(0 == FUNC_4(&VAR_5, (const struct sockaddr*) &VAR_7, 0));

  VAR_9 = FUNC_5(&VAR_4,
                     &VAR_5,
                     (const struct sockaddr*) &VAR_8,
                     VAR_6);
  FUNC_0(!VAR_9);

  FUNC_3(FUNC_1(), VAR_1);

  FUNC_0(VAR_3 == 1);
  FUNC_0(VAR_2 == 1);
}
