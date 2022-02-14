
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct wlan_iface {int desired_bssid; int wname; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,size_t) ;
 scalar_t__ FUNC_1 (int ,int ,int*,int *,size_t*,int) ;

__attribute__((used)) static int
FUNC_2(struct wlan_iface *VAR_2, uint8_t *VAR_3)
{
 int VAR_4 = 0;
 size_t VAR_5 = VAR_0;

 if (FUNC_1(VAR_2->wname, VAR_1, &VAR_4, VAR_3,
     &VAR_5, 1) < 0 || VAR_5 != VAR_0)
  return (-1);

 FUNC_0(VAR_2->desired_bssid, VAR_3, VAR_0);

 return (0);
}
