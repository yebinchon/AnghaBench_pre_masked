
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int user ;
struct TYPE_3__ {int size; } ;
struct TYPE_4__ {TYPE_1__ to; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 TYPE_2__ VAR_1 ;
 int * VAR_2 ;

user *FUNC_4 (int VAR_3) {
  int VAR_4 = FUNC_2 (VAR_3);
  if (VAR_4 == -1) {
    return ((void*)0);
  }

  FUNC_0 (VAR_4 < VAR_1.to.size);
  if (VAR_4 + 1 == VAR_1.to.size && VAR_0) {
    FUNC_3();
    FUNC_1 (13);
  }
  FUNC_0 (VAR_4 + 1 < VAR_1.to.size);
  return &VAR_2[VAR_4];
}
