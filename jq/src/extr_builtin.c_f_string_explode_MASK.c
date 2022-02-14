
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;
typedef int jq_state ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static jv FUNC_4(jq_state *VAR_1, jv VAR_2) {
  if (FUNC_0(VAR_2) != VAR_0) {
    return FUNC_3(VAR_2, FUNC_1("explode input must be a string"));
  }
  return FUNC_2(VAR_2);
}
