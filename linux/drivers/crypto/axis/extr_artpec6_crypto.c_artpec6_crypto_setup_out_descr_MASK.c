
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct artpec6_crypto_req_common {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct artpec6_crypto_req_common*,void*,unsigned int,int ,int *) ;
 int FUNC_1 (struct artpec6_crypto_req_common*,int ,unsigned int,int) ;
 int FUNC_2 (struct artpec6_crypto_req_common*,void*,unsigned int,int) ;

__attribute__((used)) static int
FUNC_3(struct artpec6_crypto_req_common *VAR_1,
          void *VAR_2, unsigned int VAR_3, bool VAR_4,
          bool VAR_5)
{
 if (VAR_5 && VAR_3 < 7) {
  return FUNC_2(VAR_1, VAR_2, VAR_3,
           VAR_4);
 } else {
  int VAR_6;
  dma_addr_t VAR_7;

  VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3,
         VAR_0,
         &VAR_7);
  if (VAR_6)
   return VAR_6;

  return FUNC_1(VAR_1, VAR_7,
          VAR_3, VAR_4);
 }
}
