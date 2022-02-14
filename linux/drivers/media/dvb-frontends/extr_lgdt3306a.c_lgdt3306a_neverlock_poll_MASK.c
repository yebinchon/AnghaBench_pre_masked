
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lgdt3306a_state {int dummy; } ;
typedef enum lgdt3306a_neverlock_status { ____Placeholder_lgdt3306a_neverlock_status } lgdt3306a_neverlock_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct lgdt3306a_state*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static enum lgdt3306a_neverlock_status
FUNC_3(struct lgdt3306a_state *VAR_2)
{
 enum lgdt3306a_neverlock_status VAR_3 = VAR_0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 5; VAR_4++) {
  FUNC_2(30);

  VAR_3 = FUNC_1(VAR_2);

  if (VAR_3 == VAR_1) {
   FUNC_0("NL_LOCK(%d)\n", VAR_4);
   return VAR_3;
  }
 }
 FUNC_0("NLLockStatus=%d\n", VAR_3);
 return VAR_3;
}
