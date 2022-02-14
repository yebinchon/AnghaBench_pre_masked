
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;
typedef int jq_state ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static jv FUNC_5(jq_state *VAR_1, jv VAR_2, jv VAR_3) {
  if (FUNC_2(VAR_3) != VAR_0) {
    FUNC_1(VAR_3);
    return FUNC_4(VAR_2, "halt_error/1: number required");
  }
  FUNC_0(VAR_1, VAR_3, VAR_2);
  return FUNC_3();
}
