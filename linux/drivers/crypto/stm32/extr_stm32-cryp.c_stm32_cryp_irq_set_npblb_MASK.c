
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_cryp {int total_in; int authsize; int hw_blocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct stm32_cryp*) ;
 int FUNC_1 (struct stm32_cryp*,int ) ;
 int FUNC_2 (struct stm32_cryp*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct stm32_cryp *VAR_3)
{
 u32 VAR_4, VAR_5;


 VAR_4 = FUNC_1(VAR_3, VAR_0);
 VAR_4 &= ~VAR_1;
 FUNC_2(VAR_3, VAR_0, VAR_4);

 VAR_5 = FUNC_0(VAR_3) ? VAR_3->total_in - VAR_3->authsize :
        VAR_3->total_in;
 VAR_4 |= (VAR_3->hw_blocksize - VAR_5) << VAR_2;
 VAR_4 |= VAR_1;
 FUNC_2(VAR_3, VAR_0, VAR_4);
}
