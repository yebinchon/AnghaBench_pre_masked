
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {int rwb; } ;


 int FUNC_0 (struct pblk*,char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct pblk *VAR_0)
{
 if (FUNC_2(&VAR_0->rwb))
  FUNC_0(VAR_0, "write buffer error on tear down\n");

 FUNC_1(&VAR_0->rwb);
}
