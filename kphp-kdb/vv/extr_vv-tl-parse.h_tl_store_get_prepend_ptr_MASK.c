
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* (* store_get_prepend_ptr ) (int) ;} ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline void *FUNC_3 (int VAR_3) {
  FUNC_0 (FUNC_2 (VAR_3) >= 0);
  if (!VAR_3) { return 0; }
  FUNC_0 (VAR_3 >= 0);
  void *VAR_4 = VAR_0->store_get_prepend_ptr (VAR_3);
  VAR_1 += VAR_3;
  VAR_2 -= VAR_3;
  return VAR_4;
}
