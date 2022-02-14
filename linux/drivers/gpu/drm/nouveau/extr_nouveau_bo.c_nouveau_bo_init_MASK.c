
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct sg_table {int dummy; } ;
struct TYPE_3__ {int num_pages; } ;
struct TYPE_4__ {int bdev; TYPE_1__ mem; } ;
struct nouveau_bo {int placement; TYPE_2__ bo; } ;
struct dma_resv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nouveau_bo*,int ,int ) ;
 size_t FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,TYPE_2__*,int,int,int *,int,int,size_t,struct sg_table*,struct dma_resv*,int ) ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_3(struct nouveau_bo *VAR_4, u64 VAR_5, int VAR_6, u32 VAR_7,
  struct sg_table *VAR_8, struct dma_resv *VAR_9)
{
 int VAR_10 = VAR_8 ? VAR_3 : VAR_2;
 size_t VAR_11;
 int VAR_12;

 VAR_11 = FUNC_1(VAR_4->bo.bdev, VAR_5, sizeof(*VAR_4));

 VAR_4->bo.mem.num_pages = VAR_5 >> VAR_0;
 FUNC_0(VAR_4, VAR_7, 0);

 VAR_12 = FUNC_2(VAR_4->bo.bdev, &VAR_4->bo, VAR_5, VAR_10,
     &VAR_4->placement, VAR_6 >> VAR_0, 0,
     VAR_11, VAR_8, VAR_9, VAR_1);
 if (VAR_12) {

  return VAR_12;
 }

 return 0;
}
