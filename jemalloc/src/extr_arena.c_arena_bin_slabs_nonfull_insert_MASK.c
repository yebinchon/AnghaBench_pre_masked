
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int extent_t ;
struct TYPE_4__ {int nonfull_slabs; } ;
struct TYPE_5__ {TYPE_1__ stats; int slabs_nonfull; } ;
typedef TYPE_2__ bin_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(bin_t *VAR_1, extent_t *VAR_2) {
 FUNC_0(FUNC_2(VAR_2) > 0);
 FUNC_1(&VAR_1->slabs_nonfull, VAR_2);
 if (VAR_0) {
  VAR_1->stats.nonfull_slabs++;
 }
}
