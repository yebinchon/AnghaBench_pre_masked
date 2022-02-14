
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fimd_context {scalar_t__ regs; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_3 (int) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct fimd_context *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5 = 0, VAR_6 = 0;

 VAR_5 = ~(VAR_1 | VAR_2 |
   VAR_0) | FUNC_2(0);

 VAR_6 = FUNC_3(0xffffffff);

 FUNC_4(VAR_5, VAR_3->regs + FUNC_0(VAR_4));
 FUNC_4(VAR_6, VAR_3->regs + FUNC_1(VAR_4));
}
