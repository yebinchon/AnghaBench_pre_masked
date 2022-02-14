
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
 int VAR_0 ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int) ;
 TYPE_2__ VAR_1 ;
 int * VAR_2 ;

user *FUNC_3 (int VAR_3) {
  int VAR_4 = FUNC_2 (VAR_3);
  if (VAR_4 == -1) {
    return ((void*)0);
  }

  FUNC_0 (VAR_4 + 1 < VAR_1.to.size);

  user *VAR_5 = &VAR_2[VAR_4];

  if (VAR_0 == 1) {
    FUNC_0 (FUNC_1 (VAR_5, VAR_4, 1));
  }

  return VAR_5;
}
