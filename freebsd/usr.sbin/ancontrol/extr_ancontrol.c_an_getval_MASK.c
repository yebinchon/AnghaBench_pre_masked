
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {scalar_t__ ifr_data; int ifr_name; } ;
struct an_req {int dummy; } ;
typedef int ifr ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ifreq*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,int ,struct ifreq*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,char const*,int) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_3, struct an_req *VAR_4)
{
 struct ifreq VAR_5;
 int VAR_6, VAR_7 = 1;

 FUNC_0(&VAR_5, sizeof(VAR_5));

 FUNC_5(VAR_5.ifr_name, VAR_3, sizeof(VAR_5.ifr_name));
 VAR_5.ifr_data = (caddr_t)VAR_4;

 VAR_6 = FUNC_4(VAR_0, VAR_2, 0);

 if (VAR_6 == -1)
  FUNC_2(1, "socket");

 if (FUNC_3(VAR_6, VAR_1, &VAR_5) == -1) {
  VAR_7 = 0;
  FUNC_2(1, "SIOCGAIRONET");
 }

 FUNC_1(VAR_6);

 return (VAR_7);
}
