
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct artpec6_crypto_req_common {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct artpec6_crypto_req_common*,void*,unsigned int,int ,int *) ;
 int FUNC_1 (struct artpec6_crypto_req_common*,int ,unsigned int,int) ;

__attribute__((used)) static int
FUNC_2(struct artpec6_crypto_req_common *VAR_1,
     void *VAR_2, unsigned int VAR_3, bool VAR_4)
{
 dma_addr_t VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3,
        VAR_0, &VAR_5);
 if (VAR_6)
  return VAR_6;

 return FUNC_1(VAR_1, VAR_5, VAR_3, VAR_4);
}
