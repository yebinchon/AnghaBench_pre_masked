
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {unsigned char* packet; struct input_dev* dev; struct alps_data* private; } ;
struct input_dev {int dummy; } ;
struct alps_fields {int fingers; int pressure; int middle; int right; int left; int ts_middle; int ts_right; int ts_left; scalar_t__ first_mp; scalar_t__ is_mp; } ;
struct alps_data {int multi_packet; unsigned char* multi_data; int flags; int (* decode_fields ) (struct alps_fields*,unsigned char*,struct psmouse*) ;struct alps_fields f; struct input_dev* dev2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*) ;
 scalar_t__ FUNC_3 (unsigned char*) ;
 int FUNC_4 (struct psmouse*,int) ;
 int FUNC_5 (struct input_dev*,int) ;
 int FUNC_6 (struct input_dev*,int ,int ) ;
 int FUNC_7 (struct input_dev*,int ,int ) ;
 int FUNC_8 (struct input_dev*,int ,int ) ;
 int FUNC_9 (struct input_dev*) ;
 int FUNC_10 (unsigned char*,unsigned char*,int) ;
 int FUNC_11 (struct alps_fields*,int ,int) ;
 int FUNC_12 (struct psmouse*,char*) ;
 int FUNC_13 (struct alps_fields*,unsigned char*,struct psmouse*) ;
 int FUNC_14 (struct alps_fields*,unsigned char*,struct psmouse*) ;

__attribute__((used)) static void FUNC_15(struct psmouse *VAR_8)
{
 struct alps_data *VAR_9 = VAR_8->private;
 unsigned char *VAR_10 = VAR_8->packet;
 struct input_dev *VAR_11 = VAR_8->dev;
 struct input_dev *VAR_12 = VAR_9->dev2;
 struct alps_fields *VAR_13 = &VAR_9->f;

 FUNC_11(VAR_13, 0, sizeof(struct alps_fields));
 VAR_9->decode_fields(VAR_13, VAR_10, VAR_8);
 if (VAR_9->multi_packet) {






  if (VAR_13->is_mp) {

   VAR_9->decode_fields(VAR_13, VAR_9->multi_data, VAR_8);
  } else {
   VAR_9->multi_packet = 0;
  }
 }





 if (VAR_13->is_mp)
  return;


 if (!VAR_9->multi_packet && VAR_13->first_mp) {
  VAR_9->multi_packet = 1;
  FUNC_10(VAR_9->multi_data, VAR_10, sizeof(VAR_9->multi_data));
  return;
 }

 VAR_9->multi_packet = 0;


 if (FUNC_3(VAR_10) == VAR_7) {
  if (!(VAR_9->flags & VAR_1)) {
   FUNC_12(VAR_8,
         "Rejected trackstick packet from non DualPoint device");
   return;
  }

  FUNC_8(VAR_12, VAR_5, FUNC_0(VAR_10));
  FUNC_8(VAR_12, VAR_6, FUNC_1(VAR_10));
  FUNC_6(VAR_12, VAR_0, FUNC_2(VAR_10));

  FUNC_7(VAR_12, VAR_2, VAR_13->ts_left);
  FUNC_7(VAR_12, VAR_4, VAR_13->ts_right);
  FUNC_7(VAR_12, VAR_3, VAR_13->ts_middle);

  FUNC_9(VAR_12);
  return;
 }


 FUNC_4(VAR_8, (VAR_13->fingers <= 4) ? VAR_13->fingers : 4);

 FUNC_5(VAR_11, VAR_13->fingers);

 FUNC_7(VAR_11, VAR_2, VAR_13->left);
 FUNC_7(VAR_11, VAR_4, VAR_13->right);
 FUNC_7(VAR_11, VAR_3, VAR_13->middle);

 FUNC_6(VAR_11, VAR_0, VAR_13->pressure);
 FUNC_9(VAR_11);
}
