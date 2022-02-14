
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifreq {int ifr_flags; int ifr_flagshigh; int ifr_name; int i_type; int i_name; } ;
struct ifmediareq {int dummy; } ;
typedef int ifr ;
struct TYPE_2__ {int s; scalar_t__ chan; struct ifreq ireq; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ,struct ifreq*) ;
 int FUNC_3 (struct ifreq*,int ,int) ;
 int VAR_9 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,int ,int ) ;
 int VAR_10 ;
 int FUNC_9 (int ,char*) ;
 scalar_t__ FUNC_10 (char*) ;
 int FUNC_11 (char*,...) ;

void FUNC_12(char *VAR_11) {
 int VAR_12;
 struct ifreq VAR_13;
 unsigned int VAR_14;
 struct ifmediareq VAR_15;
 int *VAR_16;

 if(FUNC_10(VAR_11) >= VAR_3) {
  FUNC_11("Interface name too long...\n");
  FUNC_0(1);
 }

 FUNC_11("Setting up %s... ", VAR_11);
 FUNC_1(VAR_10);

 FUNC_7(VAR_9, VAR_11);

 VAR_12 = FUNC_8(VAR_4, VAR_7, 0);
 if (VAR_12 == -1) {
  FUNC_4("socket()");
  FUNC_0(1);
 }


 FUNC_3(&VAR_8.ireq, 0, sizeof(VAR_8.ireq));
 FUNC_9(VAR_8.ireq.i_name, VAR_11);
 VAR_8.ireq.i_type = VAR_0;

 VAR_8.chan = 0;
 VAR_8.s = VAR_12;
 FUNC_6(1);


 FUNC_3(&VAR_13, 0, sizeof(VAR_13));
 FUNC_9(VAR_13.ifr_name, VAR_11);
 if (FUNC_2(VAR_12, VAR_5, &VAR_13) == -1) {
  FUNC_4("ioctl(SIOCGIFFLAGS)");
  FUNC_0(1);
 }

 VAR_14 = (VAR_13.ifr_flags & 0xffff) | (VAR_13.ifr_flagshigh << 16);
 VAR_14 |= VAR_2 | VAR_1;

 FUNC_3(&VAR_13, 0, sizeof(VAR_13));
 FUNC_9(VAR_13.ifr_name, VAR_11);
 VAR_13.ifr_flags = VAR_14 & 0xffff;
 VAR_13.ifr_flagshigh = VAR_14 >> 16;
 if (FUNC_2(VAR_12, VAR_6, &VAR_13) == -1) {
  FUNC_4("ioctl(SIOCSIFFLAGS)");
  FUNC_0(1);
 }

 FUNC_5("done\n");
}
