
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_sa_manager {int * hole; } ;
struct radeon_sa_bo {unsigned int soffset; unsigned int eoffset; int olist; int flist; struct radeon_sa_manager* manager; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 unsigned int FUNC_2 (struct radeon_sa_manager*) ;
 unsigned int FUNC_3 (struct radeon_sa_manager*) ;

__attribute__((used)) static bool FUNC_4(struct radeon_sa_manager *VAR_0,
       struct radeon_sa_bo *VAR_1,
       unsigned VAR_2, unsigned VAR_3)
{
 unsigned VAR_4, VAR_5, VAR_6;

 VAR_4 = FUNC_3(VAR_0);
 VAR_5 = FUNC_2(VAR_0);
 VAR_6 = (VAR_3 - (VAR_4 % VAR_3)) % VAR_3;

 if ((VAR_5 - VAR_4) >= (VAR_2 + VAR_6)) {
  VAR_4 += VAR_6;

  VAR_1->manager = VAR_0;
  VAR_1->soffset = VAR_4;
  VAR_1->eoffset = VAR_4 + VAR_2;
  FUNC_1(&VAR_1->olist, VAR_0->hole);
  FUNC_0(&VAR_1->flist);
  VAR_0->hole = &VAR_1->olist;
  return 1;
 }
 return 0;
}
