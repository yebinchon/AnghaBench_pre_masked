
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_1__ sin_addr; int sin_family; } ;
struct hostent {scalar_t__ h_addr; } ;
typedef int reply ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (struct sockaddr_in*,int) ;
 struct hostent* FUNC_2 (char*) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int ) ;

__attribute__((used)) static struct sockaddr_in *
FUNC_6(char *VAR_3)
{
 struct hostent *VAR_4;
 static struct sockaddr_in VAR_5;

 FUNC_1(&VAR_5, sizeof(VAR_5));
 VAR_5.sin_len = sizeof(VAR_5);
 VAR_5.sin_family = VAR_0;
 VAR_5.sin_addr.s_addr = FUNC_4(VAR_3);
 if (VAR_5.sin_addr.s_addr == VAR_1) {
  if (!(VAR_4 = FUNC_2(VAR_3))) {
   FUNC_5("%s: %s", VAR_3, FUNC_3(VAR_2));
   return (((void*)0));
  }
  FUNC_0((char *)VAR_4->h_addr, (char *)&VAR_5.sin_addr,
   sizeof VAR_5.sin_addr);
 }
 return (&VAR_5);
}
