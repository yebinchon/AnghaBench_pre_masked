
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct img_ascii_lcd_ctx {unsigned int scroll_pos; unsigned int message_len; scalar_t__ scroll_rate; int timer; TYPE_1__* cfg; int * message; int * curr; } ;
struct TYPE_2__ {unsigned int num_chars; int (* update ) (struct img_ascii_lcd_ctx*) ;} ;


 struct img_ascii_lcd_ctx* VAR_0 ;
 struct img_ascii_lcd_ctx* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct img_ascii_lcd_ctx*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_3)
{
 struct img_ascii_lcd_ctx *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2);
 unsigned int VAR_5, VAR_6 = VAR_4->scroll_pos;
 unsigned int VAR_7 = VAR_4->cfg->num_chars;


 for (VAR_5 = 0; VAR_5 < VAR_7;) {

  for (; VAR_5 < VAR_7 && VAR_6 < VAR_4->message_len; VAR_5++, VAR_6++)
   VAR_4->curr[VAR_5] = VAR_4->message[VAR_6];


  VAR_6 = 0;
 }


 VAR_4->cfg->update(VAR_4);


 VAR_4->scroll_pos++;
 VAR_4->scroll_pos %= VAR_4->message_len;


 if (VAR_4->message_len > VAR_4->cfg->num_chars)
  FUNC_1(&VAR_4->timer, VAR_1 + VAR_4->scroll_rate);
}
