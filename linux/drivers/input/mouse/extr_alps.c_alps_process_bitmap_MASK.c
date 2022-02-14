
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_mt_pos {int x; int y; } ;
struct alps_fields {struct input_mt_pos* mt; struct input_mt_pos st; int y_map; int x_map; } ;
struct alps_data {int x_max; int x_bits; int y_max; int y_bits; scalar_t__ proto_version; int second_touch; } ;
struct alps_bitmap_point {int num_bits; int start_bit; int member_0; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,struct alps_bitmap_point*,struct alps_bitmap_point*,int*) ;
 void* FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct alps_data *VAR_3,
          struct alps_fields *VAR_4)
{
 int VAR_5, VAR_6 = 0, VAR_7 = 0, VAR_8, VAR_9;
 struct alps_bitmap_point VAR_10 = {0,}, VAR_11 = {0,};
 struct alps_bitmap_point VAR_12 = {0,}, VAR_13 = {0,};
 struct input_mt_pos VAR_14[4];

 if (!VAR_4->x_map || !VAR_4->y_map)
  return 0;

 FUNC_0(VAR_4->x_map, &VAR_10, &VAR_11, &VAR_6);
 FUNC_0(VAR_4->y_map, &VAR_12, &VAR_13, &VAR_7);





 VAR_8 = FUNC_1(VAR_6, VAR_7);





 if (VAR_6 == 1) {
  VAR_5 = (VAR_10.num_bits - 1) / 2;
  VAR_10.num_bits = VAR_10.num_bits - VAR_5;
  VAR_11.start_bit = VAR_10.start_bit + VAR_5;
  VAR_11.num_bits = FUNC_1(VAR_5, 1);
 }
 if (VAR_7 == 1) {
  VAR_5 = (VAR_12.num_bits - 1) / 2;
  VAR_12.num_bits = VAR_12.num_bits - VAR_5;
  VAR_13.start_bit = VAR_12.start_bit + VAR_5;
  VAR_13.num_bits = FUNC_1(VAR_5, 1);
 }


 VAR_14[0].x =
  (VAR_3->x_max * (2 * VAR_10.start_bit + VAR_10.num_bits - 1)) /
  (2 * (VAR_3->x_bits - 1));
 VAR_14[0].y =
  (VAR_3->y_max * (2 * VAR_12.start_bit + VAR_12.num_bits - 1)) /
  (2 * (VAR_3->y_bits - 1));


 VAR_14[1].x =
  (VAR_3->x_max * (2 * VAR_11.start_bit + VAR_11.num_bits - 1)) /
  (2 * (VAR_3->x_bits - 1));
 VAR_14[1].y =
  (VAR_3->y_max * (2 * VAR_12.start_bit + VAR_12.num_bits - 1)) /
  (2 * (VAR_3->y_bits - 1));


 VAR_14[2].x =
  (VAR_3->x_max * (2 * VAR_11.start_bit + VAR_11.num_bits - 1)) /
  (2 * (VAR_3->x_bits - 1));
 VAR_14[2].y =
  (VAR_3->y_max * (2 * VAR_13.start_bit + VAR_13.num_bits - 1)) /
  (2 * (VAR_3->y_bits - 1));


 VAR_14[3].x =
  (VAR_3->x_max * (2 * VAR_10.start_bit + VAR_10.num_bits - 1)) /
  (2 * (VAR_3->x_bits - 1));
 VAR_14[3].y =
  (VAR_3->y_max * (2 * VAR_13.start_bit + VAR_13.num_bits - 1)) /
  (2 * (VAR_3->y_bits - 1));


 if (VAR_3->proto_version == VAR_2) {
  for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
   VAR_14[VAR_5].x = VAR_3->x_max - VAR_14[VAR_5].x;
 }


 if (VAR_3->proto_version == VAR_0 ||
     VAR_3->proto_version == VAR_1) {
  for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
   VAR_14[VAR_5].y = VAR_3->y_max - VAR_14[VAR_5].y;
 }






 if (VAR_3->second_touch == -1) {

  VAR_9 = 0x7fffffff;
  for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
   int VAR_15 = VAR_4->st.x - VAR_14[VAR_5].x;
   int VAR_16 = VAR_4->st.y - VAR_14[VAR_5].y;
   int VAR_17 = VAR_15 * VAR_15 + VAR_16 * VAR_16;

   if (VAR_17 < VAR_9) {
    VAR_3->second_touch = VAR_5;
    VAR_9 = VAR_17;
   }
  }

  VAR_3->second_touch = (VAR_3->second_touch + 2) % 4;
 }

 VAR_4->mt[0] = VAR_4->st;
 VAR_4->mt[1] = VAR_14[VAR_3->second_touch];

 return VAR_8;
}
