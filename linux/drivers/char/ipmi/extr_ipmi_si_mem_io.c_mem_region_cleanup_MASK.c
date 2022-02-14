
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_sm_io {unsigned long addr_data; int regspacing; int regsize; } ;


 int FUNC_0 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_1(struct si_sm_io *VAR_0, int VAR_1)
{
 unsigned long VAR_2 = VAR_0->addr_data;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  FUNC_0(VAR_2 + VAR_3 * VAR_0->regspacing,
       VAR_0->regsize);
}
