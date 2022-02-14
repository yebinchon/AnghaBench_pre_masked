
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
struct ip6_hdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ip6_hdr*,int ,int ,int ) ;

int
FUNC_1(struct ip6_hdr *VAR_1, uint32_t VAR_2, uint8_t VAR_3, uint16_t VAR_4)
{
 int VAR_5;
 union {
  u_int16_t s[2];
  u_int32_t l;
 } VAR_6;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_0;
 return (VAR_5);
}
