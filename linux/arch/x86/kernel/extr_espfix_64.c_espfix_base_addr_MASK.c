
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;

__attribute__((used)) static inline unsigned long FUNC_0(unsigned int VAR_6)
{
 unsigned long VAR_7, VAR_8;
 unsigned long VAR_9;

 VAR_7 = (VAR_6 / VAR_1) ^ VAR_4;
 VAR_8 = (VAR_6 + VAR_5) % VAR_1;
 VAR_9 = (VAR_7 << VAR_3) + (VAR_8 * VAR_2);
 VAR_9 = (VAR_9 & 0xffffUL) | ((VAR_9 & ~0xffffUL) << 16);
 VAR_9 += VAR_0;
 return VAR_9;
}
