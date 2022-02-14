
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,char const*,char const*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,char*,char const*,char const*,...) ;
 scalar_t__ FUNC_2 (int,int ,int,int*,int*) ;
 scalar_t__ FUNC_3 (int,int ,int,int*,int) ;

__attribute__((used)) static void
FUNC_4(int VAR_3, const char *VAR_4, int VAR_5,
    const char *VAR_6, int VAR_7)
{
 int VAR_8[2];
 socklen_t VAR_9;





 VAR_8[0] = -1;
 VAR_8[1] = -1;
 VAR_9 = sizeof(VAR_8);
 if (FUNC_2(VAR_3, VAR_1, VAR_5, VAR_8, &VAR_9) < 0)
  FUNC_0(-1, "test_ip_uchar(%s, %s): initial getsockopt()",
      VAR_4, VAR_6);

 if (VAR_9 != sizeof(VAR_8[0]))
  FUNC_1(-1, "test_ip_uchar(%s, %s): initial getsockopt() "
      "returned %d bytes", VAR_4, VAR_6, VAR_9);

 if (VAR_8[0] == -1)
  FUNC_1(-1, "test_ip_uchar(%s, %s): initial getsockopt() didn't "
      "return data", VAR_4, VAR_6);

 if (VAR_8[0] != VAR_7)
  FUNC_1(-1, "test_ip_uchar(%s, %s): initial getsockopt() "
      "returned value of %d, not %d", VAR_4, VAR_6,
      VAR_8[0], VAR_7);




 VAR_8[0] = 128;
 VAR_8[1] = -1;
 if (FUNC_3(VAR_3, VAR_1, VAR_5, VAR_8, sizeof(VAR_8[0])) < 0)
  FUNC_0(-1, "test_ip_uchar(%s, %s): setsockopt(128)",
      VAR_4, VAR_6);




 VAR_8[0] = -1;
 VAR_8[1] = -1;
 VAR_9 = sizeof(VAR_8);
 if (FUNC_2(VAR_3, VAR_1, VAR_5, VAR_8, &VAR_9) < 0)
  FUNC_0(-1, "test_ip_uchar(%s, %s): getsockopt() after set to "
      "128", VAR_4, VAR_6);

 if (VAR_9 != sizeof(VAR_8[0]))
  FUNC_1(-1, "test_ip_uchar(%s, %s): getsockopt() after set to "
      "128 returned %d bytes", VAR_4, VAR_6, VAR_9);

 if (VAR_8[0] == -1)
  FUNC_1(-1, "test_ip_uchar(%s, %s): getsockopt() after set to "
      "128 didn't return data", VAR_4, VAR_6);

 if (VAR_8[0] != 128)
  FUNC_1(-1, "test_ip_uchar(%s, %s): getsockopt() after set to "
      "128 returned %d", VAR_4, VAR_6, VAR_8[0]);




 VAR_8[0] = 0;
 VAR_8[1] = 0;
 if (FUNC_3(VAR_3, VAR_1, VAR_5, VAR_8, sizeof(VAR_8[0])) < 0)
  FUNC_0(-1, "test_ip_uchar(%s, %s): setsockopt() to reset from "
      "128", VAR_4, VAR_6);

 if (VAR_9 != sizeof(VAR_8[0]))
  FUNC_1(-1, "test_ip_uchar(%s, %s): getsockopt() after reset "
     "from 128 returned %d bytes", VAR_4, VAR_6,
      VAR_9);

 if (VAR_8[0] == -1)
  FUNC_1(-1, "test_ip_uchar(%s, %s): getsockopt() after reset "
      "from 128 didn't return data", VAR_4, VAR_6);

 if (VAR_8[0] != 0)
  FUNC_1(-1, "test_ip_uchar(%s, %s): getsockopt() after reset "
      "from 128 returned %d", VAR_4, VAR_6,
      VAR_8[0]);







 VAR_8[0] = 32000;
 VAR_8[1] = -1;
 if (FUNC_3(VAR_3, VAR_1, VAR_5, VAR_8, sizeof(VAR_8[0])) < 0) {




  if (VAR_2 == VAR_0)
   return;
  FUNC_0(-1, "test_ip_uchar(%s, %s): getsockopt(32000)",
      VAR_4, VAR_6);
 }

 VAR_8[0] = -1;
 VAR_8[1] = -1;
 VAR_9 = sizeof(VAR_8);
 if (FUNC_2(VAR_3, VAR_1, VAR_5, VAR_8, &VAR_9) < 0)
  FUNC_0(-1, "test_ip_uchar(%s, %s): getsockopt() after set to "
      "32000", VAR_4, VAR_6);

 if (VAR_9 != sizeof(VAR_8[0]))
  FUNC_1(-1, "test_ip_uchar(%s, %s): getsockopt() after set to "
      "32000 returned %d bytes", VAR_4, VAR_6,
      VAR_9);

 if (VAR_8[0] == -1)
  FUNC_1(-1, "test_ip_uchar(%s, %s): getsockopt() after set to "
      "32000 didn't return data", VAR_4, VAR_6);

 if (VAR_8[0] == 32000)
  FUNC_1(-1, "test_ip_uchar(%s, %s): getsockopt() after set to "
      "32000 returned 32000: failed to truncate", VAR_4,
      VAR_6);
}
