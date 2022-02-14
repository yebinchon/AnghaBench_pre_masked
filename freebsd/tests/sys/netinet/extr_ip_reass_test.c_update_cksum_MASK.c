
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct ip {int ip_sum; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct ip *VAR_0)
{
 size_t VAR_1;
 uint32_t VAR_2;
 uint16_t *VAR_3;

 VAR_0->ip_sum = 0;
 VAR_3 = (uint16_t *)VAR_0;
 for (VAR_2 = 0, VAR_1 = 0; VAR_1 < sizeof(*VAR_0) / sizeof(*VAR_3); VAR_3++, VAR_1++)
  VAR_2 += FUNC_1(*VAR_3);
 VAR_2 = (VAR_2 >> 16) + (VAR_2 & 0xffff);
 VAR_2 = ~(VAR_2 + (VAR_2 >> 16));
 VAR_0->ip_sum = FUNC_0((uint16_t)VAR_2);
}
