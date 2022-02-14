
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_xor_v2_device {scalar_t__ dma_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct mv_xor_v2_device *VAR_3)
{
 FUNC_0(VAR_0,
        VAR_3->dma_base + VAR_1);

 return VAR_2;
}
