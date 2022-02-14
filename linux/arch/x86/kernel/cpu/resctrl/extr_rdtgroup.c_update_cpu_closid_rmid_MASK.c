
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rmid; } ;
struct rdtgroup {TYPE_1__ mon; int closid; } ;
struct TYPE_4__ {int default_rmid; int default_closid; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
 struct rdtgroup *VAR_2 = VAR_1;

 if (VAR_2) {
  FUNC_1(VAR_0.default_closid, VAR_2->closid);
  FUNC_1(VAR_0.default_rmid, VAR_2->mon.rmid);
 }






 FUNC_0();
}
