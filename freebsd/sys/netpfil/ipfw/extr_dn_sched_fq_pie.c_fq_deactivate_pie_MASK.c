
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pie_status {int sflags; int lock_mtx; int aqm_pie_callout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) __inline static void
FUNC_3(struct pie_status *VAR_2)
{
 FUNC_1(&VAR_2->lock_mtx);
 VAR_2->sflags &= ~(VAR_0 | VAR_1);
 FUNC_0(&VAR_2->aqm_pie_callout);

 FUNC_2(&VAR_2->lock_mtx);
}
