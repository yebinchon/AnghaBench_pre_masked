
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct em_i2c_device {int base; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static inline void FUNC_2(struct em_i2c_device *VAR_0, u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 FUNC_1((FUNC_0(VAR_0->base + VAR_3) & ~VAR_1) | VAR_2, VAR_0->base + VAR_3);
}
