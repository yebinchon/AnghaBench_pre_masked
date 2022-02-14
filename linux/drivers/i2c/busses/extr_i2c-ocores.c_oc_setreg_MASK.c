
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ocores_i2c {int (* setreg ) (struct ocores_i2c*,int,int ) ;} ;


 int FUNC_0 (struct ocores_i2c*,int,int ) ;

__attribute__((used)) static inline void FUNC_1(struct ocores_i2c *VAR_0, int VAR_1, u8 VAR_2)
{
 VAR_0->setreg(VAR_0, VAR_1, VAR_2);
}
