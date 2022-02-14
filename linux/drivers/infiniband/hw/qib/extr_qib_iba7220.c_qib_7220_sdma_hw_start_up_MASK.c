
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_pportdata {scalar_t__* sdma_head_dma; } ;


 int FUNC_0 (struct qib_pportdata*) ;
 int FUNC_1 (struct qib_pportdata*,int ) ;

__attribute__((used)) static void FUNC_2(struct qib_pportdata *VAR_0)
{
 FUNC_0(VAR_0);
 FUNC_1(VAR_0, 0);
 VAR_0->sdma_head_dma[0] = 0;
}
