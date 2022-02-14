
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline unsigned long
FUNC_0(int VAR_4, unsigned int VAR_5, unsigned int VAR_6)
{
 unsigned long VAR_7;

 VAR_7 = (VAR_5 | VAR_6) & 0xf;
 VAR_7 <<= (VAR_0 + VAR_4 * VAR_1);
 VAR_7 |= (VAR_3 << (VAR_4 * VAR_2));

 return VAR_7;
}
