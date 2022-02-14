
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_rl {int werr_lines; } ;
struct pblk_gc {scalar_t__ gc_active; } ;


 unsigned int FUNC_0 (int *) ;
 unsigned int FUNC_1 (struct pblk_rl*) ;
 unsigned int FUNC_2 (struct pblk_rl*) ;

__attribute__((used)) static bool FUNC_3(struct pblk_gc *VAR_0, struct pblk_rl *VAR_1)
{
 unsigned int VAR_2, VAR_3;
 unsigned int VAR_4 = FUNC_0(&VAR_1->werr_lines);

 VAR_3 = FUNC_1(VAR_1);
 VAR_2 = FUNC_2(VAR_1);


 return ((VAR_4 > 0) ||
  ((VAR_0->gc_active) && (VAR_3 > VAR_2)));
}
