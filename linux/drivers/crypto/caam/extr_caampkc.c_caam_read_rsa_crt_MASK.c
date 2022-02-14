
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const**,size_t*) ;
 int * FUNC_1 (size_t,int) ;
 int FUNC_2 (int *,int const*,size_t) ;

__attribute__((used)) static u8 *FUNC_3(const u8 *VAR_2, size_t VAR_3, size_t VAR_4)
{
 u8 *VAR_5;

 FUNC_0(&VAR_2, &VAR_3);
 if (!VAR_3)
  return ((void*)0);

 VAR_5 = FUNC_1(VAR_4, VAR_0 | VAR_1);
 if (!VAR_5)
  return ((void*)0);

 FUNC_2(VAR_5 + (VAR_4 - VAR_3), VAR_2, VAR_3);

 return VAR_5;
}
