
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {void* patb1; void* patb0; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned int,int ,int ,int) ;
 TYPE_1__* VAR_0 ;

void FUNC_4(unsigned int VAR_1, u64 VAR_2, u64 VAR_3)
{
 if (!FUNC_2()) {
  FUNC_3(VAR_1, VAR_2, VAR_3, 1);
  return;
 }

 VAR_0[VAR_1].patb0 = FUNC_0(VAR_2);
 VAR_0[VAR_1].patb1 = FUNC_0(VAR_3);

 FUNC_1(VAR_1);
}
