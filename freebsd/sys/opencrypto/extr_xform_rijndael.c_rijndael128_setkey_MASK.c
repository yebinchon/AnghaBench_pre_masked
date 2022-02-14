
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int rijndael_ctx ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int const*,int) ;

__attribute__((used)) static int
FUNC_2(u_int8_t **VAR_5, const u_int8_t *VAR_6, int VAR_7)
{
 int VAR_8;

 if (VAR_7 != 16 && VAR_7 != 24 && VAR_7 != 32)
  return (VAR_0);
 *VAR_5 = FUNC_0(sizeof(rijndael_ctx), VAR_2,
     VAR_3|VAR_4);
 if (*VAR_5 != ((void*)0)) {
  FUNC_1((rijndael_ctx *) *VAR_5, VAR_6,
      VAR_7 * 8);
  VAR_8 = 0;
 } else
  VAR_8 = VAR_1;
 return VAR_8;
}
