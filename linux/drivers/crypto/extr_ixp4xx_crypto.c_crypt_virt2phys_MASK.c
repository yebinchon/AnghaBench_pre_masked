
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypt_ctl {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ VAR_0 ;
 struct crypt_ctl* VAR_1 ;

__attribute__((used)) static inline dma_addr_t FUNC_0(struct crypt_ctl *VAR_2)
{
 return VAR_0 + (VAR_2 - VAR_1) * sizeof(struct crypt_ctl);
}
