
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;
typedef int jq_state ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 size_t FUNC_5 (int ) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (char const*,char const*,size_t) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static jv FUNC_10(jq_state *VAR_1, jv VAR_2, jv VAR_3) {
  if (FUNC_3(VAR_2) != VAR_0 || FUNC_3(VAR_3) != VAR_0)
    return FUNC_9(VAR_2, VAR_3, FUNC_4("endswith() requires string inputs"));
  const char *VAR_4 = FUNC_6(VAR_2);
  const char *VAR_5 = FUNC_6(VAR_3);
  size_t VAR_6 = FUNC_5(FUNC_0(VAR_2));
  size_t VAR_7 = FUNC_5(FUNC_0(VAR_3));
  jv VAR_8;;

  if (VAR_6 < VAR_7 ||
     FUNC_8(VAR_4 + (VAR_6 - VAR_7), VAR_5, VAR_7) != 0)
    VAR_8 = FUNC_1();
  else
    VAR_8 = FUNC_7();
  FUNC_2(VAR_2);
  FUNC_2(VAR_3);
  return VAR_8;
}
