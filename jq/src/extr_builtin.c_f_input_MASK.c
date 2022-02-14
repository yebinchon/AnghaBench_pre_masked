
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;
typedef int jq_state ;
typedef int (* jq_input_cb ) (int *,void*) ;


 int FUNC_0 (int *,int (*) (int *,void*),void**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static jv FUNC_7(jq_state *VAR_0, jv VAR_1) {
  FUNC_2(VAR_1);
  jq_input_cb VAR_2;
  void *VAR_3;
  FUNC_0(VAR_0, VAR_2, &VAR_3);
  if (VAR_2 == ((void*)0))
    return FUNC_4(FUNC_6("break"));
  jv VAR_4 = VAR_2(VAR_0, VAR_3);
  if (FUNC_5(VAR_4) || FUNC_3(FUNC_1(VAR_4)))
    return VAR_4;
  return FUNC_4(FUNC_6("break"));
}
