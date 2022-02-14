
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uc ;
typedef scalar_t__ u_char ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,char const*,char const*) ;
 int FUNC_1 (int,char*,char const*,char const*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int,int ,int,scalar_t__*,int*) ;
 int FUNC_3 (int,int ,int,scalar_t__*,int) ;
 int FUNC_4 (char*,char const*,char const*) ;

__attribute__((used)) static void
FUNC_5(int VAR_2, const char *VAR_3, u_char VAR_4,
    u_char VAR_5, u_char VAR_6, const char *VAR_7, int VAR_8,
    int VAR_9)
{
 socklen_t VAR_10;
 u_char VAR_11;
 int VAR_12;




 VAR_11 = VAR_6;
 VAR_10 = sizeof(VAR_11);

 VAR_12 = FUNC_2(VAR_8, VAR_0, VAR_2, &VAR_11, &VAR_10);
 if (VAR_12 < 0)
  FUNC_0(-1, "FAIL: getsockopt(%s, IPPROTO_IP, %s)",
      VAR_7, VAR_3);
 if (VAR_12 == 0 && (VAR_9 & VAR_1))
  FUNC_4("WARN: getsockopt(%s, IPPROTO_IP, %s) returned 0",
      VAR_7, VAR_3);
 if (VAR_11 != VAR_4)
  FUNC_1(-1, "FAIL: getsockopt(%s, IPPROTO_IP, %s) default is "
      "%d not %d", VAR_7, VAR_3, VAR_11, VAR_4);




 VAR_11 = VAR_5;
 VAR_12 = FUNC_3(VAR_8, VAR_0, VAR_2, &VAR_11, sizeof(VAR_11));
 if (VAR_12 == -1)
  FUNC_0(-1, "FAIL: setsockopt(%s, IPPROTO_IP, %s)",
      VAR_7, VAR_3);
 if (VAR_12 == 0 && (VAR_9 & VAR_1))
  FUNC_4("WARN: setsockopt(%s, IPPROTO_IP, %s) returned 0",
      VAR_7, VAR_3);

 VAR_11 = VAR_6;
 VAR_10 = sizeof(VAR_11);
 VAR_12 = FUNC_2(VAR_8, VAR_0, VAR_2, &VAR_11, &VAR_10);
 if (VAR_12 < 0)
  FUNC_0(-1, "FAIL: getsockopt(%s, IPPROTO_IP, %s)",
      VAR_7, VAR_3);
 if (VAR_12 == 0 && (VAR_9 & VAR_1))
  FUNC_4("WARN: getsockopt(%s, IPPROTO_IP, %s) returned 0",
      VAR_7, VAR_3);
 if (VAR_11 != VAR_5)
  FUNC_1(-1, "FAIL: getsockopt(%s, IPPROTO_IP, %s) set value is "
      "%d not %d", VAR_7, VAR_3, VAR_11, VAR_5);
}
