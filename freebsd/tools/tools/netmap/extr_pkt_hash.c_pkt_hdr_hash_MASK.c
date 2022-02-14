
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ip6_hdr {int dummy; } ;
struct ip {int dummy; } ;
struct ether_header {int ether_type; } ;






 int FUNC_0 (struct ip*,int ,int ) ;
 int FUNC_1 (struct ip6_hdr*,int ,int ) ;
 int FUNC_2 (struct ether_header*,int ) ;
 int FUNC_3 (struct ether_header*,int ,int ) ;
 int FUNC_4 (int ) ;

uint32_t
FUNC_5(const unsigned char *VAR_0, uint8_t VAR_1, uint8_t VAR_2)
{
 uint32_t VAR_3 = 0;
 struct ether_header *VAR_4 = (struct ether_header *)VAR_0;

 switch (FUNC_4(VAR_4->ether_type)) {
 case 130:
  VAR_3 = FUNC_0((struct ip *)(VAR_4 + 1),
          VAR_1, VAR_2);
  break;
 case 129:
  VAR_3 = FUNC_1((struct ip6_hdr *)(VAR_4 + 1),
     VAR_1, VAR_2);
  break;
 case 128:
  VAR_3 = FUNC_3(VAR_4, VAR_1, VAR_2);
  break;
 case 131:
 default:

  VAR_3 = FUNC_2(VAR_4, VAR_2);
  break;
 }

 return VAR_3;
}
