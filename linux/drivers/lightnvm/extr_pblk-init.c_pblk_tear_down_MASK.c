
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {int rl; int rwb; } ;


 int FUNC_0 (struct pblk*) ;
 int FUNC_1 (struct pblk*) ;
 int FUNC_2 (struct pblk*,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct pblk*) ;

__attribute__((used)) static void FUNC_6(struct pblk *VAR_0, bool VAR_1)
{
 if (VAR_1)
  FUNC_0(VAR_0);
 FUNC_1(VAR_0);
 FUNC_5(VAR_0);
 FUNC_3(&VAR_0->rwb);
 FUNC_4(&VAR_0->rl);

 FUNC_2(VAR_0, "consistent tear down (graceful:%d)\n", VAR_1);
}
