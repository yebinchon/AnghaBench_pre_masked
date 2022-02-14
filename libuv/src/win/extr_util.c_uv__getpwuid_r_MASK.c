
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_3__ {int uid; int gid; int * shell; int * homedir; int * username; } ;
typedef TYPE_1__ uv_passwd_t ;
typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int *,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int *,int,int **) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;

int FUNC_10(uv_passwd_t* VAR_6) {
  HANDLE VAR_7;
  wchar_t VAR_8[VAR_3 + 1];
  wchar_t VAR_9[VAR_1];
  DWORD VAR_10;
  int VAR_11;

  if (VAR_6 == ((void*)0))
    return VAR_4;


  if (FUNC_6(FUNC_2(), VAR_2, &VAR_7) == 0)
    return FUNC_9(FUNC_3());

  VAR_10 = FUNC_0(VAR_9);
  if (!FUNC_5(VAR_7, VAR_9, &VAR_10)) {
    VAR_11 = FUNC_3();
    FUNC_1(VAR_7);


    if (VAR_11 == VAR_0)
      return VAR_5;

    return FUNC_9(VAR_11);
  }

  FUNC_1(VAR_7);


  VAR_10 = FUNC_0(VAR_8);
  if (!FUNC_4(VAR_8, &VAR_10)) {
    VAR_11 = FUNC_3();


    if (VAR_11 == VAR_0)
      return VAR_5;

    return FUNC_9(VAR_11);
  }

  VAR_6->homedir = ((void*)0);
  VAR_11 = FUNC_7(VAR_9, -1, &VAR_6->homedir);

  if (VAR_11 != 0)
    return VAR_11;

  VAR_6->username = ((void*)0);
  VAR_11 = FUNC_7(VAR_8, -1, &VAR_6->username);

  if (VAR_11 != 0) {
    FUNC_8(VAR_6->homedir);
    return VAR_11;
  }

  VAR_6->shell = ((void*)0);
  VAR_6->uid = -1;
  VAR_6->gid = -1;

  return 0;
}
