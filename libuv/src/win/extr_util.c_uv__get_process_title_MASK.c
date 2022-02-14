
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int title_w ;
typedef int WCHAR ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int,int *) ;

__attribute__((used)) static int FUNC_2(void) {
  WCHAR VAR_2[VAR_0];

  if (!FUNC_0(VAR_2, sizeof(VAR_2) / sizeof(WCHAR))) {
    return -1;
  }

  if (FUNC_1(VAR_2, -1, &VAR_1) != 0)
    return -1;

  return 0;
}
