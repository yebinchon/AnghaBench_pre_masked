
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int const*,int ,int,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (intptr_t,int ) ;
 int FUNC_4 (int ) ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_5(wchar_t const *VAR_13, int VAR_14, ...)
{
 HANDLE VAR_15;
 int VAR_16;
 DWORD VAR_17 = (VAR_14 & VAR_10) ? VAR_6 : VAR_7;


 if ((VAR_14 & ~VAR_10) != (VAR_11 | VAR_8))
  return VAR_12 = VAR_0, -1;





 VAR_15 = FUNC_1(VAR_13, VAR_1,
   VAR_4 | VAR_3,
   ((void*)0), VAR_17, VAR_2, ((void*)0));
 if (VAR_15 == VAR_5)
  return VAR_12 = FUNC_4(FUNC_2()), -1;







 VAR_16 = FUNC_3((intptr_t)VAR_15, VAR_9);
 if (VAR_16 < 0)
  FUNC_0(VAR_15);
 return VAR_16;
}
