
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xiic_i2c {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct xiic_i2c*,int ) ;
 int FUNC_1 (struct xiic_i2c*,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct xiic_i2c *VAR_1, u32 VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_1, VAR_0);
 FUNC_1(VAR_1, VAR_0, VAR_3 & ~VAR_2);
}
