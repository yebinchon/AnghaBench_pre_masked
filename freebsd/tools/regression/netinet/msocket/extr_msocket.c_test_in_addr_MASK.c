
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
typedef int socklen_t ;
typedef int ia ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,char const*,char const*) ;
 int FUNC_1 (int,char*,char const*,char const*,int ,int ) ;
 int FUNC_2 (int,int ,int,struct in_addr*,int*) ;
 int FUNC_3 (struct in_addr) ;
 scalar_t__ FUNC_4 (struct in_addr*,struct in_addr*,int) ;
 int FUNC_5 (int,int ,int,struct in_addr*,int) ;
 int FUNC_6 (char*,char const*,char const*) ;

__attribute__((used)) static void
FUNC_7(int VAR_2, const char *VAR_3, struct in_addr VAR_4,
    struct in_addr VAR_5, struct in_addr VAR_6, const char *VAR_7,
    int VAR_8, int VAR_9)
{
 socklen_t VAR_10;
 struct in_addr VAR_11;
 int VAR_12;




 VAR_11 = VAR_6;
 VAR_10 = sizeof(VAR_11);

 VAR_12 = FUNC_2(VAR_8, VAR_0, VAR_2, &VAR_11, &VAR_10);
 if (VAR_12 < 0)
  FUNC_0(-1, "FAIL: getsockopt(%s, IPPROTO_IP, %s)",
      VAR_7, VAR_3);
 if (VAR_12 == 0 && (VAR_9 & VAR_1))
  FUNC_6("WARN: getsockopt(%s, IPPROTO_IP, %s) returned 0",
      VAR_7, VAR_3);
 if (FUNC_4(&VAR_11, &VAR_4, sizeof(struct in_addr)))
  FUNC_1(-1, "FAIL: getsockopt(%s, IPPROTO_IP, %s) default is "
      "%s not %s", VAR_7, VAR_3, FUNC_3(VAR_11),
      FUNC_3(VAR_4));




 VAR_11 = VAR_5;
 VAR_12 = FUNC_5(VAR_8, VAR_0, VAR_2, &VAR_11, sizeof(VAR_11));
 if (VAR_12 == -1)
  FUNC_0(-1, "FAIL: setsockopt(%s, IPPROTO_IP, %s)",
      VAR_7, VAR_3);
 if (VAR_12 == 0 && (VAR_9 & VAR_1))
  FUNC_6("WARN: setsockopt(%s, IPPROTO_IP, %s) returned 0",
      VAR_7, VAR_3);

 VAR_11 = VAR_6;
 VAR_10 = sizeof(VAR_11);
 VAR_12 = FUNC_2(VAR_8, VAR_0, VAR_2, &VAR_11, &VAR_10);
 if (VAR_12 < 0)
  FUNC_0(-1, "FAIL: getsockopt(%s, IPPROTO_IP, %s)",
      VAR_7, VAR_3);
 if (VAR_12 == 0 && (VAR_9 & VAR_1))
  FUNC_6("WARN: getsockopt(%s, IPPROTO_IP, %s) returned 0",
      VAR_7, VAR_3);
 if (FUNC_4(&VAR_11, &VAR_5, sizeof(struct in_addr)))
  FUNC_1(-1, "FAIL: getsockopt(%s, IPPROTO_IP, %s) set value is "
      "%s not %s", VAR_7, VAR_3, FUNC_3(VAR_11),
      FUNC_3(VAR_5));
}
