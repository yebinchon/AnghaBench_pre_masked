
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_table {int dummy; } ;
struct dma_buf_attachment {TYPE_1__* dmabuf; int dev; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_2__ {int size; } ;


 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct dma_buf_attachment *VAR_0,
         struct sg_table *VAR_1,
         enum dma_data_direction VAR_2)
{

 FUNC_0("[DEV:%s] size:%zd dir:%d\n", FUNC_1(VAR_0->dev),
   VAR_0->dmabuf->size, VAR_2);
}
