
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int object_id_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static inline int FUNC_3 (object_id_t VAR_6) {
  int VAR_7;
  while (FUNC_0(VAR_0 < VAR_1) && (VAR_7 = FUNC_2 (FUNC_1 (VAR_0, 0), VAR_6)) < 0) {
    VAR_0 += VAR_5;
  }






  if (*VAR_0 == VAR_2) {
    return 0;
  }

  if (!VAR_7) {
    VAR_0 += VAR_5;
    VAR_3 += VAR_4 ? VAR_0[-1] : 1;
  }
  return 0;
}
