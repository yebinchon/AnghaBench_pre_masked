
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef unsigned int u32 ;
struct net_device {int dummy; } ;
typedef int __be32 ;
typedef int __be16 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct net_device *VAR_2, u8 VAR_3,
             __be32 VAR_4, __be16 VAR_5,
             __be32 VAR_6, __be16 VAR_7)
{
 size_t VAR_8 = (size_t)VAR_2;
 u32 VAR_9 = ((u32)VAR_8) ^ FUNC_0(VAR_4 ^ VAR_6) ^ VAR_3 ^ FUNC_1(VAR_5 ^ VAR_7);
 return ((VAR_9 >> VAR_1) ^ VAR_9) & VAR_0;
}
