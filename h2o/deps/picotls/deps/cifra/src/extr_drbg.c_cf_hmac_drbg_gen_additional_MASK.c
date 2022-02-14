
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int cf_hmac_drbg ;


 int VAR_0 ;
 size_t FUNC_0 (int ,size_t) ;
 int FUNC_1 (int *,void const*,size_t,int *,size_t) ;

void FUNC_2(cf_hmac_drbg *VAR_1,
                                 const void *VAR_2, size_t VAR_3,
                                 void *VAR_4, size_t VAR_5)
{
  uint8_t *VAR_6 = VAR_4;

  while (VAR_5 != 0)
  {
    size_t VAR_7 = FUNC_0(VAR_0, VAR_5);
    FUNC_1(VAR_1, VAR_2, VAR_3, VAR_6, VAR_7);
    VAR_6 += VAR_7;
    VAR_5 -= VAR_7;


    VAR_2 = ((void*)0);
    VAR_3 = 0;
  }
}
