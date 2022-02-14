
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int flags; int len; int * buf; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;

void FUNC_2(u8 *VAR_1, struct i2c_msg *VAR_2, bool VAR_3)
{
 if (!VAR_1 || VAR_1 == VAR_2->buf)
  return;

 if (VAR_3 && VAR_2->flags & VAR_0)
  FUNC_1(VAR_2->buf, VAR_1, VAR_2->len);

 FUNC_0(VAR_1);
}
