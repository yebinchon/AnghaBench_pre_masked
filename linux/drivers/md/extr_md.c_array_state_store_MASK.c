
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int ro; scalar_t__ hold_active; int sysfs_state; int gendisk; int sb_wait; int sb_flags; scalar_t__ pers; int lock; int thread; } ;
typedef size_t ssize_t ;
typedef enum array_state { ____Placeholder_array_state } array_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;


 int VAR_4 ;




 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct mddev*) ;
 int FUNC_2 (struct mddev*,int,int *) ;

 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (struct mddev*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mddev*) ;
 int FUNC_7 (struct mddev*) ;


 int FUNC_8 (struct mddev*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (struct mddev*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;


__attribute__((used)) static ssize_t
FUNC_15(struct mddev *VAR_5, const char *VAR_6, size_t VAR_7)
{
 int VAR_8 = 0;
 enum array_state VAR_9 = FUNC_3(VAR_6, VAR_4);

 if (VAR_5->pers && (VAR_9 == 138 || VAR_9 == 134) && VAR_5->ro != 1) {



  FUNC_11(&VAR_5->lock);
  if (VAR_9 == 138) {
   FUNC_8(VAR_5);
   FUNC_0(VAR_2, &VAR_5->sb_flags);
   FUNC_5(VAR_5->thread);
   FUNC_14(&VAR_5->sb_wait);
  } else {
   FUNC_8(VAR_5);
   if (!FUNC_10(VAR_5))
    VAR_8 = -VAR_0;
  }
  if (!VAR_8)
   FUNC_13(VAR_5->sysfs_state);
  FUNC_12(&VAR_5->lock);
  return VAR_8 ?: VAR_7;
 }
 VAR_8 = FUNC_6(VAR_5);
 if (VAR_8)
  return VAR_8;
 VAR_8 = -VAR_1;
 switch(VAR_9) {
 case 136:
  break;
 case 133:

  VAR_8 = FUNC_2(VAR_5, 0, ((void*)0));
  break;
 case 132:

  if (VAR_5->pers)
   VAR_8 = FUNC_2(VAR_5, 2, ((void*)0));
  else
   VAR_8 = 0;
  break;
 case 129:
  break;
 case 130:
  if (VAR_5->pers)
   VAR_8 = FUNC_4(VAR_5, ((void*)0));
  else {
   VAR_5->ro = 1;
   FUNC_9(VAR_5->gendisk, 1);
   VAR_8 = FUNC_1(VAR_5);
  }
  break;
 case 131:
  if (VAR_5->pers) {
   if (VAR_5->ro == 0)
    VAR_8 = FUNC_4(VAR_5, ((void*)0));
   else if (VAR_5->ro == 1)
    VAR_8 = FUNC_8(VAR_5);
   if (VAR_8 == 0) {
    VAR_5->ro = 2;
    FUNC_9(VAR_5->gendisk, 0);
   }
  } else {
   VAR_5->ro = 2;
   VAR_8 = FUNC_1(VAR_5);
  }
  break;
 case 134:
  if (VAR_5->pers) {
   VAR_8 = FUNC_8(VAR_5);
   if (VAR_8)
    break;
   FUNC_11(&VAR_5->lock);
   if (!FUNC_10(VAR_5))
    VAR_8 = -VAR_0;
   FUNC_12(&VAR_5->lock);
  } else
   VAR_8 = -VAR_1;
  break;
 case 138:
  if (VAR_5->pers) {
   VAR_8 = FUNC_8(VAR_5);
   if (VAR_8)
    break;
   FUNC_0(VAR_2, &VAR_5->sb_flags);
   FUNC_14(&VAR_5->sb_wait);
   VAR_8 = 0;
  } else {
   VAR_5->ro = 0;
   FUNC_9(VAR_5->gendisk, 0);
   VAR_8 = FUNC_1(VAR_5);
  }
  break;
 case 128:
 case 137:
 case 135:

  break;
 }

 if (!VAR_8) {
  if (VAR_5->hold_active == VAR_3)
   VAR_5->hold_active = 0;
  FUNC_13(VAR_5->sysfs_state);
 }
 FUNC_7(VAR_5);
 return VAR_8 ?: VAR_7;
}
