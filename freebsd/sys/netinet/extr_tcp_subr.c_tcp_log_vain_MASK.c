
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int dummy; } ;
struct in_conninfo {int dummy; } ;


 char* FUNC_0 (struct in_conninfo*,struct tcphdr*,void*,void const*) ;
 scalar_t__ VAR_0 ;

char *
FUNC_1(struct in_conninfo *VAR_1, struct tcphdr *VAR_2, void *VAR_3,
    const void *VAR_4)
{


 if (VAR_0 == 0)
  return (((void*)0));

 return (FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4));
}
