
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpaa2_caam_priv {scalar_t__ domain; } ;
typedef int phys_addr_t ;
typedef int dma_addr_t ;


 int FUNC_0 (scalar_t__,int ) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void *FUNC_2(struct dpaa2_caam_priv *VAR_0,
         dma_addr_t VAR_1)
{
 phys_addr_t VAR_2;

 VAR_2 = VAR_0->domain ? FUNC_0(VAR_0->domain, VAR_1) :
       VAR_1;

 return FUNC_1(VAR_2);
}
