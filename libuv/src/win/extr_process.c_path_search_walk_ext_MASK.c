
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int * FUNC_0 (int const*,size_t,int const*,size_t,char*,int,int *,size_t) ;

__attribute__((used)) static WCHAR* FUNC_1(const WCHAR *VAR_0,
                                   size_t VAR_1,
                                   const WCHAR *VAR_2,
                                   size_t VAR_3,
                                   WCHAR *VAR_4,
                                   size_t VAR_5,
                                   int VAR_6) {
  WCHAR* VAR_7;


  if (VAR_6) {
    VAR_7 = FUNC_0(VAR_0, VAR_1,
                                   VAR_2, VAR_3,
                                   L"", 0,
                                   VAR_4, VAR_5);
    if (VAR_7 != ((void*)0)) {
      return VAR_7;
    }
  }


  VAR_7 = FUNC_0(VAR_0, VAR_1,
                                 VAR_2, VAR_3,
                                 L"com", 3,
                                 VAR_4, VAR_5);
  if (VAR_7 != ((void*)0)) {
    return VAR_7;
  }


  VAR_7 = FUNC_0(VAR_0, VAR_1,
                                 VAR_2, VAR_3,
                                 L"exe", 3,
                                 VAR_4, VAR_5);
  if (VAR_7 != ((void*)0)) {
    return VAR_7;
  }

  return ((void*)0);
}
