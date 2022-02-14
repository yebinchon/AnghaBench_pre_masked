
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_cipher_parms {int* iv_buf; int iv_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int*,int) ;

void FUNC_1(unsigned int VAR_3,
   struct spu_cipher_parms *VAR_4,
   unsigned int VAR_5, unsigned int VAR_6,
   bool VAR_7, bool VAR_8)
{
 int VAR_9;






 if (VAR_8)
  VAR_9 = VAR_2;
 else
  VAR_9 = ((VAR_4->iv_buf[0] & VAR_0) >>
        VAR_1) + 1;


 VAR_4->iv_len -= (1 + VAR_9);
 FUNC_0(VAR_4->iv_buf, &VAR_4->iv_buf[1],
  VAR_4->iv_len);
}
