
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_rb {int mem; } ;


 int FUNC_0 (struct pblk_rb*,unsigned int,unsigned int*) ;
 int FUNC_1 (struct pblk_rb*,unsigned int,unsigned int) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct pblk_rb *VAR_0, unsigned int VAR_1,
        unsigned int *VAR_2)
{
 if (!FUNC_0(VAR_0, VAR_1, VAR_2))
  return 0;


 FUNC_2(&VAR_0->mem, FUNC_1(VAR_0, *VAR_2, VAR_1));
 return 1;
}
