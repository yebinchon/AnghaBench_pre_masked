
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;
typedef enum cmp_op { ____Placeholder_cmp_op } cmp_op ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static jv FUNC_3(jv VAR_4, jv VAR_5, jv VAR_6, enum cmp_op VAR_7) {
  FUNC_2(VAR_4);
  int VAR_8 = FUNC_1(VAR_5, VAR_6);
  return FUNC_0((VAR_7 == VAR_2 && VAR_8 < 0) ||
                 (VAR_7 == VAR_3 && VAR_8 <= 0) ||
                 (VAR_7 == VAR_1 && VAR_8 >= 0) ||
                 (VAR_7 == VAR_0 && VAR_8 > 0));
}
