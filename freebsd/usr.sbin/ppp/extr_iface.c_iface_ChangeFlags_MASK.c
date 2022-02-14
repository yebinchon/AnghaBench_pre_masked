
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {char* ifr_name; int ifr_flags; int ifr_flagshigh; } ;


 scalar_t__ FUNC_0 (int,int ,struct ifreq*) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (struct ifreq*,char,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char const*,int) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_7, int VAR_8, int VAR_9)
{
  struct ifreq VAR_10;
  int VAR_11, VAR_12;

  VAR_11 = FUNC_1(VAR_2, VAR_5, 0);
  if (VAR_11 < 0) {
    FUNC_3(VAR_1, "iface_ChangeFlags: socket: %s\n", FUNC_5(VAR_6));
    return 0;
  }

  FUNC_4(&VAR_10, '\0', sizeof VAR_10);
  FUNC_6(VAR_10.ifr_name, VAR_7, sizeof VAR_10.ifr_name - 1);
  VAR_10.ifr_name[sizeof VAR_10.ifr_name - 1] = '\0';
  if (FUNC_0(VAR_11, VAR_3, &VAR_10) < 0) {
    FUNC_3(VAR_1, "iface_ChangeFlags: ioctl(SIOCGIFFLAGS): %s\n",
       FUNC_5(VAR_6));
    FUNC_2(VAR_11);
    return 0;
  }



  VAR_12 = VAR_10.ifr_flags & 0xffff;


  if (VAR_9 == VAR_0)
    VAR_12 |= VAR_8;
  else
    VAR_12 &= ~VAR_8;
  VAR_10.ifr_flags = VAR_12 & 0xffff;




  if (FUNC_0(VAR_11, VAR_4, &VAR_10) < 0) {
    FUNC_3(VAR_1, "iface_ChangeFlags: ioctl(SIOCSIFFLAGS): %s\n",
       FUNC_5(VAR_6));
    FUNC_2(VAR_11);
    return 0;
  }
  FUNC_2(VAR_11);

  return 1;
}
