
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct aes_xts_ctx {int key2; int key1; } ;


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
 struct aes_xts_ctx *VAR_8;

 if (VAR_7 != 32 && VAR_7 != 64)
  return VAR_0;

 *VAR_5 = FUNC_0(sizeof(struct aes_xts_ctx), VAR_2,
     VAR_3 | VAR_4);
 if (*VAR_5 == ((void*)0))
  return VAR_1;
 VAR_8 = (struct aes_xts_ctx *)*VAR_5;

 FUNC_1(&VAR_8->key1, VAR_6, VAR_7 * 4);
 FUNC_1(&VAR_8->key2, VAR_6 + (VAR_7 / 2), VAR_7 * 4);

 return 0;
}
