
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_dma_desc_hw {int m2; int m3; int m0; int m1; } ;
typedef int __le64 ;


 int FUNC_0 (char*) ;

__attribute__((used)) static __le64 *FUNC_1(struct xgene_dma_desc_hw *VAR_0, int VAR_1)
{
 switch (VAR_1) {
 case 0:
  return &VAR_0->m1;
 case 1:
  return &VAR_0->m0;
 case 2:
  return &VAR_0->m3;
 case 3:
  return &VAR_0->m2;
 default:
  FUNC_0("Invalid dma descriptor index\n");
 }

 return ((void*)0);
}
