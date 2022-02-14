
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int const u8 ;
struct input_mt_pos {scalar_t__ y; scalar_t__ x; } ;
struct input_dev {int dummy; } ;
struct bu21013_ts {int props; struct input_dev* in_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int const VAR_2 ;
 unsigned int const VAR_3 ;
 unsigned int const VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int const VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int const VAR_11 ;
 unsigned int const VAR_12 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct bu21013_ts*,unsigned int const*) ;
 int FUNC_2 (unsigned int const) ;
 int FUNC_3 (struct input_dev*,int*,struct input_mt_pos*,int,scalar_t__) ;
 int FUNC_4 (struct input_dev*,int ,int) ;
 int FUNC_5 (struct input_dev*,int) ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (struct input_dev*,int ,scalar_t__) ;
 int FUNC_8 (struct input_dev*) ;
 int FUNC_9 (struct input_mt_pos*,int *,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_10(struct bu21013_ts *VAR_13)
{
 struct input_dev *VAR_14 = VAR_13->in_dev;
 struct input_mt_pos VAR_15[VAR_9];
 int VAR_16[VAR_9];
 u8 VAR_17[VAR_7];
 bool VAR_18, VAR_19;
 int VAR_20 = 0;
 int VAR_21;

 if (FUNC_1(VAR_13, VAR_17) < 0)
  return -VAR_6;

 VAR_18 = FUNC_2(VAR_17[0] & VAR_2);
 VAR_19 = FUNC_2(((VAR_17[1] & VAR_4) |
  ((VAR_17[2] & VAR_3) << VAR_12)) >> VAR_11);
 if (!VAR_18 || !VAR_19)
  return 0;

 for (VAR_21 = 0; VAR_21 < VAR_9; VAR_21++) {
  const u8 *VAR_22 = &VAR_17[4 * VAR_21 + 3];
  unsigned int VAR_23, VAR_24;

  VAR_23 = VAR_22[0] << VAR_11 | (VAR_22[1] & VAR_8);
  VAR_24 = VAR_22[2] << VAR_11 | (VAR_22[3] & VAR_8);
  if (VAR_23 != 0 && VAR_24 != 0)
   FUNC_9(&VAR_15[VAR_20++],
            &VAR_13->props, VAR_23, VAR_24);
 }

 if (VAR_20 == 2 &&
     (FUNC_0(VAR_15[0].x - VAR_15[1].x) < VAR_5 ||
      FUNC_0(VAR_15[0].y - VAR_15[1].y) < VAR_5)) {
  return 0;
 }

 FUNC_3(VAR_14, VAR_16, VAR_15, VAR_20, VAR_5);
 for (VAR_21 = 0; VAR_21 < VAR_20; VAR_21++) {
  FUNC_5(VAR_14, VAR_16[VAR_21]);
  FUNC_4(VAR_14, VAR_10, 1);
  FUNC_7(VAR_14, VAR_0, VAR_15[VAR_21].x);
  FUNC_7(VAR_14, VAR_1, VAR_15[VAR_21].y);
 }

 FUNC_6(VAR_14);
 FUNC_8(VAR_14);

 return 0;
}
