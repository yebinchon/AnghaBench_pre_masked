
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifconfig_handle {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ifconfig_handle*) ;
 scalar_t__ FUNC_3 (struct ifconfig_handle*,char*,char**) ;
 struct ifconfig_handle* FUNC_4 () ;
 int FUNC_5 (char*,size_t,char*) ;
 scalar_t__ FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_8(char *VAR_0, size_t VAR_1, char *VAR_2)
{
 struct ifconfig_handle *VAR_3;
 char *VAR_4;

 VAR_3 = FUNC_4();
 if (FUNC_3(VAR_3, VAR_2, &VAR_4) < 0) {

  VAR_4 = VAR_2;
 }

 if (FUNC_6(VAR_4) < FUNC_6("wlan") + 1 ||
     FUNC_7(VAR_4, "wlan", 4) != 0)
  FUNC_0(1, "expecting a wlan interface name");

 FUNC_2(VAR_3);
 FUNC_5(VAR_0, VAR_1, VAR_4);
 if (VAR_4 != VAR_2)
  FUNC_1(VAR_4);
}
