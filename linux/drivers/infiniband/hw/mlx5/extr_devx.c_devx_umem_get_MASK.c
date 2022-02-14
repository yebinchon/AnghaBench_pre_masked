
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u64 ;
typedef int u32 ;
struct uverbs_attr_bundle {int driver_udata; } ;
struct mlx5_ib_dev {int dummy; } ;
struct ib_ucontext {int dummy; } ;
struct devx_umem {int page_shift; int page_offset; TYPE_1__* umem; int ncont; } ;
struct TYPE_6__ {int address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (int *,size_t,size_t,int,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int,int ,int*,int*,int *,int *) ;
 scalar_t__ FUNC_6 (size_t*,struct uverbs_attr_bundle*,int ) ;
 int FUNC_7 (int*,struct uverbs_attr_bundle*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct mlx5_ib_dev *VAR_9, struct ib_ucontext *VAR_10,
    struct uverbs_attr_bundle *VAR_11,
    struct devx_umem *VAR_12)
{
 u64 VAR_13;
 size_t VAR_14;
 u32 VAR_15;
 int VAR_16;
 int VAR_17;
 u32 VAR_18;

 if (FUNC_6(&VAR_13, VAR_11, VAR_6) ||
     FUNC_6(&VAR_14, VAR_11, VAR_7))
  return -VAR_0;

 VAR_17 = FUNC_7(&VAR_15, VAR_11,
     VAR_5,
     VAR_2 |
     VAR_4 |
     VAR_3);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_2(VAR_15);
 if (VAR_17)
  return VAR_17;

 VAR_12->umem = FUNC_3(&VAR_11->driver_udata, VAR_13, VAR_14, VAR_15, 0);
 if (FUNC_0(VAR_12->umem))
  return FUNC_1(VAR_12->umem);

 FUNC_5(VAR_12->umem, VAR_12->umem->address,
      VAR_8, &VAR_16,
      &VAR_12->page_shift, &VAR_12->ncont, ((void*)0));

 if (!VAR_16) {
  FUNC_4(VAR_12->umem);
  return -VAR_1;
 }

 VAR_18 = (1 << VAR_12->page_shift) - 1;
 VAR_12->page_offset = VAR_12->umem->address & VAR_18;

 return 0;
}
