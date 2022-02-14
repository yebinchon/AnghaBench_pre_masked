
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ast_private {int dummy; } ;
struct ast_i2c_chan {TYPE_1__* dev; } ;
struct TYPE_2__ {struct ast_private* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct ast_private*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_1)
{
 struct ast_i2c_chan *VAR_2 = VAR_1;
 struct ast_private *VAR_3 = VAR_2->dev->dev_private;
 uint32_t VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_6 = 0;
 VAR_7 = 0;
 VAR_4 = (FUNC_0(VAR_3, VAR_0, 0xb7, 0x20) >> 5) & 0x01;
 do {
  VAR_5 = (FUNC_0(VAR_3, VAR_0, 0xb7, 0x20) >> 5) & 0x01;
  if (VAR_4 == VAR_5) {
   VAR_7++;
  } else {
   VAR_7 = 0;
   VAR_4 = (FUNC_0(VAR_3, VAR_0, 0xb7, 0x20) >> 5) & 0x01;
  }
 } while ((VAR_7 < 5) && (VAR_6++ < 0x10000));

 return VAR_4 & 1 ? 1 : 0;
}
