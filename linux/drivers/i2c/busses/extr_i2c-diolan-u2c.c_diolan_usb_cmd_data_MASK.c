
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct i2c_diolan_u2c {int ocount; int olen; void** obuffer; } ;


 int FUNC_0 (struct i2c_diolan_u2c*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_diolan_u2c *VAR_0, u8 VAR_1, u8 VAR_2,
          bool VAR_3)
{
 VAR_0->obuffer[VAR_0->olen++] = VAR_1;
 VAR_0->obuffer[VAR_0->olen++] = VAR_2;
 VAR_0->ocount++;
 return FUNC_0(VAR_0, VAR_3);
}
