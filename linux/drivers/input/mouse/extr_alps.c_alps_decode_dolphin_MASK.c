
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct psmouse {struct alps_data* private; } ;
struct TYPE_2__ {unsigned char x; unsigned char y; } ;
struct alps_fields {int first_mp; int is_mp; unsigned char pressure; unsigned char fingers; int y_map; int x_map; TYPE_1__ st; } ;
struct alps_data {int y_bits; int x_bits; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct alps_fields*,unsigned char*) ;

__attribute__((used)) static int FUNC_2(struct alps_fields *VAR_0, unsigned char *VAR_1,
    struct psmouse *VAR_2)
{
 u64 VAR_3 = 0;
 struct alps_data *VAR_4 = VAR_2->private;

 VAR_0->first_mp = !!(VAR_1[0] & 0x02);
 VAR_0->is_mp = !!(VAR_1[0] & 0x20);

 if (!VAR_0->is_mp) {
  VAR_0->st.x = ((VAR_1[1] & 0x7f) | ((VAR_1[4] & 0x0f) << 7));
  VAR_0->st.y = ((VAR_1[2] & 0x7f) | ((VAR_1[4] & 0xf0) << 3));
  VAR_0->pressure = (VAR_1[0] & 4) ? 0 : VAR_1[5] & 0x7f;
  FUNC_1(VAR_0, VAR_1);
 } else {
  VAR_0->fingers = ((VAR_1[0] & 0x6) >> 1 |
       (VAR_1[0] & 0x10) >> 2);

  VAR_3 = (VAR_1[1] & 0x7f) |
       ((VAR_1[2] & 0x7f) << 7) |
       ((VAR_1[4] & 0x7f) << 14) |
       ((VAR_1[5] & 0x7f) << 21) |
       ((VAR_1[3] & 0x07) << 28) |
       (((u64)VAR_1[3] & 0x70) << 27) |
       (((u64)VAR_1[0] & 0x01) << 34);


  VAR_0->y_map = VAR_3 & (FUNC_0(VAR_4->y_bits) - 1);


  VAR_0->x_map = (VAR_3 >> VAR_4->y_bits) &
      (FUNC_0(VAR_4->x_bits) - 1);
 }

 return 0;
}
