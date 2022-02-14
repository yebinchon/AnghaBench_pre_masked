
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt305x_esw {unsigned int base; } ;


 unsigned long FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned long,unsigned int) ;

__attribute__((used)) static inline void FUNC_2(struct rt305x_esw *VAR_0, unsigned VAR_1,
          unsigned long VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4;

 VAR_4 = FUNC_0(VAR_0->base + VAR_1) & ~VAR_2;
 FUNC_1(VAR_4 | VAR_3, VAR_0->base + VAR_1);
}
