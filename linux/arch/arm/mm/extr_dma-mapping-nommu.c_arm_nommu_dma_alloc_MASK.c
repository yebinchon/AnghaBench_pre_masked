
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (size_t,int *) ;

__attribute__((used)) static void *FUNC_2(struct device *VAR_0, size_t VAR_1,
     dma_addr_t *VAR_2, gfp_t VAR_3,
     unsigned long VAR_4)

{
 void *VAR_5 = FUNC_1(VAR_1, VAR_2);
 FUNC_0(VAR_5 == ((void*)0));
 return VAR_5;
}
