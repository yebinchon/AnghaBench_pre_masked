
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct input_dev {scalar_t__ users; } ;
struct cyapa {scalar_t__ state; scalar_t__ operational; struct input_dev* input; } ;
typedef enum cyapa_pm_stage { ____Placeholder_cyapa_pm_stage } cyapa_pm_stage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cyapa*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct cyapa*,int ) ;
 int FUNC_3 (struct cyapa*,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct cyapa *VAR_7, u8 VAR_8,
  u16 VAR_9, enum cyapa_pm_stage VAR_10)
{
 struct input_dev *VAR_11 = VAR_7->input;
 u8 VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;

 if (VAR_7->state != VAR_3)
  return 0;

 VAR_13 = VAR_6;
 while (VAR_13--) {
  VAR_16 = FUNC_2(VAR_7, VAR_0);
  if (VAR_16 >= 0)
   break;
  FUNC_5(VAR_5, 2 * VAR_5);
 }
 if (VAR_16 < 0)
  return VAR_16;





 if ((VAR_16 & VAR_4) == VAR_8)
  return 0;

 VAR_14 = (int)FUNC_1(VAR_16 & VAR_4);
 VAR_12 = VAR_16;
 VAR_12 &= ~VAR_4;
 VAR_12 |= VAR_8 & VAR_4;
 VAR_13 = VAR_6;
 while (VAR_13--) {
  VAR_16 = FUNC_3(VAR_7, VAR_0, VAR_12);
  if (!VAR_16)
   break;
  FUNC_5(VAR_5, 2 * VAR_5);
 }







 if (VAR_7->operational && VAR_11 && VAR_11->users &&
     (VAR_10 == VAR_2 ||
      VAR_10 == VAR_1)) {

  VAR_15 = 1000 / 120;
  while (VAR_14 > 0) {
   if (VAR_14 > VAR_15)
    FUNC_4(VAR_15);
   else
    FUNC_4(VAR_14);
   VAR_14 -= VAR_15;
   FUNC_0(VAR_7);
  }
 } else {
  FUNC_4(VAR_14);
 }

 return VAR_16;
}
