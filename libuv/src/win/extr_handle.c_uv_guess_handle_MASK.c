
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_handle_type ;
typedef scalar_t__ uv_file ;
typedef int HANDLE ;
typedef int DWORD ;





 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;

uv_handle_type FUNC_3(uv_file VAR_4) {
  HANDLE VAR_5;
  DWORD VAR_6;

  if (VAR_4 < 0) {
    return VAR_3;
  }

  VAR_5 = FUNC_2(VAR_4);

  switch (FUNC_1(VAR_5)) {
    case 130:
      if (FUNC_0(VAR_5, &VAR_6)) {
        return VAR_2;
      } else {
        return VAR_0;
      }

    case 128:
      return VAR_1;

    case 129:
      return VAR_0;

    default:
      return VAR_3;
  }
}
