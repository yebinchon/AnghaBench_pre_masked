
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct set_mtrr_data {unsigned int smp_reg; int smp_type; int smp_size; int smp_base; } ;
struct TYPE_2__ {int (* set_all ) () ;int (* set ) (unsigned int,int ,int ,int ) ;} ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned int,int ,int ,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(void *VAR_2)
{
 struct set_mtrr_data *VAR_3 = VAR_2;
 if (VAR_3->smp_reg != ~0U) {
  VAR_1->set(VAR_3->smp_reg, VAR_3->smp_base,
        VAR_3->smp_size, VAR_3->smp_type);
 } else if (VAR_0 || !FUNC_0(FUNC_1())) {
  VAR_1->set_all();
 }
 return 0;
}
