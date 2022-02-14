
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_len; } ;
struct ifa_msghdr {int ifam_addrs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

void
FUNC_1(struct ifa_msghdr *VAR_1, struct sockaddr *VAR_2[VAR_0])
{
  char *VAR_3;
  int VAR_4;

  VAR_3 = (char *)(VAR_1 + 1);

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    if (VAR_1->ifam_addrs & (1 << VAR_4)) {
      VAR_2[VAR_4] = (struct sockaddr *)VAR_3;
      VAR_3 += FUNC_0(VAR_2[VAR_4]->sa_len);
    } else
      VAR_2[VAR_4] = ((void*)0);
}
