
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct rt_msghdr {int rtm_index; int rtm_flags; int rtm_msglen; } ;
struct cmdargs {int prompt; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,int ) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,struct sockaddr*,struct sockaddr*,int) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (struct rt_msghdr*,struct sockaddr**) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int*,int,char*,size_t*,int *,int ) ;

int
FUNC_10(struct cmdargs const *VAR_9)
{
  struct rt_msghdr *VAR_10;
  struct sockaddr *VAR_11[VAR_6];
  char *VAR_12, *VAR_13, *VAR_14;
  size_t VAR_15;
  int VAR_16[6];

  VAR_16[0] = VAR_0;
  VAR_16[1] = VAR_3;
  VAR_16[2] = 0;
  VAR_16[3] = 0;
  VAR_16[4] = VAR_2;
  VAR_16[5] = 0;
  if (FUNC_9(VAR_16, 6, ((void*)0), &VAR_15, ((void*)0), 0) < 0) {
    FUNC_2(VAR_1, "route_Show: sysctl: estimate: %s\n", FUNC_8(VAR_8));
    return (1);
  }
  VAR_12 = FUNC_3(VAR_15);
  if (VAR_12 == ((void*)0))
    return (1);
  if (FUNC_9(VAR_16, 6, VAR_12, &VAR_15, ((void*)0), 0) < 0) {
    FUNC_2(VAR_1, "route_Show: sysctl: getroute: %s\n", FUNC_8(VAR_8));
    FUNC_1(VAR_12);
    return (1);
  }
  VAR_13 = VAR_12 + VAR_15;

  FUNC_6(VAR_9->prompt, "%-20s%-20sFlags  Netif\n",
                "Destination", "Gateway");
  for (VAR_14 = VAR_12; VAR_14 < VAR_13; VAR_14 += VAR_10->rtm_msglen) {
    VAR_10 = (struct rt_msghdr *)VAR_14;

    FUNC_7(VAR_10, VAR_11);

    if (VAR_11[VAR_4] && VAR_11[VAR_5]) {
      FUNC_5(VAR_9->prompt, VAR_11[VAR_4], VAR_11[VAR_7], 20);
      FUNC_5(VAR_9->prompt, VAR_11[VAR_5], ((void*)0), 20);

      FUNC_4(VAR_9->prompt, VAR_10->rtm_flags, 6);
      FUNC_6(VAR_9->prompt, " %s\n", FUNC_0(VAR_10->rtm_index));
    } else
      FUNC_6(VAR_9->prompt, "<can't parse routing entry>\n");
  }
  FUNC_1(VAR_12);
  return 0;
}
