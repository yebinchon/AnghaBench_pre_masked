
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_name; } ;
struct iface {int name; } ;
typedef int caddr_t ;


 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct iface*) ;
 int FUNC_3 (int ,char*,int ,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;

void
FUNC_6(struct iface *VAR_6)
{
  struct ifreq VAR_7;
  int VAR_8;

  if (VAR_6 != ((void*)0)) {
    if ((VAR_8 = FUNC_1(VAR_2, VAR_4, 0)) == -1) {
      FUNC_3(VAR_0, "iface_Destroy: socket(): %s\n", FUNC_4(VAR_5));
    } else {
      FUNC_5(VAR_7.ifr_name, VAR_6->name, sizeof(VAR_7.ifr_name));
      if (FUNC_0(VAR_8, VAR_3, (caddr_t)&VAR_7) < 0)
        FUNC_3(VAR_1, "iface_Destroy: ioctl(SIOCIFDESTROY, %s): %s\n",
               VAR_6->name, FUNC_4(VAR_5));
    }
    FUNC_2(VAR_6);
  }
}
