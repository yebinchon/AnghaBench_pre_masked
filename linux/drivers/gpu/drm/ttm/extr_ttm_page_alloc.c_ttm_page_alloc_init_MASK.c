
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ttm_mem_global {int kobj; } ;
struct TYPE_6__ {unsigned int max_size; int alloc_size; int small; } ;
struct TYPE_7__ {int kobj; TYPE_1__ options; int uc_pool_huge; int wc_pool_huge; int uc_pool_dma32; int wc_pool_dma32; int uc_pool; int wc_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_2__* VAR_13 ;
 int FUNC_1 (int *,int *,int *,char*) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int,char*,unsigned int) ;
 int VAR_14 ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct ttm_mem_global *VAR_15, unsigned VAR_16)
{
 int VAR_17;



 unsigned VAR_18 = 0;


 FUNC_0(VAR_13);

 FUNC_4("Initializing pool allocator\n");

 VAR_13 = FUNC_3(sizeof(*VAR_13), VAR_3);
 if (!VAR_13)
  return -VAR_0;

 FUNC_5(&VAR_13->wc_pool, VAR_2, "wc", 0);

 FUNC_5(&VAR_13->uc_pool, VAR_2, "uc", 0);

 FUNC_5(&VAR_13->wc_pool_dma32,
      VAR_5 | VAR_1, "wc dma", 0);

 FUNC_5(&VAR_13->uc_pool_dma32,
      VAR_5 | VAR_1, "uc dma", 0);

 FUNC_5(&VAR_13->wc_pool_huge,
      (VAR_4 | VAR_12 |
       VAR_10) &
      ~(VAR_11 | VAR_9),
      "wc huge", VAR_18);

 FUNC_5(&VAR_13->uc_pool_huge,
      (VAR_4 | VAR_12 |
       VAR_10) &
      ~(VAR_11 | VAR_9)
      , "uc huge", VAR_18);

 VAR_13->options.max_size = VAR_16;
 VAR_13->options.small = VAR_8;
 VAR_13->options.alloc_size = VAR_7;

 VAR_17 = FUNC_1(&VAR_13->kobj, &VAR_14,
       &VAR_15->kobj, "pool");
 if (FUNC_7(VAR_17 != 0))
  goto error;

 VAR_17 = FUNC_6(VAR_13);
 if (FUNC_7(VAR_17 != 0))
  goto error;
 return 0;

error:
 FUNC_2(&VAR_13->kobj);
 VAR_13 = ((void*)0);
 return VAR_17;
}
