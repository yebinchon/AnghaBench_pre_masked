
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {int inflight_io; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct pblk *VAR_0)
{
 do {
  if (!FUNC_0(&VAR_0->inflight_io))
   break;

  FUNC_1();
 } while (1);
}
