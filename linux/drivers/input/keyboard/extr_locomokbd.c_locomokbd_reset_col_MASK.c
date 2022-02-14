
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned short,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(unsigned long VAR_1, int VAR_2)
{
 unsigned short VAR_3;

 VAR_3 = ((0xFF & ~(1 << VAR_2)) << 8) + 0xFF;
 FUNC_0(VAR_3, VAR_1 + VAR_0);
}
