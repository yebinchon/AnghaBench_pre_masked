
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_sm_io {unsigned int regspacing; scalar_t__ addr; } ;


 unsigned char FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned char FUNC_1(const struct si_sm_io *VAR_0,
      unsigned int VAR_1)
{
 return FUNC_0((VAR_0->addr)+(VAR_1 * VAR_0->regspacing));
}
