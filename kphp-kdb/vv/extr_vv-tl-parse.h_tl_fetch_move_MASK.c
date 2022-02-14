
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* fetch_move ) (int) ;} ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2 (int VAR_3) {
  if (FUNC_1 (VAR_3) < 0) {
    return -1;
  }
  VAR_0->fetch_move (VAR_3);
  VAR_1 += VAR_3;
  VAR_2 -= VAR_3;
  return VAR_3;
}
