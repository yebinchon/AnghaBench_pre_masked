
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* list_file_offset; } ;
struct TYPE_3__ {int tot_lists; void* list_data_offset; } ;


 TYPE_2__* FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (int) ;
 void* VAR_2 ;

__attribute__((used)) static inline void *FUNC_2 (int VAR_3) {
  FUNC_1 (VAR_3 >= 0 && VAR_3 < VAR_0.tot_lists);
  return VAR_1 + (FUNC_0(VAR_3)->list_file_offset - VAR_0.list_data_offset)



  ;
}
