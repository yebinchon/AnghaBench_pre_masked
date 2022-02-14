
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xiic_i2c {scalar_t__ endianness; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u8 FUNC_1(struct xiic_i2c *VAR_1, int VAR_2)
{
 u8 VAR_3;

 if (VAR_1->endianness == VAR_0)
  VAR_3 = FUNC_0(VAR_1->base + VAR_2);
 else
  VAR_3 = FUNC_0(VAR_1->base + VAR_2 + 3);
 return VAR_3;
}
