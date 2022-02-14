
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_sm_io {unsigned int addr_data; int io_size; int regspacing; int regsize; } ;


 int FUNC_0 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_1(struct si_sm_io *VAR_0)
{
 unsigned int VAR_1 = VAR_0->addr_data;
 int VAR_2;

 if (VAR_1) {
  for (VAR_2 = 0; VAR_2 < VAR_0->io_size; VAR_2++)
   FUNC_0(VAR_1 + VAR_2 * VAR_0->regspacing,
           VAR_0->regsize);
 }
}
