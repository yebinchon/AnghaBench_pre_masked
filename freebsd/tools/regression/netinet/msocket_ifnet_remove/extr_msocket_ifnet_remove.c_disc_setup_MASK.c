
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_name; } ;
typedef int ifr ;


 char* VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ifreq*,int) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int,int ,struct ifreq*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int ,int,char*,char*,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static int
FUNC_7(void)
{
 struct ifreq VAR_6;
 int VAR_7;

 if (FUNC_3("if_disc") < 0) {
  switch (VAR_5) {
  case 128:
   break;
  default:
   FUNC_6("disc_setup: kldload(if_disc)");
   return (-1);
  }
 }

 VAR_7 = FUNC_5(VAR_2, VAR_4, 0);
 if (VAR_7 < 0) {
  FUNC_6("disc_setup: socket(PF_INET, SOCK_RAW, 0)");
  return (-1);
 }

 FUNC_0(&VAR_6, sizeof(VAR_6));
 FUNC_4(VAR_6.ifr_name, sizeof(VAR_6.ifr_name), "%s%d", VAR_0,
     VAR_1);

 if (FUNC_2(VAR_7, VAR_3, &VAR_6) < 0) {
  FUNC_6("disc_setup: ioctl(%s, SIOCIFCREATE)", VAR_6.ifr_name);
  FUNC_1(VAR_7);
  return (-1);
 }

 FUNC_1(VAR_7);
 return (0);
}
