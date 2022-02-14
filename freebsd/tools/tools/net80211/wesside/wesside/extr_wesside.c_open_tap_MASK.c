
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_rdev; } ;
struct ifreq {int ifr_mtu; int ifr_flags; int ifr_flagshigh; int ifr_name; } ;
typedef int ifr ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,struct stat*) ;
 int FUNC_4 (int,int ,struct ifreq*) ;
 int FUNC_5 (struct ifreq*,int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 char* FUNC_11 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_12 (char*,int ) ;

void FUNC_13() {
 struct stat VAR_12;
 int VAR_13;
 struct ifreq VAR_14;
 unsigned int VAR_15;

 VAR_11 = FUNC_6(VAR_8, VAR_1);
 if (VAR_11 == -1) {
  FUNC_8("Can't open tap: %s\n", FUNC_11(VAR_9));
  FUNC_2(1);
 }
 if(FUNC_3(VAR_11, &VAR_12) == -1) {
  FUNC_7("fstat()");
  FUNC_2(1);
 }


 FUNC_10(VAR_10, FUNC_1(VAR_12.st_rdev, VAR_7));

 VAR_13 = FUNC_9(VAR_2, VAR_6, 0);
 if (VAR_13 == -1) {
  FUNC_7("socket()");
  FUNC_2(1);
 }


 FUNC_5(&VAR_14, 0, sizeof(VAR_14));
 FUNC_10(VAR_14.ifr_name, VAR_10);
 VAR_14.ifr_mtu = 1500;
 if (FUNC_4(VAR_13, VAR_5, &VAR_14) == -1) {
  FUNC_7("ioctl(SIOCSIFMTU)");
  FUNC_2(1);
 }


 FUNC_5(&VAR_14, 0, sizeof(VAR_14));
 FUNC_10(VAR_14.ifr_name, VAR_10);
 if (FUNC_4(VAR_13, VAR_3, &VAR_14) == -1) {
  FUNC_7("ioctl(SIOCGIFFLAGS)");
  FUNC_2(1);
 }

 VAR_15 = (VAR_14.ifr_flags & 0xffff) | (VAR_14.ifr_flagshigh << 16);
 VAR_15 |= VAR_0;

 FUNC_5(&VAR_14, 0, sizeof(VAR_14));
 FUNC_10(VAR_14.ifr_name, VAR_10);
 VAR_14.ifr_flags = VAR_15 & 0xffff;
 VAR_14.ifr_flagshigh = VAR_15 >> 16;
 if (FUNC_4(VAR_13, VAR_4, &VAR_14) == -1) {
  FUNC_7("ioctl(SIOCSIFFLAGS)");
  FUNC_2(1);
 }

 FUNC_0(VAR_13);
 FUNC_12("Opened tap device: %s\n", VAR_10);
}
