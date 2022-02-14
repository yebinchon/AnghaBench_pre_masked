
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {unsigned int bits; int module; } ;


 int FUNC_0 (char*,int ,unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static inline void FUNC_2(struct clk *VAR_0,
  unsigned int VAR_1, unsigned int VAR_2)
{
 int VAR_3 = 1000000;

 do {} while (--VAR_3 && ((FUNC_1(VAR_0->module, VAR_2)
     & VAR_0->bits) != VAR_1));
 if (!VAR_3)
  FUNC_0("module de/activation failed %d %08X %08X %08X\n",
   VAR_0->module, VAR_0->bits, VAR_1,
   FUNC_1(VAR_0->module, VAR_2) & VAR_0->bits);
}
