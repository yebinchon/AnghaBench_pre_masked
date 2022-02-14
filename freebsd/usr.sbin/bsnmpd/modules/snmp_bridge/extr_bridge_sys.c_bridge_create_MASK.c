
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {char* ifr_data; int ifr_name; } ;
typedef int ifr ;
typedef struct ifreq* caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ifreq*,int) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int ,struct ifreq*) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (char const*,int ) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char const*,int) ;
 int FUNC_7 (int ,char*,...) ;

int
FUNC_8(const char *VAR_5)
{
 char *VAR_6;
 struct ifreq VAR_7;

 FUNC_0(&VAR_7, sizeof(VAR_7));
 FUNC_6(VAR_7.ifr_name, VAR_5, sizeof(VAR_7.ifr_name));

 if (FUNC_2(VAR_4, VAR_1, &VAR_7) < 0) {
  FUNC_7(VAR_0, "create bridge: ioctl(SIOCIFCREATE) "
      "failed: %s", FUNC_5(VAR_3));
  return (-1);
 }

 if (FUNC_3(VAR_5, VAR_7.ifr_name) == 0)
  return (0);

 if ((VAR_6 = FUNC_4(VAR_5)) == ((void*)0)) {
  FUNC_7(VAR_0, "create bridge: strdup() failed");
  return (-1);
 }

 VAR_7.ifr_data = VAR_6;
 if (FUNC_2(VAR_4, VAR_2, (caddr_t) &VAR_7) < 0) {
  FUNC_7(VAR_0, "create bridge: ioctl(SIOCSIFNAME) "
      "failed: %s", FUNC_5(VAR_3));
  FUNC_1(VAR_6);
  return (-1);
 }

 return (0);
}
