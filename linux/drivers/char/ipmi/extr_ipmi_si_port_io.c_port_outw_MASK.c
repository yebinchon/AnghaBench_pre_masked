
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_sm_io {unsigned int addr_data; unsigned char regshift; unsigned int regspacing; } ;


 int FUNC_0 (unsigned char,unsigned int) ;

__attribute__((used)) static void FUNC_1(const struct si_sm_io *VAR_0, unsigned int VAR_1,
        unsigned char VAR_2)
{
 unsigned int VAR_3 = VAR_0->addr_data;

 FUNC_0(VAR_2 << VAR_0->regshift, VAR_3 + (VAR_1 * VAR_0->regspacing));
}
