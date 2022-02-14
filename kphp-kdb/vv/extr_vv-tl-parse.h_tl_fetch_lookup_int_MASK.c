
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* fetch_lookup ) (int*,int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int*,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2 (void) {
  if (FUNC_1 (4) < 0) {
    return -1;
  }
  int VAR_1;
  VAR_0->fetch_lookup (&VAR_1, 4);
  return VAR_1;
}
