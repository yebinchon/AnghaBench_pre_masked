
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psmouse {unsigned char* packet; struct alps_data* private; } ;
struct TYPE_2__ {unsigned char x; unsigned char y; } ;
struct alps_fields {int left; int right; unsigned char pressure; int x_map; int y_map; int fingers; TYPE_1__ st; } ;
struct alps_data {int multi_packet; unsigned char* multi_data; struct alps_fields f; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct alps_data*,struct alps_fields*) ;
 int FUNC_2 (struct psmouse*,int ) ;

__attribute__((used)) static void FUNC_3(struct psmouse *VAR_0)
{
 struct alps_data *VAR_1 = VAR_0->private;
 unsigned char *VAR_2 = VAR_0->packet;
 struct alps_fields *VAR_3 = &VAR_1->f;
 int VAR_4;






 if (VAR_2[6] & 0x40) {

  VAR_1->multi_packet = 0;
 }

 if (FUNC_0(VAR_1->multi_packet > 2))
  return;

 VAR_4 = 2 * VAR_1->multi_packet;
 VAR_1->multi_data[VAR_4] = VAR_2[6];
 VAR_1->multi_data[VAR_4 + 1] = VAR_2[7];

 VAR_3->left = !!(VAR_2[4] & 0x01);
 VAR_3->right = !!(VAR_2[4] & 0x02);

 VAR_3->st.x = ((VAR_2[1] & 0x7f) << 4) | ((VAR_2[3] & 0x30) >> 2) |
    ((VAR_2[0] & 0x30) >> 4);
 VAR_3->st.y = ((VAR_2[2] & 0x7f) << 4) | (VAR_2[3] & 0x0f);
 VAR_3->pressure = VAR_2[5] & 0x7f;

 if (++VAR_1->multi_packet > 2) {
  VAR_1->multi_packet = 0;

  VAR_3->x_map = ((VAR_1->multi_data[2] & 0x1f) << 10) |
      ((VAR_1->multi_data[3] & 0x60) << 3) |
      ((VAR_1->multi_data[0] & 0x3f) << 2) |
      ((VAR_1->multi_data[1] & 0x60) >> 5);
  VAR_3->y_map = ((VAR_1->multi_data[5] & 0x01) << 10) |
      ((VAR_1->multi_data[3] & 0x1f) << 5) |
       (VAR_1->multi_data[1] & 0x1f);

  VAR_3->fingers = FUNC_1(VAR_1, VAR_3);
 }

 FUNC_2(VAR_0, VAR_3->fingers);
}
