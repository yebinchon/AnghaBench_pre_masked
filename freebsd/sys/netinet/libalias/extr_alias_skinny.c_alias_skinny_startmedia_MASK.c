
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct tcphdr {int dummy; } ;
struct ip {int dummy; } ;
struct in_addr {int s_addr; } ;
struct alias_link {int dummy; } ;
struct StartMediaTransmission {int remoteIpAddr; } ;
typedef int ConvDirection ;



__attribute__((used)) static int
FUNC_0(struct StartMediaTransmission *VAR_0,
    struct ip *VAR_1, struct tcphdr *VAR_2,
    struct alias_link *VAR_3, u_int32_t VAR_4,
    ConvDirection VAR_5)
{
 struct in_addr VAR_6, VAR_7;

 (void)VAR_1;
 (void)VAR_2;
 (void)VAR_3;
 (void)VAR_5;

 VAR_6.s_addr = VAR_0->remoteIpAddr;
 VAR_7.s_addr = VAR_4;






 return (0);
}
