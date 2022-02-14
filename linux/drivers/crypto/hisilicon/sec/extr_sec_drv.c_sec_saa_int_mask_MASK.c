
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sec_dev_info {scalar_t__* regs; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct sec_dev_info *VAR_4, u32 VAR_5,
        u32 VAR_6)
{
 FUNC_0(VAR_6,
         VAR_4->regs[VAR_0] + VAR_2 + VAR_3 +
         VAR_5 * VAR_1);
}
