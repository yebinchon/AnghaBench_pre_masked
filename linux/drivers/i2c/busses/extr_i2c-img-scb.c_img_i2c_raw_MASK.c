
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct img_i2c {scalar_t__ raw_timeout; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct img_i2c*,int,int) ;

__attribute__((used)) static unsigned int FUNC_1(struct img_i2c *VAR_1, u32 VAR_2,
    u32 VAR_3)
{
 if (VAR_2 & VAR_0) {
  if (VAR_1->raw_timeout == 0)
   return FUNC_0(VAR_1,
    VAR_2, VAR_3);
  --VAR_1->raw_timeout;
 }
 return 0;
}
