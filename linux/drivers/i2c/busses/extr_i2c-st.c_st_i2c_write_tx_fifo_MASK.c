
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct st_i2c_dev {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct st_i2c_dev *VAR_1, u8 VAR_2)
{
 u16 VAR_3 = VAR_2 << 1;

 FUNC_0(VAR_3 | 1, VAR_1->base + VAR_0);
}
