
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef unsigned int u32 ;
typedef int __be32 ;
typedef int __be16 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;

__attribute__((used)) static inline unsigned int FUNC_2(u8 VAR_2, __be32 VAR_3, __be16 VAR_4,
       __be32 VAR_5, __be16 VAR_6)
{
 u32 VAR_7 = FUNC_0(VAR_3 ^ VAR_5) ^ VAR_2 ^ FUNC_1(VAR_4 ^ VAR_6);
 return ((VAR_7 >> VAR_1) ^ VAR_7) & VAR_0;
}
