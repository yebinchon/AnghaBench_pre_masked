
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsc200x_data {unsigned int x; unsigned int y; unsigned int z1; unsigned int z2; } ;
struct tsc200x {unsigned int in_x; scalar_t__ in_y; unsigned int in_z1; unsigned int in_z2; unsigned int x_plate_ohm; scalar_t__ last_valid_interrupt; int lock; int penup_timer; int pen_down; int regmap; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,struct tsc200x_data*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct tsc200x*,unsigned int,scalar_t__,unsigned int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_6, void *VAR_7)
{
 struct tsc200x *VAR_8 = VAR_7;
 unsigned long VAR_9;
 unsigned int VAR_10;
 struct tsc200x_data VAR_11;
 int VAR_12;


 VAR_12 = FUNC_2(VAR_8->regmap, VAR_4, &VAR_11,
     VAR_2);
 if (FUNC_6(VAR_12))
  goto out;


 if (FUNC_6(VAR_11.x > VAR_1 || VAR_11.y > VAR_1))
  goto out;


 if (FUNC_6(VAR_11.z1 == 0 || VAR_11.z2 > VAR_1))
  goto out;
 if (FUNC_6(VAR_11.z1 >= VAR_11.z2))
  goto out;





 if (!VAR_8->pen_down &&
     VAR_8->in_x == VAR_11.x && VAR_8->in_y == VAR_11.y &&
     VAR_8->in_z1 == VAR_11.z1 && VAR_8->in_z2 == VAR_11.z2) {
  goto out;
 }





 VAR_8->in_x = VAR_11.x;
 VAR_8->in_y = VAR_11.y;
 VAR_8->in_z1 = VAR_11.z1;
 VAR_8->in_z2 = VAR_11.z2;


 VAR_10 = VAR_11.x * (VAR_11.z2 - VAR_11.z1) / VAR_11.z1;
 VAR_10 = VAR_10 * VAR_8->x_plate_ohm / 4096;
 if (FUNC_6(VAR_10 > VAR_1))
  goto out;

 FUNC_3(&VAR_8->lock, VAR_9);

 FUNC_5(VAR_8, VAR_11.x, VAR_11.y, VAR_10);
 FUNC_0(&VAR_8->penup_timer,
    VAR_5 + FUNC_1(VAR_3));

 FUNC_4(&VAR_8->lock, VAR_9);

 VAR_8->last_valid_interrupt = VAR_5;
out:
 return VAR_0;
}
