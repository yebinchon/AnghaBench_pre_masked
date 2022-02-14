
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct meson_i2c {int count; scalar_t__ pos; scalar_t__ regs; int * tokens; TYPE_1__* msg; scalar_t__ last; } ;
struct TYPE_2__ {int flags; scalar_t__ len; scalar_t__ buf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct meson_i2c*,int ) ;
 int FUNC_1 (struct meson_i2c*,scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct meson_i2c *VAR_6)
{
 bool VAR_7 = !(VAR_6->msg->flags & VAR_0);
 int VAR_8;

 VAR_6->count = FUNC_2(VAR_6->msg->len - VAR_6->pos, 8);

 for (VAR_8 = 0; VAR_8 < VAR_6->count - 1; VAR_8++)
  FUNC_0(VAR_6, VAR_3);

 if (VAR_6->count) {
  if (VAR_7 || VAR_6->pos + VAR_6->count < VAR_6->msg->len)
   FUNC_0(VAR_6, VAR_3);
  else
   FUNC_0(VAR_6, VAR_4);
 }

 if (VAR_7)
  FUNC_1(VAR_6, VAR_6->msg->buf + VAR_6->pos, VAR_6->count);

 if (VAR_6->last && VAR_6->pos + VAR_6->count >= VAR_6->msg->len)
  FUNC_0(VAR_6, VAR_5);

 FUNC_3(VAR_6->tokens[0], VAR_6->regs + VAR_1);
 FUNC_3(VAR_6->tokens[1], VAR_6->regs + VAR_2);
}
