
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_1__ sin_addr; void* sin_family; } ;
struct ifaliasreq {int ifra_mask; int ifra_addr; int ifra_name; } ;
typedef int ifra ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ifaliasreq*,int) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int,int ,struct ifaliasreq*) ;
 int FUNC_4 (int ,int,char*,char*,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static int
FUNC_7(char *VAR_4, int VAR_5, char *VAR_6, char *VAR_7)
{
 struct sockaddr_in *VAR_8;
 struct ifaliasreq VAR_9;
 int VAR_10;

 VAR_10 = FUNC_5(VAR_1, VAR_3, 0);
 if (VAR_10 < 0) {
  FUNC_6("ifconfig_inet: socket(PF_INET, SOCK_RAW, 0)");
  return (-1);
 }

 FUNC_0(&VAR_9, sizeof(VAR_9));
 FUNC_4(VAR_9.ifra_name, sizeof(VAR_9.ifra_name), "%s%d", VAR_4,
     VAR_5);

 VAR_8 = (struct sockaddr_in *)&VAR_9.ifra_addr;
 VAR_8->sin_family = VAR_0;
 VAR_8->sin_len = sizeof(VAR_9.ifra_addr);
 VAR_8->sin_addr.s_addr = FUNC_2(VAR_6);

 VAR_8 = (struct sockaddr_in *)&VAR_9.ifra_mask;
 VAR_8->sin_family = VAR_0;
 VAR_8->sin_len = sizeof(VAR_9.ifra_addr);
 VAR_8->sin_addr.s_addr = FUNC_2(VAR_7);

 if (FUNC_3(VAR_10, VAR_2, &VAR_9) < 0) {
  FUNC_6("ifconfig_inet: ioctl(%s%d, SIOCAIFADDR, %s)", VAR_4,
      VAR_5, VAR_6);
  FUNC_1(VAR_10);
  return (-1);
 }

 FUNC_1(VAR_10);
 return (0);
}
