
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ast_private {int dummy; } ;
struct ast_i2c_chan {TYPE_1__* dev; } ;
struct TYPE_2__ {struct ast_private* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct ast_private*,int ,int,int) ;
 int FUNC_1 (struct ast_private*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, int VAR_2)
{
 struct ast_i2c_chan *VAR_3 = VAR_1;
 struct ast_private *VAR_4 = VAR_3->dev->dev_private;
 int VAR_5;
 u8 VAR_6, VAR_7;

 for (VAR_5 = 0; VAR_5 < 0x10000; VAR_5++) {
  VAR_6 = ((VAR_2 & 0x01) ? 0 : 1);
  FUNC_1(VAR_4, VAR_0, 0xb7, 0xf4, VAR_6);
  VAR_7 = FUNC_0(VAR_4, VAR_0, 0xb7, 0x01);
  if (VAR_6 == VAR_7)
   break;
 }
}
