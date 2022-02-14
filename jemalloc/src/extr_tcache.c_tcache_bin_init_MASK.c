
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t szind_t ;
struct TYPE_7__ {int lowbits; void* ptr; } ;
struct TYPE_8__ {int low_water_position; int full_position; TYPE_1__ cur_ptr; } ;
typedef TYPE_2__ cache_bin_t ;
struct TYPE_9__ {int stack_size; } ;


 int FUNC_0 (int) ;
 void* FUNC_1 (TYPE_2__*,size_t) ;
 scalar_t__ FUNC_2 (TYPE_2__*,size_t) ;
 int FUNC_3 (int) ;
 TYPE_4__* VAR_0 ;

__attribute__((used)) static bool
FUNC_4(cache_bin_t *VAR_1, szind_t VAR_2, uintptr_t *VAR_3) {
 FUNC_3(sizeof(VAR_1->cur_ptr) == sizeof(void *));





 void *VAR_4 = (void *)*VAR_3;
 uint32_t VAR_5 = VAR_0[VAR_2].stack_size;

 *VAR_3 += VAR_5;
 void *VAR_6 = (void *)*VAR_3;


 VAR_1->cur_ptr.ptr = VAR_6;
 VAR_1->low_water_position = VAR_1->cur_ptr.lowbits;
 VAR_1->full_position = (uint32_t)(uintptr_t)VAR_4;
 FUNC_0(VAR_1->cur_ptr.lowbits - VAR_1->full_position == VAR_5);
 FUNC_0(FUNC_2(VAR_1, VAR_2) == 0);
 FUNC_0(FUNC_1(VAR_1, VAR_2) == VAR_6);

 return 0;
}
