
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int object_old_n; int* object_indexes; char* object_data; char** object_names; } ;
typedef TYPE_1__ user ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;

char *FUNC_1 (user *VAR_1, int VAR_2) {
  FUNC_0 (VAR_1, VAR_2);

  if (VAR_2 <= VAR_1->object_old_n) {
    if (VAR_1->object_indexes[VAR_2] & VAR_0) {
      return *((char **)(VAR_1->object_data + (VAR_1->object_indexes[VAR_2] & ~VAR_0)));
    } else {
      return (VAR_1->object_data + VAR_1->object_indexes[VAR_2]);
    }
  } else {
    return VAR_1->object_names[VAR_2 - VAR_1->object_old_n];
  }
}
