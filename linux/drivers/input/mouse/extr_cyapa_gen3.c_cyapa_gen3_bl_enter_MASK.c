
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cyapa {scalar_t__ state; int operational; int* status; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (struct cyapa*,int) ;
 int FUNC_1 (struct cyapa*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct cyapa *VAR_9)
{
 int VAR_10;
 int VAR_11;

 VAR_10 = FUNC_0(VAR_9, 500);
 if (VAR_10)
  return VAR_10;
 if (VAR_9->state == VAR_2) {

  return 0;
 }

 if (VAR_9->state != VAR_4)
  return -VAR_5;

 VAR_9->operational = 0;
 VAR_9->state = VAR_3;
 VAR_10 = FUNC_1(VAR_9, VAR_1, 0x01);
 if (VAR_10)
  return -VAR_6;

 FUNC_3(25000, 50000);
 VAR_11 = 2000;
 do {
  VAR_10 = FUNC_0(VAR_9, 500);
  if (VAR_10) {
   if (VAR_10 == -VAR_7) {
    VAR_11 -= 500;
    continue;
   }
   return VAR_10;
  }

  if ((VAR_9->state == VAR_2) &&
   !(VAR_9->status[VAR_8] & VAR_0))
   break;

  FUNC_2(100);
  VAR_11 -= 100;
 } while (VAR_11 > 0);

 if ((VAR_9->state != VAR_2) ||
  (VAR_9->status[VAR_8] & VAR_0))
  return -VAR_5;

 return 0;
}
