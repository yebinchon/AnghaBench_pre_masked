
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const**,size_t*) ;
 int * FUNC_1 (int const*,size_t,int) ;

__attribute__((used)) static inline u8 *FUNC_2(const u8 *VAR_2, size_t *VAR_3)
{

 FUNC_0(&VAR_2, VAR_3);
 if (!*VAR_3)
  return ((void*)0);

 return FUNC_1(VAR_2, *VAR_3, VAR_0 | VAR_1);
}
