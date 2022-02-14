
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psmouse {unsigned char* packet; struct alps_data* private; } ;
struct input_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ y; scalar_t__ x; } ;
struct alps_fields {int fingers; int ts_middle; int ts_right; int ts_left; int pressure; TYPE_1__ st; scalar_t__ first_mp; scalar_t__ is_mp; } ;
struct alps_data {int multi_packet; unsigned char* multi_data; int flags; int quirks; int (* decode_fields ) (struct alps_fields*,unsigned char*,struct psmouse*) ;struct alps_fields f; struct input_dev* dev2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct alps_data*,struct alps_fields*) ;
 int FUNC_1 (struct psmouse*,int) ;
 int FUNC_2 (struct input_dev*,int ,int ) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (unsigned char*,unsigned char*,int) ;
 int FUNC_5 (struct alps_fields*,int ,int) ;
 int FUNC_6 (struct alps_fields*,unsigned char*,struct psmouse*) ;
 int FUNC_7 (struct alps_fields*,unsigned char*,struct psmouse*) ;

__attribute__((used)) static void FUNC_8(struct psmouse *VAR_5)
{
 struct alps_data *VAR_6 = VAR_5->private;
 unsigned char *VAR_7 = VAR_5->packet;
 struct input_dev *VAR_8 = VAR_6->dev2;
 struct alps_fields *VAR_9 = &VAR_6->f;
 int VAR_10 = 0;

 FUNC_5(VAR_9, 0, sizeof(*VAR_9));

 VAR_6->decode_fields(VAR_9, VAR_7, VAR_5);







 if (VAR_6->multi_packet) {






  if (VAR_9->is_mp) {
   VAR_10 = VAR_9->fingers;




   VAR_6->decode_fields(VAR_9, VAR_6->multi_data, VAR_5);
   if (FUNC_0(VAR_6, VAR_9) == 0)
    VAR_10 = 0;
  } else {
   VAR_6->multi_packet = 0;
  }
 }
 if (VAR_9->is_mp)
  return;

 if (!VAR_6->multi_packet && VAR_9->first_mp) {
  VAR_6->multi_packet = 1;
  FUNC_4(VAR_6->multi_data, VAR_7, sizeof(VAR_6->multi_data));
  return;
 }

 VAR_6->multi_packet = 0;







 if (VAR_9->st.x && VAR_9->st.y && !VAR_9->pressure)
  return;

 FUNC_1(VAR_5, VAR_10);

 if ((VAR_6->flags & VAR_0) &&
     !(VAR_6->quirks & VAR_1)) {
  FUNC_2(VAR_8, VAR_2, VAR_9->ts_left);
  FUNC_2(VAR_8, VAR_4, VAR_9->ts_right);
  FUNC_2(VAR_8, VAR_3, VAR_9->ts_middle);
  FUNC_3(VAR_8);
 }
}
