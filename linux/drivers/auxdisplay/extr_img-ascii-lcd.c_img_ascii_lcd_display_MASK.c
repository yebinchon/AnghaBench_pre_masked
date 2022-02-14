
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct img_ascii_lcd_ctx {char* message; int message_len; int timer; scalar_t__ scroll_pos; TYPE_1__* pdev; } ;
typedef int ssize_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 char* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(struct img_ascii_lcd_ctx *VAR_2,
        const char *VAR_3, ssize_t VAR_4)
{
 char *VAR_5;


 FUNC_0(&VAR_2->timer);

 if (VAR_4 == -1)
  VAR_4 = FUNC_5(VAR_3);


 if (VAR_3[VAR_4 - 1] == '\n')
  VAR_4--;

 VAR_5 = FUNC_2(&VAR_2->pdev->dev, VAR_4 + 1, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_4(VAR_5, VAR_3, VAR_4);
 VAR_5[VAR_4] = 0;

 if (VAR_2->message)
  FUNC_1(&VAR_2->pdev->dev, VAR_2->message);

 VAR_2->message = VAR_5;
 VAR_2->message_len = VAR_4;
 VAR_2->scroll_pos = 0;


 FUNC_3(&VAR_2->timer);

 return 0;
}
