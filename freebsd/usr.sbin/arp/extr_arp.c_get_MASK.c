
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;


 int VAR_0 ;
 struct sockaddr_in* FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(char *VAR_3)
{
 struct sockaddr_in *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 == ((void*)0))
  return (1);

 FUNC_9(VAR_0);
 FUNC_7("arp");
 FUNC_8("arp-cache");

 VAR_5 = FUNC_2(VAR_4->sin_addr.s_addr, VAR_1);

 if (VAR_5 == 0) {
  FUNC_5("{d:hostname/%s} ({d:ip-address/%s}) -- no entry",
      VAR_3, FUNC_1(VAR_4->sin_addr));
  if (VAR_2)
   FUNC_5(" on {d:interface/%s}", VAR_2);
  FUNC_5("\n");
 }

 FUNC_4("arp-cache");
 FUNC_3("arp");
 FUNC_6();

 return (VAR_5 == 0);
}
