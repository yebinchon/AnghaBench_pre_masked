
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sa_len; int sa_data; int sa_family; } ;
struct ifreq {TYPE_1__ ifr_addr; int ifr_name; } ;
typedef int ifr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,struct ifreq*) ;
 int FUNC_3 (int ,unsigned char*,int) ;
 int FUNC_4 (struct ifreq*,int ,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,unsigned char*) ;

void FUNC_8(unsigned char* VAR_4, unsigned char *VAR_5) {
 int VAR_6;
 struct ifreq VAR_7;

 VAR_6 = FUNC_6(VAR_1, VAR_3, 0);
 if (VAR_6 == -1) {
  FUNC_5("socket()");
  FUNC_1(1);
 }

 FUNC_4(&VAR_7, 0, sizeof(VAR_7));
 FUNC_7(VAR_7.ifr_name, VAR_5);

 VAR_7.ifr_addr.sa_family = VAR_0;
 VAR_7.ifr_addr.sa_len = 6;
 FUNC_3(VAR_7.ifr_addr.sa_data, VAR_4, 6);

 if (FUNC_2(VAR_6, VAR_2, &VAR_7) == -1) {
  FUNC_5("ioctl(SIOCSIFLLADDR)");
  FUNC_1(1);
 }

 FUNC_0(VAR_6);
}
