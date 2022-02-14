
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mlx5_ib_uapi_flow_table_type { ____Placeholder_mlx5_ib_uapi_flow_table_type } mlx5_ib_uapi_flow_table_type ;
typedef enum mlx5_flow_namespace_type { ____Placeholder_mlx5_flow_namespace_type } mlx5_flow_namespace_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





__attribute__((used)) static int
FUNC_0(enum mlx5_ib_uapi_flow_table_type VAR_5,
        enum mlx5_flow_namespace_type *VAR_6)
{
 switch (VAR_5) {
 case 130:
  *VAR_6 = VAR_1;
  break;
 case 129:
  *VAR_6 = VAR_2;
  break;
 case 131:
  *VAR_6 = VAR_3;
  break;
 case 128:
  *VAR_6 = VAR_4;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
