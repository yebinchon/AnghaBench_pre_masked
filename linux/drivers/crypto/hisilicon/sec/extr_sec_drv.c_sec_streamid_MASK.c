
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_dev_info {scalar_t__* regs; } ;


 scalar_t__ FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct sec_dev_info *VAR_3, int VAR_4)
{



 FUNC_1((0 | ((0x600 & 0xffff) << 8)),
         VAR_3->regs[VAR_0] + FUNC_0(VAR_4));
}
