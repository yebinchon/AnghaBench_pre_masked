
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protection_domain {int lock; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct protection_domain*) ;
 int FUNC_1 (struct protection_domain*,int ,size_t) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct protection_domain *VAR_1,
  dma_addr_t VAR_2, size_t VAR_3)
{
 if (FUNC_4(VAR_0)) {
  unsigned long VAR_4;

  FUNC_2(&VAR_1->lock, VAR_4);
  FUNC_1(VAR_1, VAR_2, VAR_3);
  FUNC_0(VAR_1);
  FUNC_3(&VAR_1->lock, VAR_4);
 }
}
