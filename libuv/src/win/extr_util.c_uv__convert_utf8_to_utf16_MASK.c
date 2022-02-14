
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,char const*,int,int*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int) ;
 int FUNC_4 (int ) ;

int FUNC_5(const char* VAR_3, int VAR_4, WCHAR** VAR_5) {
  int VAR_6;

  if (VAR_3 == ((void*)0))
    return VAR_1;


  VAR_6 = FUNC_1(VAR_0, 0, VAR_3, VAR_4, ((void*)0), 0);

  if (VAR_6 == 0)
    return FUNC_4(FUNC_0());




  *VAR_5 = FUNC_3(sizeof(WCHAR) * (VAR_6 + 1));

  if (*VAR_5 == ((void*)0))
    return VAR_2;


  VAR_6 = FUNC_1(VAR_0, 0, VAR_3, VAR_4, *VAR_5, VAR_6);

  if (VAR_6 == 0) {
    FUNC_2(*VAR_5);
    *VAR_5 = ((void*)0);
    return FUNC_4(FUNC_0());
  }

  (*VAR_5)[VAR_6] = L'\0';
  return 0;
}
