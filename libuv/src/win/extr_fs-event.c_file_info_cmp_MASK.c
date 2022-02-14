
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int FUNC_0 (int *,int *,size_t) ;
 size_t FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(WCHAR* VAR_0, WCHAR* VAR_1, size_t VAR_2) {
  size_t VAR_3;

  if (VAR_0 == ((void*)0))
    return -1;

  VAR_3 = FUNC_1(VAR_0);





  if (VAR_3 != (VAR_2 / sizeof(WCHAR)))
    return -1;

  return FUNC_0(VAR_0, VAR_1, VAR_3);
}
