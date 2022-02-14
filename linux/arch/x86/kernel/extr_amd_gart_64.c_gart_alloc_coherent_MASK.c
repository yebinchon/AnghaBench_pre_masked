
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {scalar_t__ coherent_dma_mask; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 void* FUNC_1 (struct device*,size_t,int *,int ,unsigned long) ;
 int FUNC_2 (struct device*,size_t,void*,int ,unsigned long) ;
 int FUNC_3 (struct device*,int ,size_t,int ,unsigned long) ;
 int FUNC_4 () ;
 int VAR_2 ;
 unsigned long FUNC_5 (size_t) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (void*) ;

__attribute__((used)) static void *
FUNC_8(struct device *VAR_3, size_t VAR_4, dma_addr_t *VAR_5,
      gfp_t VAR_6, unsigned long VAR_7)
{
 void *VAR_8;

 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (!VAR_8 ||
     !VAR_2 || VAR_3->coherent_dma_mask <= FUNC_0(24))
  return VAR_8;

 *VAR_5 = FUNC_3(VAR_3, FUNC_7(VAR_8), VAR_4,
   VAR_0, (1UL << FUNC_5(VAR_4)) - 1);
 FUNC_4();
 if (FUNC_6(*VAR_5 == VAR_1))
  goto out_free;
 return VAR_8;
out_free:
 FUNC_2(VAR_3, VAR_4, VAR_8, *VAR_5, VAR_7);
 return ((void*)0);
}
