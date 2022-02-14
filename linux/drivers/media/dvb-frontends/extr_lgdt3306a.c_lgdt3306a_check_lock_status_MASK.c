
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lgdt3306a_state {int dummy; } ;
typedef enum lgdt3306a_modulation { ____Placeholder_lgdt3306a_modulation } lgdt3306a_modulation ;
typedef enum lgdt3306a_lock_status { ____Placeholder_lgdt3306a_lock_status } lgdt3306a_lock_status ;
typedef enum lgdt3306a_lock_check { ____Placeholder_lgdt3306a_lock_check } lgdt3306a_lock_check ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct lgdt3306a_state*) ;
 int FUNC_2 (struct lgdt3306a_state*,int,int*) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static enum lgdt3306a_lock_status
FUNC_4(struct lgdt3306a_state *VAR_6,
       enum lgdt3306a_lock_check VAR_7)
{
 u8 VAR_8 = 0;
 int VAR_9;
 enum lgdt3306a_modulation VAR_10;
 enum lgdt3306a_lock_status VAR_11;

 VAR_10 = VAR_4;

 switch (VAR_7) {
 case 129:
 {
  VAR_9 = FUNC_2(VAR_6, 0x00a6, &VAR_8);
  if (VAR_9)
   return VAR_9;

  if ((VAR_8 & 0x80) == 0x80)
   VAR_11 = VAR_0;
  else
   VAR_11 = VAR_5;

  FUNC_0("SYNC_LOCK=%x\n", VAR_11);
  break;
 }
 case 131:
 {
  VAR_9 = FUNC_2(VAR_6, 0x0080, &VAR_8);
  if (VAR_9)
   return VAR_9;

  if ((VAR_8 & 0x40) == 0x40)
   VAR_11 = VAR_0;
  else
   VAR_11 = VAR_5;

  FUNC_0("AGC_LOCK=%x\n", VAR_11);
  break;
 }
 case 128:
 {
  VAR_10 = FUNC_1(VAR_6);
  if ((VAR_10 == VAR_2) || (VAR_10 == VAR_1)) {
   VAR_9 = FUNC_2(VAR_6, 0x1094, &VAR_8);
   if (VAR_9)
    return VAR_9;

   if ((VAR_8 & 0x80) == 0x80)
    VAR_11 = VAR_0;
   else
    VAR_11 = VAR_5;
  } else
   VAR_11 = VAR_3;

  FUNC_0("TR_LOCK=%x\n", VAR_11);
  break;
 }
 case 130:
 {
  VAR_10 = FUNC_1(VAR_6);
  if ((VAR_10 == VAR_2) || (VAR_10 == VAR_1)) {
   VAR_9 = FUNC_2(VAR_6, 0x0080, &VAR_8);
   if (VAR_9)
    return VAR_9;

   if ((VAR_8 & 0x10) == 0x10)
    VAR_11 = VAR_0;
   else
    VAR_11 = VAR_5;
  } else
   VAR_11 = VAR_3;

  FUNC_0("FEC_LOCK=%x\n", VAR_11);
  break;
 }

 default:
  VAR_11 = VAR_3;
  FUNC_3("UNKNOWN whatLock=%d\n", VAR_7);
  break;
 }

 return VAR_11;
}
