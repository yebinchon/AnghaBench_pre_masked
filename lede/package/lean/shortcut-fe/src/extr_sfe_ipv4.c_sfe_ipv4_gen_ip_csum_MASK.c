
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sfe_ipv4_ip_hdr {scalar_t__ check; } ;



__attribute__((used)) static inline u16 FUNC_0(struct sfe_ipv4_ip_hdr *VAR_0)
{
 u32 VAR_1;
 u16 *VAR_2 = (u16 *)VAR_0;

 VAR_0->check = 0;




 VAR_1 = VAR_2[0] + VAR_2[1] + VAR_2[2] + VAR_2[3] + VAR_2[4] + VAR_2[5] + VAR_2[6] + VAR_2[7] + VAR_2[8] + VAR_2[9];




 VAR_1 = (VAR_1 & 0xffff) + (VAR_1 >> 16);
 VAR_1 = (VAR_1 & 0xffff) + (VAR_1 >> 16);

 return (u16)VAR_1 ^ 0xffff;
}
