
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int object_old_n; int * object_ratings; int * object_old_ratings; } ;
typedef TYPE_1__ user ;
typedef int rating ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int VAR_0 ;

rating *FUNC_2 (user *VAR_1, int VAR_2, int VAR_3) {
  FUNC_1 (VAR_1, VAR_2);
  FUNC_0 (0 <= VAR_3 && VAR_3 < VAR_0);

  if (VAR_2 <= VAR_1->object_old_n) {
    return &VAR_1->object_old_ratings[VAR_2 * VAR_0 + VAR_3];
  } else {
    return &VAR_1->object_ratings[(VAR_2 - VAR_1->object_old_n) * VAR_0 + VAR_3];
  }
}
