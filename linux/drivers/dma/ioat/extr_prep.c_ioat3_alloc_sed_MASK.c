
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioatdma_device {int * sed_hw_pool; } ;
struct ioat_sed_ent {unsigned int hw_pool; int hw; int dma; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int *) ;
 int VAR_2 ;
 struct ioat_sed_ent* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,struct ioat_sed_ent*) ;

__attribute__((used)) static struct ioat_sed_ent *
FUNC_3(struct ioatdma_device *VAR_3, unsigned int VAR_4)
{
 struct ioat_sed_ent *VAR_5;
 gfp_t VAR_6 = VAR_1 | VAR_0;

 VAR_5 = FUNC_1(VAR_2, VAR_6);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->hw_pool = VAR_4;
 VAR_5->hw = FUNC_0(VAR_3->sed_hw_pool[VAR_4],
     VAR_6, &VAR_5->dma);
 if (!VAR_5->hw) {
  FUNC_2(VAR_2, VAR_5);
  return ((void*)0);
 }

 return VAR_5;
}
