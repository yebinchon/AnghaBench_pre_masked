
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int cchar_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int*,int ,int ,int *) ;

__attribute__((used)) static cchar_t *
FUNC_2(wchar_t VAR_2)
{
 static cchar_t VAR_3;
 wchar_t VAR_4[2];

 VAR_4[0] = VAR_2;
 VAR_4[1] = L'\0';

 if (FUNC_1(&VAR_3, VAR_4, VAR_0, 0, ((void*)0)) != VAR_1)
  FUNC_0("settchar(3) failure");

 return (&VAR_3);
}
