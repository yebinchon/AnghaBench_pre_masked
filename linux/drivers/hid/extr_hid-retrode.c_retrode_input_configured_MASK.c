
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hid_input {TYPE_3__* input; TYPE_1__* report; } ;
struct hid_field {TYPE_2__* report; } ;
struct hid_device {int dev; } ;
struct TYPE_6__ {char* name; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_4__ {struct hid_field** field; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int *,int ,char*,int ,char const*,...) ;
 int FUNC_1 (struct hid_device*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_3,
     struct hid_input *VAR_4)
{
 struct hid_field *VAR_5 = VAR_4->report->field[0];
 const char *VAR_6;
 int VAR_7 = 0;
 char *VAR_8;

 switch (VAR_5->report->id) {
 case 0:
  VAR_6 = "SNES Mouse";
  break;
 case 1:
 case 2:
  VAR_6 = "SNES / N64";
  VAR_7 = VAR_5->report->id;
  break;
 case 3:
 case 4:
  VAR_6 = "Mega Drive";
  VAR_7 = VAR_5->report->id - 2;
  break;
 default:
  FUNC_1(VAR_3, "Got unhandled report id %d\n", VAR_5->report->id);
  VAR_6 = "Unknown";
 }

 if (VAR_7)
  VAR_8 = FUNC_0(&VAR_3->dev, VAR_2,
    "%s %s #%d", VAR_0,
    VAR_6, VAR_7);
 else
  VAR_8 = FUNC_0(&VAR_3->dev, VAR_2,
    "%s %s", VAR_0, VAR_6);

 if (!VAR_8)
  return -VAR_1;

 VAR_4->input->name = VAR_8;

 return 0;
}
