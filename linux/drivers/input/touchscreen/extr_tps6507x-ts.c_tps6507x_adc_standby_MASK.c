
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tps6507x_ts {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct tps6507x_ts*,int ,int*) ;
 scalar_t__ FUNC_2 (struct tps6507x_ts*,int ,int ) ;

__attribute__((used)) static s32 FUNC_3(struct tps6507x_ts *VAR_6)
{
 s32 VAR_7;
 s32 VAR_8 = 0;
 u8 VAR_9;

 VAR_7 = FUNC_2(VAR_6, VAR_1,
    VAR_0);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_6, VAR_3,
    VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_6, VAR_2, &VAR_9);
 if (VAR_7)
  return VAR_7;

 while (VAR_9 & VAR_4) {
  FUNC_0(10);
  VAR_7 = FUNC_1(VAR_6, VAR_2, &VAR_9);
  if (VAR_7)
   return VAR_7;
  VAR_8++;
 }

 return VAR_7;
}
