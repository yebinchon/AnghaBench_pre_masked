
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icmp6_filter {int dummy; } ;
typedef int socklen_t ;
typedef int ic6f ;


 int VAR_0 ;
 int FUNC_0 (struct icmp6_filter*) ;
 int FUNC_1 (struct icmp6_filter*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int,char*) ;
 scalar_t__ FUNC_5 (int,int ,int ,struct icmp6_filter*,int*) ;
 struct icmp6_filter VAR_4 ;
 struct icmp6_filter VAR_5 ;
 scalar_t__ FUNC_6 (struct icmp6_filter*,struct icmp6_filter*,int) ;
 scalar_t__ FUNC_7 (int,int ,int ,struct icmp6_filter*,int) ;
 int FUNC_8 (int ,int ,int ) ;

int
FUNC_9(int VAR_6, char *VAR_7[])
{
 struct icmp6_filter VAR_8;
 socklen_t VAR_9;
 int VAR_10;

 FUNC_1(&VAR_5);
 FUNC_0(&VAR_4);

 VAR_10 = FUNC_8(VAR_2, VAR_3, 0);
 if (VAR_10 < 0)
  FUNC_3(-1, "socket(PF_INET6, SOCK_RAW, 0)");





 VAR_9 = sizeof(VAR_8);
 if (FUNC_5(VAR_10, VAR_1, VAR_0, &VAR_8, &VAR_9) < 0)
  FUNC_3(-1, "1: getsockopt(ICMP6_FILTER)");
 if (FUNC_6(&VAR_8, &VAR_5, sizeof(VAR_8)) != 0)
  FUNC_4(-1, "1: getsockopt(ICMP6_FILTER) - default not passall");




 VAR_9 = sizeof(VAR_8);
 FUNC_1(&VAR_8);
 if (FUNC_7(VAR_10, VAR_1, VAR_0, &VAR_8, VAR_9) < 0)
  FUNC_3(-1, "2: setsockopt(ICMP6_FILTER, PASSALL)");




 VAR_9 = sizeof(VAR_8);
 if (FUNC_5(VAR_10, VAR_1, VAR_0, &VAR_8, &VAR_9) < 0)
  FUNC_3(-1, "3: getsockopt(ICMP6_FILTER)");
 if (FUNC_6(&VAR_8, &VAR_5, sizeof(VAR_8)) != 0)
  FUNC_4(-1, "3: getsockopt(ICMP6_FILTER) - not passall");




 VAR_9 = sizeof(VAR_8);
 FUNC_0(&VAR_8);
 if (FUNC_7(VAR_10, VAR_1, VAR_0, &VAR_8, VAR_9) < 0)
  FUNC_3(-1, "4: setsockopt(ICMP6_FILTER, BLOCKALL)");




 VAR_9 = sizeof(VAR_8);
 if (FUNC_5(VAR_10, VAR_1, VAR_0, &VAR_8, &VAR_9) < 0)
  FUNC_3(-1, "5: getsockopt(ICMP6_FILTER)");
 if (FUNC_6(&VAR_8, &VAR_4, sizeof(VAR_8)) != 0)
  FUNC_4(-1, "5: getsockopt(ICMP6_FILTER) - not blockall");




 VAR_9 = sizeof(VAR_8);
 FUNC_1(&VAR_8);
 if (FUNC_7(VAR_10, VAR_1, VAR_0, &VAR_8, VAR_9) < 0)
  FUNC_3(-1, "6: setsockopt(ICMP6_FILTER, PASSALL)");




 VAR_9 = sizeof(VAR_8);
 if (FUNC_5(VAR_10, VAR_1, VAR_0, &VAR_8, &VAR_9) < 0)
  FUNC_3(-1, "7: getsockopt(ICMP6_FILTER)");
 if (FUNC_6(&VAR_8, &VAR_5, sizeof(VAR_8)) != 0)
  FUNC_4(-1, "7: getsockopt(ICMP6_FILTER) - not passall");

 FUNC_2(VAR_10);
 return (0);
}
