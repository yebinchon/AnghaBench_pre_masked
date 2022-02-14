
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; } ;
struct ip6_rthdr0 {int ip6r0_segleft; } ;
struct addrinfo {scalar_t__ ai_addr; int ai_flags; int ai_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int,int ,char*) ;
 int FUNC_2 (struct addrinfo*) ;
 scalar_t__ FUNC_3 (char*,int *,struct addrinfo const*,struct addrinfo**) ;
 int FUNC_4 (void*,int *) ;
 int * FUNC_5 (char*,int,int ,int) ;
 int FUNC_6 (void*,int ,int) ;
 int FUNC_7 (char*,int) ;

void
FUNC_8()
{
 int VAR_3, VAR_4;
 char VAR_5[10240];
 struct addrinfo *VAR_6;
 struct addrinfo VAR_7;

 FUNC_7("test_rth_add", sizeof("test_rth_add\0"));

 if (((void*)0) == FUNC_5(VAR_5, 10240, VAR_2, 127))
  FUNC_0();
 FUNC_6((void *)&VAR_7, 0, sizeof(struct addrinfo));
 VAR_7.ai_family = VAR_0;
 VAR_7.ai_flags = VAR_1;
 if (0 != FUNC_3("::1", ((void*)0), (const struct addrinfo *)&VAR_7, &VAR_6))
  FUNC_0();
 for (VAR_3 = 0; VAR_3 < 127; VAR_3++)
  FUNC_4((void *)VAR_5,
      &((struct sockaddr_in6 *)(VAR_6->ai_addr))->sin6_addr);
 FUNC_1(127, ((struct ip6_rthdr0 *)VAR_5)->ip6r0_segleft, 0,
     "add 127 segments\0");

 VAR_4 = FUNC_4((void *)VAR_5,
     &((struct sockaddr_in6 *)(VAR_6->ai_addr))->sin6_addr);
 FUNC_1(-1, VAR_4, 0, "add 128th segment to 127 segment header\0");

 FUNC_2(VAR_6);
}
