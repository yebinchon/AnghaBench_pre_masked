
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct firmware {int size; scalar_t__ data; } ;
struct TYPE_2__ {int size; int * vaddr; } ;
struct falcon {TYPE_1__ firmware; int dev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int *,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct falcon *VAR_1,
           const struct firmware *VAR_2)
{
 u32 *VAR_3 = VAR_1->firmware.vaddr;
 dma_addr_t VAR_4;
 size_t VAR_5;
 int VAR_6;


 for (VAR_5 = 0; VAR_5 < VAR_2->size / sizeof(u32); VAR_5++)
  VAR_3[VAR_5] = FUNC_5(((u32 *)VAR_2->data)[VAR_5]);


 VAR_4 = FUNC_1(VAR_1->dev, VAR_3,
          VAR_1->firmware.size, VAR_0);
 VAR_6 = FUNC_2(VAR_1->dev, VAR_4);
 if (VAR_6) {
  FUNC_0(VAR_1->dev, "failed to map firmware: %d\n", VAR_6);
  return;
 }
 FUNC_3(VAR_1->dev, VAR_4,
       VAR_1->firmware.size, VAR_0);
 FUNC_4(VAR_1->dev, VAR_4, VAR_1->firmware.size,
    VAR_0);
}
