
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct magicmouse_sc {TYPE_1__* input; } ;
struct hid_usage {int dummy; } ;
struct hid_input {TYPE_1__* input; } ;
struct hid_field {int flags; } ;
struct hid_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ product; } ;
struct TYPE_3__ {TYPE_2__ id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct magicmouse_sc* FUNC_0 (struct hid_device*) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_3,
  struct hid_input *VAR_4, struct hid_field *VAR_5,
  struct hid_usage *VAR_6, unsigned long **VAR_7, int *VAR_8)
{
 struct magicmouse_sc *VAR_9 = FUNC_0(VAR_3);

 if (!VAR_9->input)
  VAR_9->input = VAR_4->input;


 if ((VAR_4->input->id.product == VAR_1 ||
      VAR_4->input->id.product == VAR_2) &&
     VAR_5->flags & VAR_0)
  return -1;

 return 0;
}
