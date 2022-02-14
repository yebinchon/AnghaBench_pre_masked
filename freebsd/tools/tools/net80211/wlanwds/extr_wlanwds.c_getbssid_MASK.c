
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211req {int i_len; int * i_data; int i_type; int i_name; } ;
typedef int ireq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,char const*) ;
 scalar_t__ FUNC_1 (int,int ,struct ieee80211req*) ;
 int FUNC_2 (struct ieee80211req*,int ,int) ;
 int FUNC_3 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_4(int VAR_3, const char *VAR_4, uint8_t VAR_5[VAR_0])
{
 struct ieee80211req VAR_6;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 FUNC_3(VAR_6.i_name, VAR_4, sizeof(VAR_6.i_name));
 VAR_6.i_type = VAR_1;
 VAR_6.i_data = VAR_5;
 VAR_6.i_len = VAR_0;
 if (FUNC_1(VAR_3, VAR_2, &VAR_6) < 0)
  FUNC_0(-1, "%s: cannot fetch bssid", VAR_4);
}
