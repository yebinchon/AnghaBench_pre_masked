
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_iface {int wname; } ;
struct ifreq {int ifr_name; } ;
typedef int ifr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,struct ifreq*) ;
 int FUNC_1 (struct ifreq*,int ,int) ;
 int VAR_6 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ) ;

int
FUNC_5(struct wlan_iface *VAR_7)
{
 struct ifreq VAR_8;

 if (VAR_7 == ((void*)0))
  return (VAR_3);

 FUNC_1(&VAR_8, 0, sizeof(VAR_8));
 FUNC_2(VAR_8.ifr_name, VAR_7->wname);

 if (FUNC_0(VAR_6, VAR_1, &VAR_8) < 0) {
  FUNC_4(VAR_0, "wlan clone destroy: ioctl(SIOCIFDESTROY) "
      "failed: %s", FUNC_3(VAR_5));
  return (VAR_2);
 }

 return (VAR_4);
}
