
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ id; } ;
struct uclogic_params {TYPE_1__ pen; } ;
struct uclogic_drvdata {TYPE_3__* pen_input; struct uclogic_params params; } ;
struct hid_input {TYPE_3__* input; TYPE_2__* report; } ;
struct hid_field {int application; } ;
struct hid_device {char const* name; } ;
struct TYPE_6__ {char* name; int dev; } ;
struct TYPE_5__ {scalar_t__ id; struct hid_field** field; } ;


 int VAR_0 ;






 char* FUNC_0 (int *,size_t,int ) ;
 struct uclogic_drvdata* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (char*,size_t,char*,char const*,char const*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(struct hid_device *VAR_1,
  struct hid_input *VAR_2)
{
 struct uclogic_drvdata *VAR_3 = FUNC_1(VAR_1);
 struct uclogic_params *VAR_4 = &VAR_3->params;
 char *VAR_5;
 const char *VAR_6 = ((void*)0);
 struct hid_field *VAR_7;
 size_t VAR_8;


 if (!VAR_2->report)
  return 0;





 if (VAR_2->report->id == VAR_4->pen.id) {

  VAR_3->pen_input = VAR_2->input;
 }

 VAR_7 = VAR_2->report->field[0];

 switch (VAR_7->application) {
 case 131:
  VAR_6 = "Keyboard";
  break;
 case 129:
  VAR_6 = "Mouse";
  break;
 case 130:
  VAR_6 = "Pad";
  break;
 case 132:
  VAR_6 = "Pen";
  break;
 case 133:
  VAR_6 = "Consumer Control";
  break;
 case 128:
  VAR_6 = "System Control";
  break;
 }

 if (VAR_6) {
  VAR_8 = FUNC_3(VAR_1->name) + 2 + FUNC_3(VAR_6);
  VAR_5 = FUNC_0(&VAR_2->input->dev, VAR_8, VAR_0);
  if (VAR_5) {
   FUNC_2(VAR_5, VAR_8, "%s %s", VAR_1->name, VAR_6);
   VAR_2->input->name = VAR_5;
  }
 }

 return 0;
}
