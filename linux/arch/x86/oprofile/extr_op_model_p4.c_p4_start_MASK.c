
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct op_msrs {int dummy; } ;
struct TYPE_2__ {int cccr_address; } ;


 int FUNC_0 (unsigned int) ;
 size_t FUNC_1 (unsigned int,int) ;
 unsigned int FUNC_2 () ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (int ,unsigned int,unsigned int) ;
 int * VAR_2 ;
 int FUNC_4 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct op_msrs const * const VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2();

 for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7) {
  if (!VAR_2[VAR_7])
   continue;
  FUNC_3(VAR_1[FUNC_1(VAR_6, VAR_7)].cccr_address, VAR_4, VAR_5);
  FUNC_0(VAR_4);
  FUNC_4(VAR_1[FUNC_1(VAR_6, VAR_7)].cccr_address, VAR_4, VAR_5);
 }
}
