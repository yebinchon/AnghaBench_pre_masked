
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xiic_i2c {scalar_t__ endianness; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct xiic_i2c *VAR_1, int VAR_2, int VAR_3)
{
 if (VAR_1->endianness == VAR_0)
  FUNC_0(VAR_3, VAR_1->base + VAR_2);
 else
  FUNC_1(VAR_3, VAR_1->base + VAR_2);
}
