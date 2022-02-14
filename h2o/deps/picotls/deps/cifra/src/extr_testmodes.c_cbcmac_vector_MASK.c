
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int cf_cbcmac_stream ;
typedef int cf_aes_context ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,void const*,size_t) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,void const*,size_t) ;
 scalar_t__ FUNC_5 (int *,void const*,int) ;

__attribute__((used)) static void FUNC_6(const void *VAR_1, size_t VAR_2,
                          const void *VAR_3, size_t VAR_4,
                          const void *VAR_5, size_t VAR_6)
{
  uint8_t VAR_7[16];

  cf_aes_context VAR_8;
  FUNC_1(&VAR_8, VAR_3, VAR_4);

  cf_cbcmac_stream VAR_9;
  FUNC_2(&VAR_9, &VAR_0, &VAR_8);
  FUNC_4(&VAR_9, VAR_5, VAR_6);
  FUNC_3(&VAR_9, VAR_7);

  FUNC_0(sizeof VAR_7 == VAR_2);
  FUNC_0(FUNC_5(VAR_7, VAR_1, sizeof VAR_7) == 0);
}
