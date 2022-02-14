
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlx4_mtt {int dummy; } ;
struct mlx4_ib_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct mlx4_mtt*,int,int,int*) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct mlx4_ib_dev *VAR_2,
     struct mlx4_mtt *VAR_3,
     u64 VAR_4, u64 VAR_5, u64 VAR_6,
     u64 VAR_7, u64 *VAR_8,
     int *VAR_9, int *VAR_10)
{
 u64 VAR_11 = VAR_7 + VAR_6;
 u64 VAR_12 = 0;
 u64 VAR_13;
 int VAR_14 = 0;
 int VAR_15;

 VAR_6 += (VAR_7 & (VAR_4 - 1ULL));
 VAR_12 = FUNC_3(VAR_11, VAR_4);
 VAR_6 += (VAR_12 - VAR_11);
 if (VAR_6 & (VAR_4 - 1ULL)) {
  FUNC_1("write_block: len %llx is not aligned to mtt_size %llx\n",
   VAR_6, VAR_4);
  return -VAR_0;
 }

 VAR_13 = (VAR_6 >> VAR_5);
 VAR_7 = FUNC_2(VAR_7, VAR_4);

 for (VAR_15 = 0; VAR_15 < VAR_13; ++VAR_15) {
  VAR_8[*VAR_10] = VAR_7 + (VAR_4 * VAR_15);
  (*VAR_10)++;




  if (*VAR_10 == VAR_1 / sizeof(u64)) {
   VAR_14 = FUNC_0(VAR_2->dev, VAR_3, *VAR_9,
          *VAR_10, VAR_8);
   if (VAR_14)
    return VAR_14;

   (*VAR_9) += *VAR_10;
   *VAR_10 = 0;
  }
 }

 return 0;
}
