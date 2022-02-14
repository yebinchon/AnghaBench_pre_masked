
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u32 ;
struct sirfsoc_i2c {int cmd_ptr; scalar_t__ base; scalar_t__ last; } ;
struct i2c_msg {scalar_t__ len; int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned char FUNC_1 (int ) ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char FUNC_2 (struct i2c_msg*) ;
 int FUNC_3 (unsigned char,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct sirfsoc_i2c *VAR_4,
 struct i2c_msg *VAR_5)
{
 unsigned char VAR_6;
 u32 VAR_7 = VAR_1 | FUNC_1(0) | VAR_3;


 if (VAR_4->last && (VAR_5->len == 0))
  VAR_7 |= VAR_2;

 FUNC_3(VAR_7, VAR_4->base + FUNC_0(VAR_4->cmd_ptr++));

 VAR_6 = FUNC_2(VAR_5);


 if (VAR_5->flags & VAR_0)
  VAR_6 ^= 1;

 FUNC_3(VAR_6, VAR_4->base + FUNC_0(VAR_4->cmd_ptr++));
}
