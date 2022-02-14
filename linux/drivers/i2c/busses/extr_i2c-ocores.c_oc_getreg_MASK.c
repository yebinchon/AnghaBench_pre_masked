
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ocores_i2c {int (* getreg ) (struct ocores_i2c*,int) ;} ;


 int FUNC_0 (struct ocores_i2c*,int) ;

__attribute__((used)) static inline u8 FUNC_1(struct ocores_i2c *VAR_0, int VAR_1)
{
 return VAR_0->getreg(VAR_0, VAR_1);
}
