
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sirfsoc_i2c {int finished_len; int msg_len; int cmd_ptr; int read_cmd_len; int* buf; scalar_t__ base; scalar_t__ last; scalar_t__ msg_read; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct sirfsoc_i2c *VAR_7)
{
 u32 VAR_8;
 int VAR_9 = 0;

 if (VAR_7->msg_read) {
  while (((VAR_7->finished_len + VAR_9) < VAR_7->msg_len)
    && (VAR_7->cmd_ptr < VAR_0)) {
   VAR_8 = VAR_3 | FUNC_1(0);
   if (((VAR_7->finished_len + VAR_9) ==
     (VAR_7->msg_len - 1)) && VAR_7->last)
    VAR_8 |= VAR_5 | VAR_2;
   FUNC_2(VAR_8,
    VAR_7->base + FUNC_0(VAR_7->cmd_ptr++));
   VAR_9++;
  }

  VAR_7->read_cmd_len = VAR_9;
 } else {
  while ((VAR_7->cmd_ptr < VAR_0 - 1)
    && (VAR_7->finished_len < VAR_7->msg_len)) {
   VAR_8 = VAR_6 | FUNC_1(0);
   if ((VAR_7->finished_len == (VAR_7->msg_len - 1))
    && VAR_7->last)
    VAR_8 |= VAR_5;
   FUNC_2(VAR_8,
    VAR_7->base + FUNC_0(VAR_7->cmd_ptr++));
   FUNC_2(VAR_7->buf[VAR_7->finished_len++],
    VAR_7->base + FUNC_0(VAR_7->cmd_ptr++));
  }
 }
 VAR_7->cmd_ptr = 0;


 FUNC_2(VAR_4, VAR_7->base + VAR_1);
}
