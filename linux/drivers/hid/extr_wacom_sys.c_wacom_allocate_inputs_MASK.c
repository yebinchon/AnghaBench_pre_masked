
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wacom_wac {int pad_name; TYPE_2__* pad_input; int touch_name; TYPE_1__* touch_input; int pen_name; TYPE_3__* pen_input; } ;
struct wacom {struct wacom_wac wacom_wac; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 void* FUNC_0 (struct wacom*) ;

__attribute__((used)) static int FUNC_1(struct wacom *VAR_1)
{
 struct wacom_wac *VAR_2 = &(VAR_1->wacom_wac);

 VAR_2->pen_input = FUNC_0(VAR_1);
 VAR_2->touch_input = FUNC_0(VAR_1);
 VAR_2->pad_input = FUNC_0(VAR_1);
 if (!VAR_2->pen_input ||
     !VAR_2->touch_input ||
     !VAR_2->pad_input)
  return -VAR_0;

 VAR_2->pen_input->name = VAR_2->pen_name;
 VAR_2->touch_input->name = VAR_2->touch_name;
 VAR_2->pad_input->name = VAR_2->pad_name;

 return 0;
}
