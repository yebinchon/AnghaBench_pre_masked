
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211req {int i_name; } ;
typedef int ifr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ,struct ieee80211req*) ;
 int FUNC_2 (struct ieee80211req*,int ,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,char const*,int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_5)
{
 struct ieee80211req VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_3(VAR_0, VAR_4, 0);
 if (VAR_7 < 0) {
  FUNC_5(VAR_2, "socket(SOCK_DRAGM): %m");
  return -1;
 }
 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 FUNC_4(VAR_6.i_name, VAR_5, VAR_1);
 if (FUNC_1(VAR_7, VAR_3, &VAR_6) < 0) {
  FUNC_5(VAR_2, "ioctl(SIOCIFDESTROY): %m");
  VAR_8 = -1;
 } else
  VAR_8 = 0;
 FUNC_0(VAR_7);
 return VAR_8;
}
