
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t szind_t ;
struct TYPE_5__ {int bitmap; } ;
typedef TYPE_1__ slab_data_t ;
typedef int extent_t ;
struct TYPE_6__ {scalar_t__ nregs; int bitmap_info; } ;
typedef TYPE_2__ bin_info_t ;


 size_t FUNC_0 (int *,size_t,void*) ;
 int FUNC_1 (int) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (int ,int *,size_t) ;
 int FUNC_3 (int ,int *,size_t) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(extent_t *VAR_1, slab_data_t *VAR_2, void *VAR_3) {
 szind_t VAR_4 = FUNC_6(VAR_1);
 const bin_info_t *VAR_5 = &VAR_0[VAR_4];
 size_t VAR_6 = FUNC_0(VAR_1, VAR_4, VAR_3);

 FUNC_1(FUNC_4(VAR_1) < VAR_5->nregs);

 FUNC_1(FUNC_2(VAR_2->bitmap, &VAR_5->bitmap_info, VAR_6));

 FUNC_3(VAR_2->bitmap, &VAR_5->bitmap_info, VAR_6);
 FUNC_5(VAR_1);
}
