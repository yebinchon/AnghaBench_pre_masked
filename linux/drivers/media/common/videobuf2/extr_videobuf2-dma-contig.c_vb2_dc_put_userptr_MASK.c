
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_dc_buf {int vec; int dma_dir; int size; int dma_addr; int dev; int orig_nents; int sgl; struct vb2_dc_buf* dma_sgt; } ;
struct sg_table {int vec; int dma_dir; int size; int dma_addr; int dev; int orig_nents; int sgl; struct sg_table* dma_sgt; } ;
struct page {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct page**) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 struct page** FUNC_5 (int ) ;
 int FUNC_6 (struct vb2_dc_buf*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct vb2_dc_buf*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(void *VAR_3)
{
 struct vb2_dc_buf *VAR_4 = VAR_3;
 struct sg_table *VAR_5 = VAR_4->dma_sgt;
 int VAR_6;
 struct page **VAR_7;

 if (VAR_5) {




  FUNC_3(VAR_4->dev, VAR_5->sgl, VAR_5->orig_nents,
       VAR_4->dma_dir, VAR_0);
  VAR_7 = FUNC_5(VAR_4->vec);

  FUNC_0(FUNC_1(VAR_7));
  if (VAR_4->dma_dir == VAR_2 ||
      VAR_4->dma_dir == VAR_1)
   for (VAR_6 = 0; VAR_6 < FUNC_4(VAR_4->vec); VAR_6++)
    FUNC_7(VAR_7[VAR_6]);
  FUNC_8(VAR_5);
  FUNC_6(VAR_5);
 } else {
  FUNC_2(VAR_4->dev, VAR_4->dma_addr, VAR_4->size,
       VAR_4->dma_dir, 0);
 }
 FUNC_9(VAR_4->vec);
 FUNC_6(VAR_4);
}
