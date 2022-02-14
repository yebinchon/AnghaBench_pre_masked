
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int object_id_t ;
typedef int listree_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4 (listree_t *VAR_1, int VAR_2, int VAR_3, object_id_t VAR_4) {
  if (VAR_2 > VAR_3) {
    return;
  }
  int VAR_5 = (VAR_2 + VAR_3) >> 1;
  object_id_t VAR_6 = FUNC_1 (VAR_1, VAR_5);
  if (FUNC_2 (FUNC_0 (VAR_0, 0), VAR_6) <= 0) {
    FUNC_4 (VAR_1, VAR_2, VAR_5 - 1, VAR_6);
  }
  FUNC_3 (VAR_6);
  if (FUNC_2 (FUNC_0 (VAR_0, 0), VAR_4) <= 0) {
    FUNC_4 (VAR_1, VAR_5 + 1, VAR_3, VAR_4);
  }
}
