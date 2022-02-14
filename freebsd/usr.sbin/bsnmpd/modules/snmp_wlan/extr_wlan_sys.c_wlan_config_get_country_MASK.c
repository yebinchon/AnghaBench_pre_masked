
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_iface {int * country_code; int reg_domain; int wname; } ;
struct ieee80211_regdomain {int location; int * isocc; int regdomain; } ;
typedef int regdomain ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_regdomain*,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ,int*,struct ieee80211_regdomain*,size_t*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct wlan_iface *VAR_1)
{
 int VAR_2 = 0;
 size_t VAR_3;
 struct ieee80211_regdomain VAR_4;

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 VAR_3 = sizeof(VAR_4);

 if (FUNC_1(VAR_1->wname, VAR_0, &VAR_2, &VAR_4,
     &VAR_3, 0) < 0)
  return (-1);

 VAR_1->reg_domain = FUNC_2(VAR_4.regdomain);
 VAR_1->country_code[0] = VAR_4.isocc[0];
 VAR_1->country_code[1] = VAR_4.isocc[1];
 VAR_1->country_code[2] = VAR_4.location;

 return (0);
}
