
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sfe_ipv6_addr {int* addr; } ;
struct net_device {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct net_device *VAR_2, u8 VAR_3,
             struct sfe_ipv6_addr *VAR_4, __be16 VAR_5,
             struct sfe_ipv6_addr *VAR_6, __be16 VAR_7)
{
 u32 VAR_8, VAR_9 = 0;
 size_t VAR_10 = (size_t)VAR_2;

 for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
  VAR_9 ^= VAR_4->addr[VAR_8] ^ VAR_6->addr[VAR_8];
 }
 VAR_9 = ((u32)VAR_10) ^ VAR_9 ^ VAR_3 ^ FUNC_0(VAR_5 ^ VAR_7);
 return ((VAR_9 >> VAR_1) ^ VAR_9) & VAR_0;
}
