
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_iface {int wname; int stats; } ;
struct ifreq {scalar_t__ ifr_data; int ifr_name; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,struct ifreq*) ;
 int FUNC_1 (struct ifreq*,int ,int) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,char*,int ,int ) ;

int
FUNC_5(struct wlan_iface *VAR_5)
{
 struct ifreq VAR_6;

 FUNC_1(&VAR_6, 0, sizeof(struct ifreq));
 FUNC_3(VAR_6.ifr_name, VAR_5->wname, VAR_0);

 VAR_6.ifr_data = (caddr_t) &VAR_5->stats;

 if (FUNC_0(VAR_4, VAR_2, &VAR_6) < 0) {
  FUNC_4(VAR_1, "iface %s - ioctl(SIOCG80211STATS) failed: %s",
      VAR_5->wname, FUNC_2(VAR_3));
  return (-1);
 }

 return (0);
}
