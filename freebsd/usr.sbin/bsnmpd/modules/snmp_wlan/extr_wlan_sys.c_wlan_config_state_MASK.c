
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct wlan_iface {scalar_t__ state; int wname; } ;
struct ifreq {int ifr_flags; int ifr_flagshigh; int ifr_name; } ;
typedef int ifr ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct ifreq*,int ,int) ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ,char*,...) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

int
FUNC_5(struct wlan_iface *VAR_8, uint8_t VAR_9)
{
 int VAR_10;
 struct ifreq VAR_11;

 FUNC_1(&VAR_11, 0, sizeof(VAR_11));
 FUNC_2(VAR_11.ifr_name, VAR_8->wname);

 if (FUNC_0(VAR_5, VAR_2, (caddr_t) &VAR_11) < 0) {
  FUNC_4(VAR_1, "set %s status: ioctl(SIOCGIFFLAGS) "
      "failed: %s", VAR_8->wname, FUNC_3(VAR_4));
  return (-1);
 }

 if (VAR_9 == 0) {
  if ((VAR_11.ifr_flags & VAR_0) != 0)
   VAR_8->state = VAR_7;
  else
   VAR_8->state = VAR_6;
  return (0);
 }

 VAR_10 = (VAR_11.ifr_flags & 0xffff) | (VAR_11.ifr_flagshigh << 16);

 if (VAR_8->state == VAR_7)
  VAR_10 |= VAR_0;
 else
  VAR_10 &= ~VAR_0;

 VAR_11.ifr_flags = VAR_10 & 0xffff;
 VAR_11.ifr_flagshigh = VAR_10 >> 16;
 if (FUNC_0(VAR_5, VAR_3, (caddr_t) &VAR_11) < 0) {
  FUNC_4(VAR_1, "set %s %s: ioctl(SIOCSIFFLAGS) failed: %s",
      VAR_8->wname, VAR_8->state == VAR_7?"up":"down",
      FUNC_3(VAR_4));
  return (-1);
 }

 return (0);
}
