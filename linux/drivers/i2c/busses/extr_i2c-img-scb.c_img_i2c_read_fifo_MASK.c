
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct TYPE_2__ {void** buf; scalar_t__ len; } ;
struct img_i2c {TYPE_1__ msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct img_i2c*,int ) ;
 int FUNC_1 (struct img_i2c*) ;
 int FUNC_2 (struct img_i2c*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct img_i2c *VAR_4)
{
 while (VAR_4->msg.len) {
  u32 VAR_5;
  u8 VAR_6;

  FUNC_1(VAR_4);
  VAR_5 = FUNC_0(VAR_4, VAR_1);
  if (VAR_5 & VAR_0)
   break;

  VAR_6 = FUNC_0(VAR_4, VAR_2);
  *VAR_4->msg.buf = VAR_6;

  FUNC_2(VAR_4, VAR_3, 0xff);
  VAR_4->msg.len--;
  VAR_4->msg.buf++;
 }
}
