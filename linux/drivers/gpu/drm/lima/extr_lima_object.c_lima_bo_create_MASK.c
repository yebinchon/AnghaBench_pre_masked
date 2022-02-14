
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sg_table {int dummy; } ;
struct lima_device {int dev; } ;
struct TYPE_4__ {size_t size; TYPE_1__* filp; } ;
struct lima_bo {int * pages_dma_addr; struct lima_bo* pages; TYPE_2__ gem; struct sg_table* sgt; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {int f_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct lima_bo* FUNC_0 (struct lima_bo*) ;
 struct lima_bo* FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct lima_bo*) ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,struct lima_bo,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 struct lima_bo* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct sg_table*,struct lima_bo*,int *,size_t) ;
 void* FUNC_7 (size_t,int,int ) ;
 struct lima_bo* FUNC_8 (struct lima_device*,int ,int ) ;
 int FUNC_9 (struct lima_bo*) ;
 int FUNC_10 (int ,int ) ;

struct lima_bo *FUNC_11(struct lima_device *VAR_7, u32 VAR_8,
          u32 VAR_9, struct sg_table *VAR_10)
{
 int VAR_11, VAR_12;
 size_t VAR_13;
 struct lima_bo *VAR_14, *VAR_15;

 VAR_14 = FUNC_8(VAR_7, VAR_8, VAR_9);
 if (FUNC_2(VAR_14))
  return VAR_14;

 VAR_13 = VAR_14->gem.size >> VAR_5;

 VAR_14->pages_dma_addr = FUNC_7(VAR_13, sizeof(dma_addr_t), VAR_4);
 if (!VAR_14->pages_dma_addr) {
  VAR_15 = FUNC_1(-VAR_2);
  goto err_out;
 }

 if (VAR_10) {
  VAR_14->sgt = VAR_10;

  VAR_14->pages = FUNC_7(VAR_13, sizeof(*VAR_14->pages), VAR_4);
  if (!VAR_14->pages) {
   VAR_15 = FUNC_1(-VAR_2);
   goto err_out;
  }

  VAR_12 = FUNC_6(
   VAR_10, VAR_14->pages, VAR_14->pages_dma_addr, VAR_13);
  if (VAR_12) {
   VAR_15 = FUNC_1(VAR_12);
   goto err_out;
  }
 } else {
  FUNC_10(VAR_14->gem.filp->f_mapping, VAR_3);
  VAR_14->pages = FUNC_5(&VAR_14->gem);
  if (FUNC_2(VAR_14->pages)) {
   VAR_15 = FUNC_0(VAR_14->pages);
   VAR_14->pages = ((void*)0);
   goto err_out;
  }

  for (VAR_11 = 0; VAR_11 < VAR_13; VAR_11++) {
   dma_addr_t VAR_16 = FUNC_3(VAR_7->dev, VAR_14->pages[VAR_11], 0,
             VAR_6, VAR_0);
   if (FUNC_4(VAR_7->dev, VAR_16)) {
    VAR_15 = FUNC_1(-VAR_1);
    goto err_out;
   }
   VAR_14->pages_dma_addr[VAR_11] = VAR_16;
  }

 }

 return VAR_14;

err_out:
 FUNC_9(VAR_14);
 return VAR_15;
}
