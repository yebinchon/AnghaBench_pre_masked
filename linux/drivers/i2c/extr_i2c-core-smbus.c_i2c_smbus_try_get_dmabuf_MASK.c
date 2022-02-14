
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct i2c_msg {int flags; unsigned char* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned char* FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct i2c_msg *VAR_4, u8 VAR_5)
{
 bool VAR_6 = VAR_4->flags & VAR_2;
 unsigned char *VAR_7;

 VAR_7 = FUNC_0(VAR_3 + (VAR_6 ? 2 : 3), VAR_0);
 if (!VAR_7)
  return;

 VAR_4->buf = VAR_7;
 VAR_4->flags |= VAR_1;

 if (VAR_5)
  VAR_4->buf[0] = VAR_5;
}
