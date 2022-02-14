
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stats; int slabs_full; int slabs_nonfull; int * slabcur; int lock; } ;
typedef TYPE_1__ bin_t ;
typedef int bin_stats_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char*,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,int ,int) ;

bool
FUNC_4(bin_t *VAR_3) {
 if (FUNC_2(&VAR_3->lock, "bin", VAR_0,
     VAR_2)) {
  return 1;
 }
 VAR_3->slabcur = ((void*)0);
 FUNC_0(&VAR_3->slabs_nonfull);
 FUNC_1(&VAR_3->slabs_full);
 if (VAR_1) {
  FUNC_3(&VAR_3->stats, 0, sizeof(bin_stats_t));
 }
 return 0;
}
