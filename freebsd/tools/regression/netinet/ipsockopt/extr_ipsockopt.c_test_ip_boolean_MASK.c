
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int socklen_t ;
typedef int newvalue ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int,char*,char const*,char*,...) ;
 scalar_t__ FUNC_2 (int,int ,int,int*,int*) ;
 scalar_t__ FUNC_3 (int,int ,int,int*,int) ;

__attribute__((used)) static void
FUNC_4(int VAR_1, const char *VAR_2, int VAR_3,
    char *VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8[2];
 socklen_t VAR_9;






 if (VAR_5 == 0)
  VAR_7 = 0xff;
 else
  VAR_7 = 0;

 VAR_8[0] = -1;
 VAR_8[1] = -1;
 VAR_9 = sizeof(VAR_8);
 if (FUNC_2(VAR_1, VAR_0, VAR_3, VAR_8, &VAR_9) < 0)
  FUNC_0(-1, "test_ip_boolean: initial getsockopt()");

 if (VAR_9 != sizeof(VAR_8[0]))
  FUNC_1(-1, "test_ip_boolean(%s, %s): initial getsockopt() "
      "returned %d bytes", VAR_2, VAR_4, VAR_9);

 if (VAR_8[0] == -1)
  FUNC_1(-1, "test_ip_boolean(%s, %s): initial getsockopt() "
      "didn't return data", VAR_2, VAR_4);

 if (VAR_8[0] != VAR_5)
  FUNC_1(-1, "test_ip_boolean(%s, %s): initial getsockopt() "
      "returned %d (expected %d)", VAR_2, VAR_4,
      VAR_8[0], VAR_5);




 if (FUNC_3(VAR_1, VAR_0, VAR_3, &VAR_7, sizeof(VAR_7))
     < 0)
  FUNC_0(-1, "test_ip_boolean(%s, %s): setsockopt() to %d",
      VAR_2, VAR_4, VAR_7);





 VAR_8[0] = -1;
 VAR_8[1] = -1;
 VAR_9 = sizeof(VAR_8);
 if (FUNC_2(VAR_1, VAR_0, VAR_3, VAR_8, &VAR_9) < 0)
  FUNC_0(-1, "test_ip_boolean(%s, %s): getsockopt() after set to "
      "%d", VAR_2, VAR_4, VAR_7);

 if (VAR_9 != sizeof(VAR_8[0]))
  FUNC_1(-1, "test_ip_boolean(%s, %s): getsockopt() after set "
      "to %d returned %d bytes", VAR_2, VAR_4,
      VAR_7, VAR_9);

 if (VAR_8[0] == -1)
  FUNC_1(-1, "test_ip_boolean(%s, %s): getsockopt() after set "
      "to %d didn't return data", VAR_2, VAR_4,
      VAR_7);




 if (VAR_8[0] != (VAR_7 ? 1 : 0))
  FUNC_1(-1, "test_ip_boolean(%s, %s): getsockopt() after set "
      "to %d returned %d", VAR_2, VAR_4, VAR_7,
      VAR_8[0]);




 VAR_7 = VAR_5;
 if (FUNC_3(VAR_1, VAR_0, VAR_3, &VAR_7, sizeof(VAR_7))
     < 0)
  FUNC_0(-1, "test_ip_boolean(%s, %s): setsockopt() to reset",
      VAR_2, VAR_4);




 VAR_8[0] = -1;
 VAR_8[1] = -1;
 VAR_9 = sizeof(VAR_8);
 if (FUNC_2(VAR_1, VAR_0, VAR_3, VAR_8, &VAR_9) < 0)
  FUNC_0(-1, "test_ip_boolean(%s, %s): getsockopt() after reset",
      VAR_2, VAR_4);

 if (VAR_9 != sizeof(VAR_8[0]))
  FUNC_1(-1, "test_ip_boolean(%s, %s): getsockopt() after reset "
      "returned %d bytes", VAR_2, VAR_4, VAR_9);

 if (VAR_8[0] == -1)
  FUNC_1(-1, "test_ip_boolean(%s, %s): getsockopt() after reset "
      "didn't return data", VAR_2, VAR_4);

 if (VAR_8[0] != VAR_7)
  FUNC_1(-1, "test_ip_boolean(%s, %s): getsockopt() after reset "
      "returned %d", VAR_2, VAR_4, VAR_7);
}
