
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
 TYPE_2__ VAR_0 ;
 int * VAR_1 ;

user *FUNC_2 (int VAR_2) {
  int VAR_3 = FUNC_1 (VAR_2);
  if (VAR_3 == -1) {
    return ((void*)0);
  }

  FUNC_0 (VAR_3 < VAR_0.to.size);
  return &VAR_1[VAR_3];
}
