
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ workq; } ;
struct gm12u320_device {int cmd_buf; int * data_buf; TYPE_1__ fb_update; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct gm12u320_device *VAR_1)
{
 int VAR_2;

 if (VAR_1->fb_update.workq)
  FUNC_0(VAR_1->fb_update.workq);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_1(VAR_1->data_buf[VAR_2]);

 FUNC_1(VAR_1->cmd_buf);
}
