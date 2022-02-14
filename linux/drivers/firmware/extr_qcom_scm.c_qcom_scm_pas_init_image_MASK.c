
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (int ,size_t,int *,int ) ;
 int FUNC_3 (int ,size_t,void*,int ) ;
 int FUNC_4 (void*,void const*,size_t) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

int FUNC_7(u32 VAR_3, const void *VAR_4, size_t VAR_5)
{
 dma_addr_t VAR_6;
 void *VAR_7;
 int VAR_8;






 VAR_7 = FUNC_2(VAR_2->dev, VAR_5, &VAR_6,
           VAR_1);
 if (!VAR_7) {
  FUNC_1(VAR_2->dev, "Allocation of metadata buffer failed.\n");
  return -VAR_0;
 }
 FUNC_4(VAR_7, VAR_4, VAR_5);

 VAR_8 = FUNC_6();
 if (VAR_8)
  goto free_metadata;

 VAR_8 = FUNC_0(VAR_2->dev, VAR_3, VAR_6);

 FUNC_5();

free_metadata:
 FUNC_3(VAR_2->dev, VAR_5, VAR_7, VAR_6);

 return VAR_8;
}
