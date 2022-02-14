
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
typedef void* u_int32_t ;
struct tcphdr {int th_x2; scalar_t__ th_sum; } ;
struct libalias {int dummy; } ;
struct ip {int ip_src; } ;
struct in_addr {int s_addr; } ;
struct alias_link {int dummy; } ;
struct OpenReceiveChannelAck {void* port; void* ipAddr; } ;
struct TYPE_2__ {scalar_t__ s_addr; } ;
typedef int ConvDirection ;


 struct alias_link* FUNC_0 (struct libalias*,int ,struct in_addr,int ,int ,int ,int) ;
 TYPE_1__ FUNC_1 (struct alias_link*) ;
 int FUNC_2 (struct alias_link*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct ip*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct libalias *VAR_2, struct OpenReceiveChannelAck *VAR_3,
    struct ip *VAR_4, struct tcphdr *VAR_5,
    struct alias_link *VAR_6, u_int32_t * VAR_7,
    ConvDirection VAR_8)
{
 struct in_addr VAR_9;
 struct alias_link *VAR_10;
 u_int32_t VAR_11;

 (void)VAR_6;
 (void)VAR_8;

 *VAR_7 = (u_int32_t) VAR_3->ipAddr;
 VAR_11 = VAR_3->port;

 VAR_9.s_addr = VAR_0;
 VAR_10 = FUNC_0(VAR_2, VAR_4->ip_src, VAR_9,
     FUNC_4((u_short) VAR_3->port), 0,
     VAR_1, 1);
 VAR_3->ipAddr = (u_int32_t) FUNC_1(VAR_10).s_addr;
 VAR_3->port = (u_int32_t) FUNC_5(FUNC_2(VAR_10));

 VAR_5->th_sum = 0;



 VAR_5->th_sum = FUNC_3(VAR_4);

 return (0);
}
