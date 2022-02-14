
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpt {int enabled; scalar_t__ address; int * instr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 struct bpt* VAR_4 ;
 int FUNC_0 (scalar_t__,unsigned int*,int) ;
 scalar_t__ FUNC_1 (unsigned int*,int ) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static void FUNC_4(void)
{
 int VAR_5;
 struct bpt *VAR_6;
 unsigned VAR_7;

 VAR_6 = VAR_4;
 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5, ++VAR_6) {
  if ((VAR_6->enabled & (VAR_1|VAR_0)) != VAR_1)
   continue;
  if (FUNC_0(VAR_6->address, &VAR_7, 4) == 4
      && VAR_7 == VAR_3
      && FUNC_1(
   (unsigned int *)VAR_6->address, VAR_6->instr[0]) != 0)
   FUNC_2("Couldn't remove breakpoint at %lx\n",
          VAR_6->address);
  else
   FUNC_3((void *)VAR_6->address);
 }
}
