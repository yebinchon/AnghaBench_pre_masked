
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xiic_i2c {scalar_t__ endianness; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_2(struct xiic_i2c *VAR_1, int VAR_2)
{
 u32 VAR_3;

 if (VAR_1->endianness == VAR_0)
  VAR_3 = FUNC_0(VAR_1->base + VAR_2);
 else
  VAR_3 = FUNC_1(VAR_1->base + VAR_2);
 return VAR_3;
}
