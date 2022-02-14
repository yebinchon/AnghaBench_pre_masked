
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int const*,int,int ,int *,int ,int ,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static HANDLE FUNC_2(const WCHAR* VAR_10, DWORD* VAR_11) {
  HANDLE VAR_12;





  VAR_12 = FUNC_0(VAR_10,
                           VAR_4 | VAR_5,
                           0,
                           ((void*)0),
                           VAR_7,
                           VAR_1,
                           ((void*)0));
  if (VAR_12 != VAR_6) {
    *VAR_11 = VAR_8 | VAR_9;
    return VAR_12;
  }






  if (FUNC_1() == VAR_0) {
    VAR_12 = FUNC_0(VAR_10,
                             VAR_4 | VAR_3,
                             0,
                             ((void*)0),
                             VAR_7,
                             VAR_1,
                             ((void*)0));

    if (VAR_12 != VAR_6) {
      *VAR_11 = VAR_8;
      return VAR_12;
    }
  }

  if (FUNC_1() == VAR_0) {
    VAR_12 = FUNC_0(VAR_10,
                             VAR_5 | VAR_2,
                             0,
                             ((void*)0),
                             VAR_7,
                             VAR_1,
                             ((void*)0));

    if (VAR_12 != VAR_6) {
      *VAR_11 = VAR_9;
      return VAR_12;
    }
  }

  return VAR_6;
}
