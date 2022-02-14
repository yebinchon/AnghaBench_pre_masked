
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPWSTR ;
typedef int * HMODULE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int *,int,int ,int *,int ,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (char**,int *) ;

char *FUNC_6(DWORD VAR_8)
{
 LPWSTR VAR_9 = ((void*)0);
 HMODULE VAR_10 = ((void*)0);
 char *VAR_11 = ((void*)0);
 DWORD VAR_12 =
  VAR_0 | VAR_3;

 if (!VAR_8)
  return ((void*)0);
 FUNC_1(VAR_10);

 if (VAR_10)
  VAR_12 |= VAR_1;
 else
  VAR_12 |= VAR_2;

 if (FUNC_0(VAR_12, VAR_10, VAR_8,
  FUNC_4(VAR_4, VAR_5),
  (LPWSTR)&VAR_9, 0, ((void*)0))) {


  if (FUNC_5(&VAR_11, VAR_9) < 0)
   VAR_11 = ((void*)0);

  FUNC_3(VAR_9);
 }

 return VAR_11;
}
