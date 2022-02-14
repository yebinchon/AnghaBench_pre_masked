
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {char* ifr_data; int ifr_name; } ;
struct iface {char* name; } ;
typedef int caddr_t ;


 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,char const*,...) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int) ;

int
FUNC_7(struct iface *VAR_6, const char *VAR_7)
{
  struct ifreq VAR_8;
  int VAR_9;
  char *VAR_10;

  if ((VAR_10 = FUNC_4(VAR_7)) == ((void*)0)) {
    FUNC_3(VAR_1, "iface name: strdup failed: %s\n", FUNC_5(VAR_5));
    return 0;
  }

  if ((VAR_9 = FUNC_1(VAR_2, VAR_4, 0)) == -1) {
    FUNC_3(VAR_0, "iface name: socket(): %s\n", FUNC_5(VAR_5));
    FUNC_2(VAR_10);
    return 0;
  }

  FUNC_6(VAR_8.ifr_name, VAR_6->name, sizeof(VAR_8.ifr_name));
  VAR_8.ifr_data = VAR_10;
  if (FUNC_0(VAR_9, VAR_3, (caddr_t)&VAR_8) < 0) {
    FUNC_3(VAR_1, "iface name: ioctl(SIOCSIFNAME, %s -> %s): %s\n",
               VAR_7, VAR_10, FUNC_5(VAR_5));
    FUNC_2(VAR_10);
    return 0;
  }

  FUNC_2(VAR_6->name);
  VAR_6->name = VAR_10;

  return 1;
}
