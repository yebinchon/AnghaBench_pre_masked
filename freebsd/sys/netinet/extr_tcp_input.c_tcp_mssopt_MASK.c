
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct tcpiphdr {int dummy; } ;
struct tcphdr {int dummy; } ;
struct ip6_hdr {int dummy; } ;
struct in_conninfo {int inc_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (scalar_t__,scalar_t__) ;
 size_t FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (struct in_conninfo*) ;
 scalar_t__ FUNC_4 (struct in_conninfo*,int *) ;
 scalar_t__ FUNC_5 (struct in_conninfo*,int *) ;

int
FUNC_6(struct in_conninfo *VAR_3)
{
 int VAR_4 = 0;
 uint32_t VAR_5 = 0;
 uint32_t VAR_6 = 0;
 size_t VAR_7;

 FUNC_0(VAR_3 != ((void*)0), ("tcp_mssopt with NULL in_conninfo pointer"));
 if (VAR_6 && VAR_5)
  VAR_4 = FUNC_2(VAR_6, VAR_5) - VAR_7;
 else if (VAR_6 || VAR_5)
  VAR_4 = FUNC_1(VAR_6, VAR_5) - VAR_7;

 return (VAR_4);
}
