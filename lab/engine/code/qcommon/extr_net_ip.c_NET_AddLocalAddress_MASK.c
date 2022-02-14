
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {scalar_t__ sa_family; } ;
typedef scalar_t__ sa_family_t ;
struct TYPE_2__ {int netmask; int addr; scalar_t__ family; int ifname; int type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (int *,struct sockaddr*,int) ;
 size_t VAR_6 ;

__attribute__((used)) static void FUNC_2(char *VAR_7, struct sockaddr *VAR_8, struct sockaddr *VAR_9)
{
 int VAR_10;
 sa_family_t VAR_11;


 if(!VAR_8 || !VAR_9 || !VAR_7)
  return;

 VAR_11 = VAR_8->sa_family;

 if(VAR_6 < VAR_2)
 {
  if(VAR_11 == VAR_0)
  {
   VAR_10 = sizeof(struct sockaddr_in);
   VAR_5[VAR_6].type = VAR_3;
  }
  else if(VAR_11 == VAR_1)
  {
   VAR_10 = sizeof(struct sockaddr_in6);
   VAR_5[VAR_6].type = VAR_4;
  }
  else
   return;

  FUNC_0(VAR_5[VAR_6].ifname, VAR_7, sizeof(VAR_5[VAR_6].ifname));

  VAR_5[VAR_6].family = VAR_11;

  FUNC_1(&VAR_5[VAR_6].addr, VAR_8, VAR_10);
  FUNC_1(&VAR_5[VAR_6].netmask, VAR_9, VAR_10);

  VAR_6++;
 }
}
