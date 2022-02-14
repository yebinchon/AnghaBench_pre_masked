
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int object_id_t ;
typedef int file_revlist_entry_t ;


 int FUNC_0 (int *,long) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static long FUNC_2 (object_id_t VAR_0, file_revlist_entry_t *VAR_1, int VAR_2) {
  long VAR_3 = -1, VAR_4 = VAR_2, VAR_5;
  while (VAR_4 - VAR_3 > 1) {
    VAR_5 = (VAR_4 + VAR_3) >> 1;
    if (FUNC_1 (FUNC_0(VAR_1,VAR_5), VAR_0)) {
      VAR_3 = VAR_5;
    } else {
      VAR_4 = VAR_5;
    }
  }
  return VAR_4;
}
