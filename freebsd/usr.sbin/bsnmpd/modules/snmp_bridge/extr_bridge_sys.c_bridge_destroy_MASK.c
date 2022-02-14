
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_name; } ;
typedef int ifr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifreq*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,struct ifreq*) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char const*,int) ;
 int FUNC_4 (int ,char*,int ) ;

int
FUNC_5(const char *VAR_4)
{
 struct ifreq VAR_5;

 FUNC_0(&VAR_5, sizeof(VAR_5));
 FUNC_3(VAR_5.ifr_name, VAR_4, sizeof(VAR_5.ifr_name));

 if (FUNC_1(VAR_3, VAR_1, &VAR_5) < 0) {
  FUNC_4(VAR_0, "destroy bridge: ioctl(SIOCIFDESTROY) "
      "failed: %s", FUNC_2(VAR_2));
  return (-1);
 }

 return (0);
}
