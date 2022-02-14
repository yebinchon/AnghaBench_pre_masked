
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sfe_ipv6_addr {int* addr; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline unsigned int FUNC_1(u8 VAR_2, struct sfe_ipv6_addr *VAR_3, __be16 VAR_4,
       struct sfe_ipv6_addr *VAR_5, __be16 VAR_6)
{
 u32 VAR_7, VAR_8 = 0;

 for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
  VAR_8 ^= VAR_3->addr[VAR_7] ^ VAR_5->addr[VAR_7];
 }
 VAR_8 = VAR_8 ^ VAR_2 ^ FUNC_0(VAR_4 ^ VAR_6);
 return ((VAR_8 >> VAR_1) ^ VAR_8) & VAR_0;
}
