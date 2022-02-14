
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psmouse {int dummy; } ;
struct TYPE_2__ {unsigned char x; unsigned char y; } ;
struct alps_fields {int first_mp; int is_mp; unsigned char fingers; unsigned char x_map; unsigned char y_map; unsigned char pressure; TYPE_1__ st; } ;


 int FUNC_0 (struct alps_fields*,unsigned char*) ;

__attribute__((used)) static int FUNC_1(struct alps_fields *VAR_0, unsigned char *VAR_1,
     struct psmouse *VAR_2)
{
 VAR_0->first_mp = !!(VAR_1[4] & 0x40);
 VAR_0->is_mp = !!(VAR_1[0] & 0x40);

 if (VAR_0->is_mp) {
  VAR_0->fingers = (VAR_1[5] & 0x3) + 1;
  VAR_0->x_map = ((VAR_1[4] & 0x7e) << 8) |
      ((VAR_1[1] & 0x7f) << 2) |
      ((VAR_1[0] & 0x30) >> 4);
  VAR_0->y_map = ((VAR_1[3] & 0x70) << 4) |
      ((VAR_1[2] & 0x7f) << 1) |
      (VAR_1[4] & 0x01);
 } else {
  VAR_0->st.x = ((VAR_1[1] & 0x7f) << 4) | ((VAR_1[4] & 0x30) >> 2) |
         ((VAR_1[0] & 0x30) >> 4);
  VAR_0->st.y = ((VAR_1[2] & 0x7f) << 4) | (VAR_1[4] & 0x0f);
  VAR_0->pressure = VAR_1[5] & 0x7f;

  FUNC_0(VAR_0, VAR_1);
 }

 return 0;
}
