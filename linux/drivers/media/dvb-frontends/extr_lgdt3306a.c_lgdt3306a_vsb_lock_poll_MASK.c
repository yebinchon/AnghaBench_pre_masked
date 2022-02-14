
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct lgdt3306a_state {int dummy; } ;
typedef enum lgdt3306a_lock_status { ____Placeholder_lgdt3306a_lock_status } lgdt3306a_lock_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct lgdt3306a_state*) ;
 int FUNC_2 (struct lgdt3306a_state*) ;
 int FUNC_3 (struct lgdt3306a_state*) ;
 scalar_t__ FUNC_4 (struct lgdt3306a_state*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static enum lgdt3306a_lock_status
FUNC_6(struct lgdt3306a_state *VAR_2)
{
 int VAR_3;
 u8 VAR_4 = 0;
 u8 VAR_5;
 u32 VAR_6;

 for (VAR_4 = 0; VAR_4 < 10; VAR_4++) {
  if (FUNC_4(VAR_2) == VAR_1) {
   FUNC_0("no sync lock!\n");
   return VAR_1;
  }

  FUNC_5(20);
  VAR_3 = FUNC_3(VAR_2);
  if (VAR_3)
   break;

  VAR_5 = FUNC_2(VAR_2);
  VAR_6 = FUNC_1(VAR_2);
  FUNC_0("cnt=%d errors=%d snr=%d\n", VAR_4, VAR_5, VAR_6);

  if ((VAR_6 >= 1500) && (VAR_5 < 0xff))
   return VAR_0;
 }

 FUNC_0("not locked!\n");
 return VAR_1;
}
