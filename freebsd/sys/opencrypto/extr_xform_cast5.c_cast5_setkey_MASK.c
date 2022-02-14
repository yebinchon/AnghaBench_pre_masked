
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int cast_key ;


 int VAR_0 ;
 int * FUNC_0 (int,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int const*,int) ;

__attribute__((used)) static int
FUNC_2(u_int8_t **VAR_4, const u_int8_t *VAR_5, int VAR_6)
{
 int VAR_7;

 *VAR_4 = FUNC_0(sizeof(cast_key), VAR_1, VAR_2|VAR_3);
 if (*VAR_4 != ((void*)0)) {
  FUNC_1((cast_key *)*VAR_4, VAR_5, VAR_6);
  VAR_7 = 0;
 } else
  VAR_7 = VAR_0;
 return VAR_7;
}
