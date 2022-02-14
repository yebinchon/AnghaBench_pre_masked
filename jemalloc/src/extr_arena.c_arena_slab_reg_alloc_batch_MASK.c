
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* bitmap; } ;
typedef TYPE_1__ slab_data_t ;
typedef int extent_t ;
typedef scalar_t__ bitmap_t ;
struct TYPE_6__ {size_t reg_size; int bitmap_info; } ;
typedef TYPE_2__ bin_info_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,int *) ;
 size_t FUNC_2 (scalar_t__*,int *) ;
 size_t FUNC_3 (scalar_t__*) ;
 scalar_t__ FUNC_4 (int *) ;
 unsigned int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned int) ;
 TYPE_1__* FUNC_7 (int *) ;
 size_t FUNC_8 (scalar_t__) ;

__attribute__((used)) static void
FUNC_9(extent_t *VAR_1, const bin_info_t *VAR_2,
      unsigned VAR_3, void** VAR_4) {
 slab_data_t *VAR_5 = FUNC_7(VAR_1);

 FUNC_0(FUNC_5(VAR_1) >= VAR_3);
 FUNC_0(!FUNC_1(VAR_5->bitmap, &VAR_2->bitmap_info));


 for (unsigned VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  size_t VAR_7 = FUNC_2(VAR_5->bitmap,
        &VAR_2->bitmap_info);
  *(VAR_4 + VAR_6) = (void *)((uintptr_t)FUNC_4(VAR_1) +
      (uintptr_t)(VAR_2->reg_size * VAR_7));
 }
 FUNC_6(VAR_1, VAR_3);
}
