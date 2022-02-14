
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct vlanhdr {int proto; } ;
struct ip6_hdr {int dummy; } ;
struct ip {int dummy; } ;
struct ether_header {int dummy; } ;





 int FUNC_0 (struct ip*,int ,int ) ;
 int FUNC_1 (struct ip6_hdr*,int ,int ) ;
 int FUNC_2 (struct ether_header*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline uint32_t
FUNC_4(struct ether_header *VAR_0, uint8_t VAR_1, uint8_t VAR_2)
{
 uint32_t VAR_3 = 0;
 struct vlanhdr *VAR_4 = (struct vlanhdr *)(VAR_0 + 1);

 switch (FUNC_3(VAR_4->proto)) {
 case 129:
  VAR_3 = FUNC_0((struct ip *)(VAR_4 + 1),
          VAR_1, VAR_2);
  break;
 case 128:
  VAR_3 = FUNC_1((struct ip6_hdr *)(VAR_4 + 1),
     VAR_1, VAR_2);
  break;
 case 130:
 default:

  VAR_3 = FUNC_2(VAR_0, VAR_2);
  break;
 }
 return VAR_3;
}
