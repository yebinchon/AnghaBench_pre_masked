
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr_dl {scalar_t__ sdl_family; int sdl_type; } ;
struct rt_msghdr {int rtm_flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sockaddr_in*) ;
 int VAR_6 ;
 struct sockaddr_in* FUNC_1 (char*) ;
 char* FUNC_2 (TYPE_1__) ;
 int FUNC_3 (char*,char*,char*) ;
 struct rt_msghdr* FUNC_4 (int ,struct sockaddr_in*,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static int
FUNC_8(char *VAR_7)
{
 struct sockaddr_in *VAR_8, *VAR_9;
 struct rt_msghdr *VAR_10;
 struct sockaddr_dl *VAR_11;

 VAR_9 = FUNC_1(VAR_7);
 if (VAR_9 == ((void*)0))
  return (1);




 VAR_6 &= ~VAR_1;

 for (;;) {
  VAR_10 = FUNC_4(VAR_5, VAR_9, ((void*)0));
  if (VAR_10 == ((void*)0)) {
   FUNC_6("%s", VAR_7);
   return (1);
  }
  VAR_8 = (struct sockaddr_in *)(VAR_10 + 1);
  VAR_11 = (struct sockaddr_dl *)(FUNC_0(VAR_8) + (char *)VAR_8);
  if (VAR_11->sdl_family == VAR_0 &&
      !(VAR_10->rtm_flags & VAR_2) &&
      FUNC_5(VAR_11->sdl_type) ) {
   VAR_8->sin_addr.s_addr = VAR_9->sin_addr.s_addr;
   break;
  }





  if (VAR_6 & VAR_1) {
   FUNC_7("delete: cannot locate %s", VAR_7);
   return (1);
  }

  VAR_6 |= VAR_1;
 }
 VAR_10->rtm_flags |= VAR_3;
 if (FUNC_4(VAR_4, VAR_9, ((void*)0)) != ((void*)0)) {
  FUNC_3("%s (%s) deleted\n", VAR_7, FUNC_2(VAR_8->sin_addr));
  return (0);
 }
 return (1);
}
