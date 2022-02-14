
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct ip6_hdr {int dummy; } ;
struct ip {int dummy; } ;




 int FUNC_0 (struct ip*,int,int) ;
 int FUNC_1 (struct ip6_hdr*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int const*,int,int) ;

__attribute__((used)) static uint32_t
FUNC_4(const uint8_t *VAR_0, uint8_t VAR_1, uint8_t VAR_2)
{
 uint32_t VAR_3 = 0;
 int VAR_4 = 4 + 2 * (!!(*VAR_0 & 1) +
      !!(*VAR_0 & 2) +
      !!(*VAR_0 & 4) +
      !!(*VAR_0 & 8));
 uint16_t VAR_5 = FUNC_2(*(uint16_t *)(void *)(VAR_0 + 2));

 switch (VAR_5) {
 case 129:
  VAR_3 = FUNC_0((struct ip *)(VAR_0 + VAR_4),
          VAR_1, VAR_2);
  break;
 case 128:
  VAR_3 = FUNC_1((struct ip6_hdr *)(VAR_0 + VAR_4),
     VAR_1, VAR_2);
  break;
 case 0x6558:
  VAR_3 = FUNC_3(VAR_0 + VAR_4, VAR_1, VAR_2);
  break;
 default:

  break;
 }
 return VAR_3;
}
