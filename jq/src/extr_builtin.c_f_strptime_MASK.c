
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tm ;
struct tm {int tm_wday; int tm_yday; scalar_t__ tm_mday; int tm_mon; } ;
typedef int jv ;
typedef int jq_state ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*,char const*) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (struct tm*,int ,int) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (struct tm*) ;
 int FUNC_10 (struct tm*) ;
 scalar_t__ FUNC_11 (char const*,char*) ;
 char* FUNC_12 (char const*,char const*,struct tm*) ;
 int FUNC_13 (struct tm*) ;

__attribute__((used)) static jv FUNC_14(jq_state *VAR_1, jv VAR_2, jv VAR_3) {
  if (FUNC_3(VAR_2) != VAR_0 || FUNC_3(VAR_3) != VAR_0) {
    return FUNC_8(VAR_2, VAR_3, FUNC_4("strptime/1 requires string inputs and arguments"));
  }

  struct tm VAR_4;
  FUNC_7(&VAR_4, 0, sizeof(VAR_4));
  VAR_4.tm_wday = 8;
  VAR_4.tm_yday = 367;
  const char *VAR_5 = FUNC_6(VAR_2);
  const char *VAR_6 = FUNC_6(VAR_3);


  if (FUNC_11(VAR_6, "%Y-%m-%dT%H:%M:%SZ")) {
    return FUNC_8(VAR_2, VAR_3, FUNC_4("strptime/1 only supports ISO 8601 on this platform"));
  }

  const char *VAR_7 = FUNC_12(VAR_5, VAR_6, &VAR_4);
  if (VAR_7 == ((void*)0) || (*VAR_7 != '\0' && !FUNC_0(*VAR_7))) {
    return FUNC_8(VAR_2, VAR_3, FUNC_5("date \"%s\" does not match format \"%s\"", VAR_5, VAR_6));
  }
  FUNC_2(VAR_3);
  if (VAR_4.tm_wday == 8 && VAR_4.tm_mday != 0 && VAR_4.tm_mon >= 0 && VAR_4.tm_mon <= 11)
    FUNC_9(&VAR_4);
  if (VAR_4.tm_yday == 367 && VAR_4.tm_mday != 0 && VAR_4.tm_mon >= 0 && VAR_4.tm_mon <= 11)
    FUNC_10(&VAR_4);

  jv VAR_8 = FUNC_13(&VAR_4);
  if (*VAR_7 != '\0')
    VAR_8 = FUNC_1(VAR_8, FUNC_4(VAR_7));
  FUNC_2(VAR_2);
  return VAR_8;
}
