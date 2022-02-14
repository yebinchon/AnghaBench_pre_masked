
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
 scalar_t__ FUNC_2 (int,int ,struct ifreq*) ;
 int FUNC_3 (int ,int,char*,char*,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void
FUNC_6(void)
{
 struct ifreq VAR_5;
 int VAR_6;

 VAR_6 = FUNC_4(VAR_2, VAR_4, 0);
 if (VAR_6 < 0) {
  FUNC_5("disc_done: socket(PF_INET, SOCK_RAW, 0)");
  return;
 }

 FUNC_0(&VAR_5, sizeof(VAR_5));
 FUNC_3(VAR_5.ifr_name, sizeof(VAR_5.ifr_name), "%s%d", VAR_0,
     VAR_1);

 if (FUNC_2(VAR_6, VAR_3, &VAR_5) < 0)
  FUNC_5("disc_done: ioctl(%s, SIOCIFDESTROY)", VAR_5.ifr_name);
 FUNC_1(VAR_6);
}
