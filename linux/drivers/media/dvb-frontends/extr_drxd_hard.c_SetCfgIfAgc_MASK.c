
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct drxd_state {int dummy; } ;
struct SCfgAgc {int outputLevel; scalar_t__ ctrlMode; scalar_t__ maxOutputLevel; scalar_t__ minOutputLevel; int speed; int settleLevel; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct drxd_state*,int ,int*,int ) ;
 int FUNC_1 (struct drxd_state*,int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct drxd_state *VAR_18, struct SCfgAgc *VAR_19)
{
 int VAR_20;

 if (VAR_19->outputLevel > VAR_2)
  return -1;

 if (VAR_19->ctrlMode == VAR_1) {
  do {
   u16 VAR_21;
   u16 VAR_22;

   VAR_20 = FUNC_0(VAR_18, VAR_6, &VAR_22, 0);
   if (VAR_20 < 0)
    break;
   VAR_22 &= (~VAR_5);
   VAR_22 |= VAR_4;
   VAR_20 = FUNC_1(VAR_18, VAR_6, VAR_22, 0);
   if (VAR_20 < 0)
    break;

   VAR_21 = (u16) (VAR_19->outputLevel &
        VAR_17);
   VAR_20 = FUNC_1(VAR_18, VAR_16, VAR_21, 0);
   if (VAR_20 < 0)
    break;
  } while (0);
 } else if (VAR_19->ctrlMode == VAR_0) {
  if (((VAR_19->maxOutputLevel) < (VAR_19->minOutputLevel)) ||
      ((VAR_19->maxOutputLevel) > VAR_2) ||
      ((VAR_19->speed) > VAR_2) ||
      ((VAR_19->settleLevel) > VAR_2)
      )
   return -1;
  do {
   u16 VAR_23;
   u16 VAR_24;
   u16 VAR_25, VAR_26;



   VAR_20 = FUNC_0(VAR_18, VAR_6, &VAR_23, 0);
   if (VAR_20 < 0)
    break;
   VAR_23 &= (~VAR_5);
   VAR_23 |=
       VAR_3;
   VAR_20 = FUNC_1(VAR_18, VAR_6, VAR_23, 0);
   if (VAR_20 < 0)
    break;



   VAR_24 = (u16) ((VAR_19->settleLevel >> 1) &
        VAR_11);
   VAR_20 = FUNC_1(VAR_18, VAR_10, VAR_24, 0);
   if (VAR_20 < 0)
    break;



   VAR_25 = (u16) ((VAR_19->maxOutputLevel -
     VAR_19->minOutputLevel) / 2);
   VAR_26 = (u16) ((VAR_19->maxOutputLevel +
      VAR_19->minOutputLevel) / 2 - 511);

   VAR_20 = FUNC_1(VAR_18, VAR_15, VAR_25, 0);
   if (VAR_20 < 0)
    break;
   VAR_20 = FUNC_1(VAR_18, VAR_14, VAR_26, 0);
   if (VAR_20 < 0)
    break;


   {
    const u16 VAR_27 = 8;
    static const u16 VAR_28[] = {
     3, 4, 4, 5, 6 };
    static const u16 VAR_29[] = {
     14, 15, 15, 16,
     17, 18, 18, 19,
     20, 21, 22, 23,
     24, 26, 27, 28,
     29, 31
    };

    u16 VAR_30 = (VAR_2 + 1) /
        (VAR_27 + 1);
    u16 VAR_31 = (u16) (VAR_19->speed -
             ((VAR_19->speed /
        VAR_30) *
       VAR_30));
    u16 VAR_32 = (u16) (VAR_19->speed /
        VAR_30);
    u16 VAR_33;
    if (VAR_32 > VAR_27) {
     VAR_33 = 0;
     VAR_31 += VAR_30;
    } else {
     VAR_33 = VAR_27 - VAR_32;
    }
    {
     u16 VAR_34 =
         VAR_29[VAR_31 /
          ((VAR_30 /
            (14 + 1)) + 1)];
     u16 VAR_35 =
         VAR_28[VAR_31 /
          (VAR_30 /
           (3 + 1))];

     VAR_20 = FUNC_1(VAR_18, VAR_9, VAR_33, 0);
     if (VAR_20 < 0)
      break;
     VAR_20 = FUNC_1(VAR_18, VAR_8, VAR_34, 0);
     if (VAR_20 < 0)
      break;
     VAR_20 = FUNC_1(VAR_18, VAR_7, VAR_34, 0);
     if (VAR_20 < 0)
      break;
     VAR_20 = FUNC_1(VAR_18, VAR_13, VAR_35, 0);
     if (VAR_20 < 0)
      break;
     VAR_20 = FUNC_1(VAR_18, VAR_12, VAR_35, 0);
     if (VAR_20 < 0)
      break;
    }
   }
  } while (0);

 } else {

  return -1;
 }
 return VAR_20;
}
