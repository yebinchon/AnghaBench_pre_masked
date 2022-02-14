
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct uverbs_attr_bundle {int dummy; } ;
struct mlx5_ib_dm {int dev_addr; int size; } ;
struct mlx5_dm {TYPE_3__* dev; } ;
struct ib_ucontext {int device; } ;
struct ib_dm_alloc_attr {int alignment; int length; } ;
typedef int start_offset ;
typedef int page_idx ;
struct TYPE_6__ {int pdev; } ;
struct TYPE_5__ {struct mlx5_dm dm; } ;
struct TYPE_4__ {int dm_pages; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int,int ) ;
 int VAR_6 ;
 int FUNC_3 (struct mlx5_dm*,int*,int ,int ) ;
 int FUNC_4 (struct mlx5_dm*,int,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 TYPE_2__* FUNC_7 (int ) ;
 TYPE_1__* FUNC_8 (struct ib_ucontext*) ;
 int FUNC_9 (struct uverbs_attr_bundle*,int ,int*,int) ;

__attribute__((used)) static int FUNC_10(struct ib_ucontext *VAR_7,
     struct mlx5_ib_dm *VAR_8,
     struct ib_dm_alloc_attr *VAR_9,
     struct uverbs_attr_bundle *VAR_10)
{
 struct mlx5_dm *VAR_11 = &FUNC_7(VAR_7->device)->dm;
 u64 VAR_12;
 u32 VAR_13;
 int VAR_14;

 VAR_8->size = FUNC_6(VAR_9->length, VAR_2);

 VAR_14 = FUNC_3(VAR_11, &VAR_8->dev_addr,
       VAR_8->size, VAR_9->alignment);
 if (VAR_14)
  return VAR_14;

 VAR_13 = (VAR_8->dev_addr - FUNC_5(VAR_11->dev->pdev, 0) -
      FUNC_1(VAR_11->dev, VAR_6)) >>
      VAR_4;

 VAR_14 = FUNC_9(VAR_10,
        VAR_0,
        &VAR_13, sizeof(VAR_13));
 if (VAR_14)
  goto err_dealloc;

 VAR_12 = VAR_8->dev_addr & ~VAR_3;
 VAR_14 = FUNC_9(VAR_10,
        VAR_1,
        &VAR_12, sizeof(VAR_12));
 if (VAR_14)
  goto err_dealloc;

 FUNC_2(FUNC_8(VAR_7)->dm_pages, VAR_13,
     FUNC_0(VAR_8->size, VAR_5));

 return 0;

err_dealloc:
 FUNC_4(VAR_11, VAR_8->dev_addr, VAR_8->size);

 return VAR_14;
}
