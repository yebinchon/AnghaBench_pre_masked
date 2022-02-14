
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int i ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ,int ,int*,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(void)
{
 int VAR_6, VAR_7, VAR_8;

 VAR_8 = FUNC_4(VAR_1, VAR_2, 0);
 if (VAR_8 < 0)
  FUNC_1(-1, "test_set_qlimit: socket(PF_INET, SOCK_STREAM)");

 VAR_6 = 0;
 VAR_7 = FUNC_3(VAR_8, VAR_3, VAR_4, &VAR_6, sizeof(VAR_6));
 if (VAR_7 < 0 && VAR_5 != VAR_0) {
  FUNC_5("test_set_qlimit: setsockopt(SOL_SOCKET, "
      "SO_LISTENQLIMIT, 0): unexpected error");
  FUNC_0(VAR_8);
 }

 if (VAR_7 == 0) {
  FUNC_6("test_set_qlimit: setsockopt(SOL_SOCKET, "
      "SO_LISTENQLIMIT, 0) succeeded");
  FUNC_0(VAR_8);
  FUNC_2(-1);
 }
 FUNC_0(VAR_8);
}
