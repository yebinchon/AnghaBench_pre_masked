
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int i_val; int ifr_flags; int ifr_flagshigh; int ifr_name; int i_type; int i_name; } ;
struct ifmediareq {int dummy; } ;
struct ieee80211req {int i_val; int ifr_flags; int ifr_flagshigh; int ifr_name; int i_type; int i_name; } ;
typedef int ireq ;
typedef int ifr ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,int ,struct ifreq*) ;
 int FUNC_3 (struct ifreq*,int ,int) ;
 int FUNC_4 (int ,int,char*,char*) ;
 int FUNC_5 (int ,int ,int ) ;

void FUNC_6(char *VAR_8, int VAR_9) {
 int VAR_10;
 struct ifreq VAR_11;
 unsigned int VAR_12;
 struct ifmediareq VAR_13;
 int *VAR_14;
 struct ieee80211req VAR_15;

 if ((VAR_10 = FUNC_5(VAR_3, VAR_7, 0)) == -1)
  FUNC_1(1, "socket()");


 FUNC_3(&VAR_15, 0, sizeof(VAR_15));
 FUNC_4(VAR_15.i_name, sizeof(VAR_15.i_name), "%s", VAR_8);
 VAR_15.i_type = VAR_0;
 VAR_15.i_val = VAR_9;
 if (FUNC_2(VAR_10, VAR_5, &VAR_15) == -1)
  FUNC_1(1, "ioctl(SIOCS80211)");


 FUNC_3(&VAR_11, 0, sizeof(VAR_11));
 FUNC_4(VAR_11.ifr_name, sizeof(VAR_11.ifr_name), "%s", VAR_8);
 if (FUNC_2(VAR_10, VAR_4, &VAR_11) == -1)
  FUNC_1(1, "ioctl(SIOCGIFFLAGS)");
 VAR_12 = (VAR_11.ifr_flags & 0xffff) | (VAR_11.ifr_flagshigh << 16);
 VAR_12 |= VAR_2 | VAR_1;
 VAR_11.ifr_flags = VAR_12 & 0xffff;
 VAR_11.ifr_flagshigh = VAR_12 >> 16;
 if (FUNC_2(VAR_10, VAR_6, &VAR_11) == -1)
  FUNC_1(1, "ioctl(SIOCSIFFLAGS)");

 FUNC_0(VAR_10);
}
