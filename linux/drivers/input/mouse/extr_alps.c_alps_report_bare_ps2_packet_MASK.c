
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct input_dev* dev; struct alps_data* private; } ;
struct input_dev {int dummy; } ;
struct alps_data {scalar_t__ proto_version; int flags; struct input_dev* dev3; int dev3_register_work; struct input_dev* dev2; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct input_dev*) ;
 int FUNC_1 (struct input_dev*) ;
 int FUNC_2 (struct input_dev*,struct input_dev*,unsigned char,unsigned char,unsigned char) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct psmouse*,int *,int ) ;
 int FUNC_5 (struct input_dev*,unsigned char*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct psmouse *VAR_2,
     unsigned char VAR_3[],
     bool VAR_4)
{
 struct alps_data *VAR_5 = VAR_2->private;
 struct input_dev *VAR_6, *VAR_7 = ((void*)0);


 if (VAR_5->proto_version == VAR_1 &&
     (VAR_5->flags & VAR_0)) {

  VAR_6 = VAR_5->dev2;
  VAR_7 = VAR_2->dev;
 } else if (FUNC_6(FUNC_1(VAR_5->dev3))) {

  if (!FUNC_0(VAR_5->dev3))
   FUNC_4(VAR_2, &VAR_5->dev3_register_work,
        0);
  return;
 } else {
  VAR_6 = VAR_5->dev3;
 }

 if (VAR_4)
  FUNC_2(VAR_6, VAR_7,
    VAR_3[0] & 1, VAR_3[0] & 2, VAR_3[0] & 4);

 FUNC_5(VAR_6, VAR_3);

 FUNC_3(VAR_6);
}
