
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct sfe_ipv6_ip_hdr {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct sfe_ipv6_ip_hdr *VAR_1, u8 VAR_2)
{
 __be16 *VAR_3 = (__be16 *)VAR_1;

 *VAR_3 = ((*VAR_3 & FUNC_0(VAR_0)) | FUNC_0((u16)VAR_2 << 4));
}
