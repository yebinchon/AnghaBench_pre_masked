
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {int dummy; } ;
typedef int jv ;
typedef int jq_state ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct tm*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (struct tm*) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static jv FUNC_9(jq_state *VAR_1, jv VAR_2) {
  if (FUNC_3(VAR_2) != VAR_0)
    return FUNC_8(VAR_2, FUNC_6("mktime requires array inputs"));
  if (FUNC_1(FUNC_2(VAR_2)) < 6)
    return FUNC_8(VAR_2, FUNC_6("mktime requires parsed datetime inputs"));
  struct tm VAR_3;
  if (!FUNC_0(VAR_2, &VAR_3))
    return FUNC_4(FUNC_6("mktime requires parsed datetime inputs"));
  time_t VAR_4 = FUNC_7(&VAR_3);
  if (VAR_4 == (time_t)-1)
    return FUNC_4(FUNC_6("invalid gmtime representation"));
  if (VAR_4 == (time_t)-2)
    return FUNC_4(FUNC_6("mktime not supported on this platform"));
  return FUNC_5(VAR_4);
}
