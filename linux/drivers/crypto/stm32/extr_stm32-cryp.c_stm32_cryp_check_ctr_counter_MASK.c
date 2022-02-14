
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_cryp {int* last_ctr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct stm32_cryp*,int*) ;
 void* FUNC_1 (struct stm32_cryp*,int ) ;
 int FUNC_2 (struct stm32_cryp*,int ,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct stm32_cryp *VAR_6)
{
 u32 VAR_7;

 if (FUNC_3(VAR_6->last_ctr[3] == 0xFFFFFFFF)) {
  VAR_6->last_ctr[3] = 0;
  VAR_6->last_ctr[2]++;
  if (!VAR_6->last_ctr[2]) {
   VAR_6->last_ctr[1]++;
   if (!VAR_6->last_ctr[1])
    VAR_6->last_ctr[0]++;
  }

  VAR_7 = FUNC_1(VAR_6, VAR_0);
  FUNC_2(VAR_6, VAR_0, VAR_7 & ~VAR_5);

  FUNC_0(VAR_6, (u32 *)VAR_6->last_ctr);

  FUNC_2(VAR_6, VAR_0, VAR_7);
 }

 VAR_6->last_ctr[0] = FUNC_1(VAR_6, VAR_1);
 VAR_6->last_ctr[1] = FUNC_1(VAR_6, VAR_2);
 VAR_6->last_ctr[2] = FUNC_1(VAR_6, VAR_3);
 VAR_6->last_ctr[3] = FUNC_1(VAR_6, VAR_4);
}
