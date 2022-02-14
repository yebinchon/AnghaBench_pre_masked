
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct gc_subdev {int idx; } ;
struct gc {int dummy; } ;
struct ff_rumble_effect {scalar_t__ weak_magnitude; scalar_t__ strong_magnitude; } ;
struct TYPE_2__ {struct ff_rumble_effect rumble; } ;
struct ff_effect {scalar_t__ type; TYPE_1__ u; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct gc*,unsigned int,unsigned char) ;
 int FUNC_1 (struct gc*,unsigned char) ;
 struct gc* FUNC_2 (struct input_dev*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct input_dev *VAR_8, void *VAR_9,
         struct ff_effect *VAR_10)
{
 int VAR_11;
 unsigned long VAR_12;
 struct gc *VAR_13 = FUNC_2(VAR_8);
 struct gc_subdev *VAR_14 = VAR_9;
 unsigned char VAR_15 = 1 << VAR_14->idx;

 if (VAR_10->type == VAR_0) {
  struct ff_rumble_effect *VAR_16 = &VAR_10->u.rumble;
  unsigned int VAR_17 =
   VAR_16->strong_magnitude || VAR_16->weak_magnitude ?
   VAR_2 : VAR_1;

  FUNC_4(VAR_12);


  FUNC_0(VAR_13, VAR_3, VAR_15);
  FUNC_0(VAR_13, VAR_5, VAR_15);
  FUNC_0(VAR_13, VAR_2, VAR_15);
  for (VAR_11 = 0; VAR_11 < 32; VAR_11++)
   FUNC_0(VAR_13, VAR_5, VAR_15);
  FUNC_1(VAR_13, VAR_15);

  FUNC_5(VAR_7);


  FUNC_0(VAR_13, VAR_3, VAR_15);
  FUNC_0(VAR_13, VAR_6, VAR_15);
  FUNC_0(VAR_13, VAR_4, VAR_15);
  for (VAR_11 = 0; VAR_11 < 32; VAR_11++)
   FUNC_0(VAR_13, VAR_17, VAR_15);
  FUNC_1(VAR_13, VAR_15);

  FUNC_3(VAR_12);

 }

 return 0;
}
