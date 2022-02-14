
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (void*,void*,int ) ;
 int FUNC_7 (struct mlx5_core_dev*,int *,int,int *,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_8(struct mlx5_core_dev *VAR_9, const void *VAR_10, void *VAR_11,
       u16 VAR_12, u8 VAR_13)
{
 int VAR_14 = FUNC_3(VAR_5);
 int VAR_15 = FUNC_3(VAR_4);
 int VAR_16 = -VAR_0;
 void *VAR_17;
 void *VAR_18;
 u32 *VAR_19;
 u32 *VAR_20;

 VAR_20 = FUNC_5(VAR_15, VAR_1);
 VAR_19 = FUNC_5(VAR_14, VAR_1);
 if (!VAR_20 || !VAR_19)
  goto out;

 FUNC_2(VAR_4, VAR_20, VAR_7, VAR_2);
 FUNC_2(VAR_4, VAR_20, VAR_6, VAR_12);
 FUNC_2(VAR_4, VAR_20, VAR_13, VAR_13);

 VAR_17 = FUNC_0(VAR_4, VAR_20, VAR_3);
 FUNC_6(VAR_17, VAR_10, FUNC_1(VAR_4, VAR_3));

 VAR_16 = FUNC_7(VAR_9, VAR_20, VAR_15, VAR_19, VAR_14);
 if (VAR_16)
  goto out;

 VAR_18 = FUNC_0(VAR_5, VAR_19, VAR_8);
 FUNC_6(VAR_11, VAR_18,
        FUNC_1(VAR_5, VAR_8));

out:
 FUNC_4(VAR_19);
 FUNC_4(VAR_20);
 return VAR_16;
}
