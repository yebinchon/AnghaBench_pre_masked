
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,char const*,int,int *,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(const char* VAR_2, WCHAR** VAR_3) {
  int VAR_4, VAR_5;
  WCHAR* VAR_6;

  VAR_4 = FUNC_1(VAR_0,
                               0,
                               VAR_2,
                               -1,
                               ((void*)0),
                               0);
  if (VAR_4 <= 0) {
    return FUNC_0();
  }

  VAR_6 = (WCHAR*) FUNC_3(VAR_4 * sizeof(WCHAR));
  if (VAR_6 == ((void*)0)) {
    return VAR_1;
  }

  VAR_5 = FUNC_1(VAR_0,
                          0,
                          VAR_2,
                          -1,
                          VAR_6,
                          VAR_4);
  FUNC_2(VAR_5 == VAR_4);

  *VAR_3 = VAR_6;
  return 0;
}
