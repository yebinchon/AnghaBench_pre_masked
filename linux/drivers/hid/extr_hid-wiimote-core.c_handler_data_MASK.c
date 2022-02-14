
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cmd_read_size; scalar_t__ cmd_read_buf; } ;
struct wiimote_data {TYPE_1__ state; } ;
typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int FUNC_0 (struct wiimote_data*,int const*) ;
 int FUNC_1 (scalar_t__,int const*,int) ;
 int FUNC_2 (struct wiimote_data*) ;
 scalar_t__ FUNC_3 (struct wiimote_data*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct wiimote_data *VAR_1, const __u8 *VAR_2)
{
 __u16 VAR_3 = VAR_2[3] << 8 | VAR_2[4];
 __u8 VAR_4 = (VAR_2[2] >> 4) + 1;
 __u8 VAR_5 = VAR_2[2] & 0x0f;

 FUNC_0(VAR_1, VAR_2);

 if (FUNC_3(VAR_1, VAR_0, VAR_3)) {
  if (VAR_5)
   VAR_4 = 0;
  else if (VAR_4 > VAR_1->state.cmd_read_size)
   VAR_4 = VAR_1->state.cmd_read_size;

  VAR_1->state.cmd_read_size = VAR_4;
  if (VAR_1->state.cmd_read_buf)
   FUNC_1(VAR_1->state.cmd_read_buf, &VAR_2[5], VAR_4);
  FUNC_2(VAR_1);
 }
}
