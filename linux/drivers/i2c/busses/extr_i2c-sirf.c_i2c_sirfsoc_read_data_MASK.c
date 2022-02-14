
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct sirfsoc_i2c {int read_cmd_len; int finished_len; scalar_t__* buf; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct sirfsoc_i2c *VAR_1)
{
 u32 VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->read_cmd_len; VAR_3++) {
  if (!(VAR_3 & 0x3))
   VAR_2 = FUNC_2(VAR_1->base + VAR_0 + VAR_3);
  VAR_1->buf[VAR_1->finished_len++] =
   (u8)((VAR_2 & FUNC_0(VAR_3)) >>
    FUNC_1(VAR_3));
 }
}
