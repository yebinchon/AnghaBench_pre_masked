
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uverbs_attr_bundle {int dummy; } ;
struct ib_dm {int dummy; } ;
struct mlx5_ib_dm {int type; struct ib_dm ibdm; } ;
struct ib_ucontext {int dummy; } ;
struct ib_dm_alloc_attr {int alignment; int length; } ;
struct ib_device {int dummy; } ;
typedef enum mlx5_ib_uapi_dm_type { ____Placeholder_mlx5_ib_uapi_dm_type } mlx5_ib_uapi_dm_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_dm* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct ib_ucontext*,struct mlx5_ib_dm*,struct ib_dm_alloc_attr*,struct uverbs_attr_bundle*) ;
 int FUNC_3 (struct ib_ucontext*,struct mlx5_ib_dm*,struct ib_dm_alloc_attr*,struct uverbs_attr_bundle*,int ) ;
 int FUNC_4 (struct mlx5_ib_dm*) ;
 struct mlx5_ib_dm* FUNC_5 (int,int ) ;
 int FUNC_6 (int ,char*,int,int ,int ) ;
 int FUNC_7 (struct ib_device*) ;
 int FUNC_8 (int*,struct uverbs_attr_bundle*,int ,int) ;

struct ib_dm *FUNC_9(struct ib_device *VAR_6,
          struct ib_ucontext *VAR_7,
          struct ib_dm_alloc_attr *VAR_8,
          struct uverbs_attr_bundle *VAR_9)
{
 struct mlx5_ib_dm *VAR_10;
 enum mlx5_ib_uapi_dm_type VAR_11;
 int VAR_12;

 VAR_12 = FUNC_8(&VAR_11, VAR_9,
           VAR_3,
           129);
 if (VAR_12)
  return FUNC_0(VAR_12);

 FUNC_6(FUNC_7(VAR_6), "alloc_dm req: dm_type=%d user_length=0x%llx log_alignment=%d\n",
      VAR_11, VAR_8->length, VAR_8->alignment);

 VAR_12 = FUNC_1(FUNC_7(VAR_6), VAR_11);
 if (VAR_12)
  return FUNC_0(VAR_12);

 VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return FUNC_0(-VAR_0);

 VAR_10->type = VAR_11;

 switch (VAR_11) {
 case 129:
  VAR_12 = FUNC_2(VAR_7, VAR_10,
         VAR_8,
         VAR_9);
  break;
 case 128:
  VAR_12 = FUNC_3(VAR_7, VAR_10,
          VAR_8, VAR_9,
          VAR_5);
  break;
 case 130:
  VAR_12 = FUNC_3(VAR_7, VAR_10,
          VAR_8, VAR_9,
          VAR_4);
  break;
 default:
  VAR_12 = -VAR_1;
 }

 if (VAR_12)
  goto err_free;

 return &VAR_10->ibdm;

err_free:
 FUNC_4(VAR_10);
 return FUNC_0(VAR_12);
}
