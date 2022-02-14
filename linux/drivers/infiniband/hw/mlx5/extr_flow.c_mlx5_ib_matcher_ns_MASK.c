
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct uverbs_attr_bundle {int dummy; } ;
struct mlx5_ib_flow_matcher {int ns_type; } ;
typedef enum mlx5_ib_uapi_flow_table_type { ____Placeholder_mlx5_ib_uapi_flow_table_type } mlx5_ib_uapi_flow_table_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (struct uverbs_attr_bundle*,int ) ;
 int FUNC_2 (int*,struct uverbs_attr_bundle*,int ) ;
 int FUNC_3 (scalar_t__*,struct uverbs_attr_bundle*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct uverbs_attr_bundle *VAR_7,
         struct mlx5_ib_flow_matcher *VAR_8)
{
 enum mlx5_ib_uapi_flow_table_type VAR_9 =
  VAR_5;
 u32 VAR_10;
 int VAR_11;




 if (FUNC_1(VAR_7, VAR_4) &&
     FUNC_1(VAR_7, VAR_3))
  return -VAR_0;

 if (FUNC_1(VAR_7, VAR_4)) {
  VAR_11 = FUNC_2(&VAR_9, VAR_7,
           VAR_4);
  if (VAR_11)
   return VAR_11;

  VAR_11 = FUNC_0(VAR_9, &VAR_8->ns_type);
  if (VAR_11)
   return VAR_11;

  return 0;
 }

 if (FUNC_1(VAR_7, VAR_3)) {
  VAR_11 = FUNC_3(&VAR_10, VAR_7,
      VAR_3,
      VAR_1);
  if (VAR_11)
   return VAR_11;

  if (VAR_10) {
   FUNC_0(
    VAR_6,
    &VAR_8->ns_type);
   return 0;
  }
 }

 VAR_8->ns_type = VAR_2;

 return 0;
}
