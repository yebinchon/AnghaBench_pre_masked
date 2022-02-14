
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct gcm_aes_ctx {int ghash_key; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *,int const*,int *,int *,int ) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (int,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(u64 VAR_2[], const u8 *VAR_3, int VAR_4, u8 VAR_5[],
      int *VAR_6, struct gcm_aes_ctx *VAR_7)
{
 if (*VAR_6 > 0) {
  int VAR_8 = FUNC_2(VAR_4, VAR_0 - *VAR_6);

  FUNC_1(&VAR_5[*VAR_6], VAR_3, VAR_8);

  *VAR_6 += VAR_8;
  VAR_3 += VAR_8;
  VAR_4 -= VAR_8;
 }

 if (VAR_4 >= VAR_0 || *VAR_6 == VAR_0) {
  int VAR_9 = VAR_4 / VAR_0;

  FUNC_0(VAR_9, VAR_2, VAR_3, &VAR_7->ghash_key,
    *VAR_6 ? VAR_5 : ((void*)0),
    VAR_1);

  VAR_3 += VAR_9 * VAR_0;
  VAR_4 %= VAR_0;
  *VAR_6 = 0;
 }

 if (VAR_4 > 0) {
  FUNC_1(VAR_5, VAR_3, VAR_4);
  *VAR_6 = VAR_4;
 }
}
