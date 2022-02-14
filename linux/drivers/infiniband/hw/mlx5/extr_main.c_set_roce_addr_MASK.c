
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ib_gid {int raw; } ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_gid_attr {int gid_type; } ;
typedef enum ib_gid_type { ____Placeholder_ib_gid_type } ib_gid_type ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ,unsigned int,int ,int ,int ,int *,int,scalar_t__,int ) ;
 int FUNC_2 (struct mlx5_ib_dev*,char*,int) ;
 int FUNC_3 (struct ib_gid_attr const*,scalar_t__*,int *) ;

__attribute__((used)) static int FUNC_4(struct mlx5_ib_dev *VAR_6, u8 VAR_7,
    unsigned int VAR_8, const union ib_gid *VAR_9,
    const struct ib_gid_attr *VAR_10)
{
 enum ib_gid_type VAR_11 = 129;
 u16 VAR_12 = 0xffff;
 u8 VAR_13 = 0;
 u8 VAR_14 = 0;
 u8 VAR_15[VAR_0];
 int VAR_16;

 if (VAR_9) {
  VAR_11 = VAR_10->gid_type;
  VAR_16 = FUNC_3(VAR_10, &VAR_12, &VAR_15[0]);
  if (VAR_16)
   return VAR_16;
 }

 switch (VAR_11) {
 case 129:
  VAR_13 = VAR_3;
  break;
 case 128:
  VAR_13 = VAR_4;
  if (FUNC_0((void *)VAR_9))
   VAR_14 = VAR_1;
  else
   VAR_14 = VAR_2;
  break;

 default:
  FUNC_2(VAR_6, "Unexpected GID type %u\n", VAR_11);
 }

 return FUNC_1(VAR_6->mdev, VAR_8, VAR_13,
          VAR_14, VAR_9->raw, VAR_15,
          VAR_12 < VAR_5, VAR_12,
          VAR_7);
}
