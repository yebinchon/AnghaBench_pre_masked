
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_flags; int ifr_flagshigh; int ifr_name; } ;
typedef int int8_t ;
typedef int ifr ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ifreq*,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char const*,int) ;
 int FUNC_4 (int ,char*,int ) ;

int
FUNC_5(const char* VAR_6, int8_t VAR_7)
{
 int VAR_8;
 struct ifreq VAR_9;

 FUNC_0(&VAR_9, sizeof(VAR_9));
 FUNC_3(VAR_9.ifr_name, VAR_6, sizeof(VAR_9.ifr_name));
 if (FUNC_1(VAR_5, VAR_2, (caddr_t) &VAR_9) < 0) {
  FUNC_4(VAR_1, "set bridge up: ioctl(SIOCGIFFLAGS) "
      "failed: %s", FUNC_2(VAR_4));
  return (-1);
 }

 VAR_8 = (VAR_9.ifr_flags & 0xffff) | (VAR_9.ifr_flagshigh << 16);
 if (VAR_7 == 1)
  VAR_8 |= VAR_0;
 else
  VAR_8 &= ~VAR_0;

 VAR_9.ifr_flags = VAR_8 & 0xffff;
 VAR_9.ifr_flagshigh = VAR_8 >> 16;
 if (FUNC_1(VAR_5, VAR_3, (caddr_t) &VAR_9) < 0) {
  FUNC_4(VAR_1, "set bridge up: ioctl(SIOCSIFFLAGS) "
      "failed: %s", FUNC_2(VAR_4));
  return (-1);
 }

 return (0);
}
