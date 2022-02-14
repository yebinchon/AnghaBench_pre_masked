
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int packet; struct input_dev* dev; struct alps_data* private; } ;
struct input_dev {int dummy; } ;
struct alps_fields {int middle; int right; int left; int fingers; int mt; } ;
struct alps_data {scalar_t__ (* decode_fields ) (struct alps_fields*,int ,struct psmouse*) ;struct alps_fields f; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct psmouse*,int ) ;
 int FUNC_2 (struct input_dev*,int ) ;
 int FUNC_3 (struct input_dev*,int ,int ) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct alps_fields*,int ,int) ;
 scalar_t__ FUNC_6 (struct alps_fields*,int ,struct psmouse*) ;

__attribute__((used)) static void FUNC_7(struct psmouse *VAR_3)
{
 struct alps_data *VAR_4 = VAR_3->private;
 struct input_dev *VAR_5 = VAR_3->dev;
 struct alps_fields *VAR_6 = &VAR_4->f;

 FUNC_5(VAR_6, 0, sizeof(*VAR_6));

 if (VAR_4->decode_fields(VAR_6, VAR_3->packet, VAR_3))
  return;

 FUNC_1(VAR_3, FUNC_0(VAR_6->mt));

 FUNC_2(VAR_5, VAR_6->fingers);

 FUNC_3(VAR_5, VAR_0, VAR_6->left);
 FUNC_3(VAR_5, VAR_2, VAR_6->right);
 FUNC_3(VAR_5, VAR_1, VAR_6->middle);

 FUNC_4(VAR_5);
}
