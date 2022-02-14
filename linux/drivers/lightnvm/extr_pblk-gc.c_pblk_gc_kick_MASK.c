
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_gc {int gc_timer; int gc_ts; scalar_t__ gc_enabled; } ;
struct pblk {struct pblk_gc gc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct pblk_gc*) ;
 int FUNC_3 (struct pblk_gc*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct pblk *VAR_2)
{
 struct pblk_gc *VAR_3 = &VAR_2->gc;

 FUNC_3(VAR_3);
 FUNC_2(VAR_3);


 if (VAR_3->gc_enabled) {
  FUNC_4(VAR_3->gc_ts);
  FUNC_0(&VAR_3->gc_timer,
     VAR_1 + FUNC_1(VAR_0));
 }
}
