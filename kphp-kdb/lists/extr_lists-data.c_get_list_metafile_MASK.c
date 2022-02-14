
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int metafile_index; } ;
typedef TYPE_1__ list_t ;
typedef int list_id_t ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2 (list_id_t VAR_1) {
  int VAR_2 = FUNC_0 (VAR_1);
  if (VAR_2 < 0) {
    return -1;
  }
  list_t *VAR_3 = VAR_0[VAR_2];
  if (!VAR_3) {
    return FUNC_1 (VAR_1);
  }
  return VAR_3->metafile_index;
}
