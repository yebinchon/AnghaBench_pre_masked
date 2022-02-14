
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct agp_memory {int dummy; } ;
struct TYPE_4__ {TYPE_1__* svrwrks_dev; scalar_t__ registers; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,char*) ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 TYPE_2__ VAR_4 ;
 scalar_t__ FUNC_4 (int,unsigned long) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct agp_memory *VAR_5)
{
 unsigned long VAR_6;

 FUNC_5(1, VAR_4.registers+VAR_2);
 VAR_6 = VAR_3 + 3*VAR_0;
 while (FUNC_2(VAR_4.registers+VAR_2) == 1) {
  FUNC_0();
  if (FUNC_4(VAR_3, VAR_6)) {
   FUNC_1(&VAR_4.svrwrks_dev->dev,
    "TLB post flush took more than 3 seconds\n");
   break;
  }
 }

 FUNC_6(1, VAR_4.registers+VAR_1);
 VAR_6 = VAR_3 + 3*VAR_0;
 while (FUNC_3(VAR_4.registers+VAR_1) == 1) {
  FUNC_0();
  if (FUNC_4(VAR_3, VAR_6)) {
   FUNC_1(&VAR_4.svrwrks_dev->dev,
    "TLB Dir flush took more than 3 seconds\n");
   break;
  }
 }
}
