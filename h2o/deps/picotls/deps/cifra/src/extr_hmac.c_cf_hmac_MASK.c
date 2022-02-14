
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint8_t ;
typedef int cf_hmac_ctx ;
typedef int cf_chash ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,int const*) ;
 int FUNC_2 (int *,int const*,int const*,size_t) ;
 int FUNC_3 (int *,int const*,size_t) ;

void FUNC_4(const uint8_t *VAR_0, size_t VAR_1,
             const uint8_t *VAR_2, size_t VAR_3,
             uint8_t *VAR_4,
             const cf_chash *VAR_5)
{
  cf_hmac_ctx VAR_6;

  FUNC_0(VAR_4);
  FUNC_0(VAR_5);

  FUNC_2(&VAR_6, VAR_5, VAR_0, VAR_1);
  FUNC_3(&VAR_6, VAR_2, VAR_3);
  FUNC_1(&VAR_6, VAR_4);
}
