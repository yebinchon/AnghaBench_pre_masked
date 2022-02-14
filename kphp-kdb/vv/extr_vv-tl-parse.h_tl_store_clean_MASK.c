
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* store_read_back ) (scalar_t__) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_2 (void) {
  FUNC_0 (VAR_0);
  VAR_1->store_read_back (VAR_2);
  VAR_3 += VAR_2;
  VAR_2 = 0;
  return 0;
}
