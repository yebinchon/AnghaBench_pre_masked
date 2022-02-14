
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct highlander_i2c_dev {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct highlander_i2c_dev *VAR_2)
{
 FUNC_1(FUNC_0(VAR_2->base + VAR_0) & ~VAR_1, VAR_2->base + VAR_0);
}
