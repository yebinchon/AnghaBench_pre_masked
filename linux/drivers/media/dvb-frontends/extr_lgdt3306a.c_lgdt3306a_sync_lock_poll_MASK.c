
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lgdt3306a_state {int dummy; } ;
typedef enum lgdt3306a_lock_status { ____Placeholder_lgdt3306a_lock_status } lgdt3306a_lock_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct lgdt3306a_state*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static enum lgdt3306a_lock_status
FUNC_3(struct lgdt3306a_state *VAR_3)
{
 enum lgdt3306a_lock_status VAR_4 = VAR_2;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
  FUNC_2(30);

  VAR_4 = FUNC_1(VAR_3,
            VAR_1);

  if (VAR_4 == VAR_0) {
   FUNC_0("locked(%d)\n", VAR_5);
   return VAR_0;
  }
 }
 FUNC_0("not locked\n");
 return VAR_2;
}
