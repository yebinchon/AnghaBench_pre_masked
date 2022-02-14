
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blockif_sig_elem {int bse_mtx; int bse_cond; scalar_t__ bse_pending; scalar_t__ bse_next; } ;
typedef enum ev_type { ____Placeholder_ev_type } ev_type ;


 int FUNC_0 (uintptr_t*,uintptr_t,uintptr_t) ;
 struct blockif_sig_elem* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(int VAR_1, enum ev_type VAR_2, void *VAR_3)
{
 struct blockif_sig_elem *VAR_4;

 for (;;) {




  do {
   VAR_4 = VAR_0;
   if (VAR_4 == ((void*)0))
    return;
  } while (!FUNC_0((uintptr_t *)&VAR_0,
         (uintptr_t)VAR_4,
         (uintptr_t)VAR_4->bse_next));

  FUNC_2(&VAR_4->bse_mtx);
  VAR_4->bse_pending = 0;
  FUNC_1(&VAR_4->bse_cond);
  FUNC_3(&VAR_4->bse_mtx);
 }
}
