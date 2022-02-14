
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_rb {unsigned int back_thres; int nr_entries; int mem; int sync; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct pblk_rb*,unsigned int,unsigned int,int ) ;
 scalar_t__ FUNC_2 (struct pblk_rb*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct pblk_rb *VAR_0, unsigned int VAR_1,
          unsigned int *VAR_2)
{
 unsigned int VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5;

 VAR_4 = FUNC_0(VAR_0->sync);
 VAR_3 = FUNC_0(VAR_0->mem);

 VAR_5 = VAR_1 + VAR_0->back_thres;

 if (FUNC_1(VAR_0, VAR_3, VAR_4, VAR_0->nr_entries) < VAR_5)
  return 0;

 if (FUNC_2(VAR_0, VAR_1, VAR_3, VAR_4))
  return 0;

 *VAR_2 = VAR_3;

 return 1;
}
