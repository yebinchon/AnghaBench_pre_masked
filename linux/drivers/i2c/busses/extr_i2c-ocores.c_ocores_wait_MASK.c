
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ocores_i2c {int dummy; } ;


 int VAR_0 ;
 unsigned long const VAR_1 ;
 int FUNC_0 (struct ocores_i2c*,int) ;
 scalar_t__ FUNC_1 (unsigned long const,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct ocores_i2c *VAR_2,
         int VAR_3, u8 VAR_4, u8 VAR_5,
         const unsigned long VAR_6)
{
 unsigned long VAR_7;

 VAR_7 = VAR_1 + VAR_6;
 while (1) {
  u8 VAR_8 = FUNC_0(VAR_2, VAR_3);

  if ((VAR_8 & VAR_4) == VAR_5)
   break;

  if (FUNC_1(VAR_1, VAR_7))
   return -VAR_0;
 }
 return 0;
}
