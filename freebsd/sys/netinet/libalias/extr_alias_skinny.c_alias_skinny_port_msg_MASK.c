
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct tcphdr {int th_x2; scalar_t__ th_sum; } ;
struct ip {int dummy; } ;
struct alias_link {int dummy; } ;
struct IpPortMessage {scalar_t__ stationIpPort; } ;
typedef int ConvDirection ;


 int FUNC_0 (struct alias_link*) ;
 scalar_t__ FUNC_1 (struct ip*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct IpPortMessage *VAR_0, struct ip *VAR_1,
    struct tcphdr *VAR_2, struct alias_link *VAR_3,
    ConvDirection VAR_4)
{
 (void)VAR_4;

 VAR_0->stationIpPort = (u_int32_t) FUNC_2(FUNC_0(VAR_3));

 VAR_2->th_sum = 0;



 VAR_2->th_sum = FUNC_1(VAR_1);

 return (0);
}
