
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
 scalar_t__ FUNC_2 (struct lgdt3306a_state*) ;
 int FUNC_3 (struct lgdt3306a_state*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static enum lgdt3306a_lock_status
FUNC_5(struct lgdt3306a_state *VAR_2)
{
 u8 VAR_3;
 u8 VAR_4;
 u32 VAR_5;

 for (VAR_3 = 0; VAR_3 < 10; VAR_3++) {
  if (FUNC_2(VAR_2) == VAR_1) {
   FUNC_0("no fec lock!\n");
   return VAR_1;
  }

  FUNC_4(20);

  VAR_4 = FUNC_3(VAR_2);
  VAR_5 = FUNC_1(VAR_2);
  FUNC_0("cnt=%d errors=%d snr=%d\n", VAR_3, VAR_4, VAR_5);

  if ((VAR_5 >= 1500) && (VAR_4 < 0xff))
   return VAR_0;
 }

 FUNC_0("not locked!\n");
 return VAR_1;
}
