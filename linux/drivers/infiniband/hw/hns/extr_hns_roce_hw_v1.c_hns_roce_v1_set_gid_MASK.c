
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union ib_gid {int * raw; } ;
typedef int u8 ;
typedef int u32 ;
struct ib_gid_attr {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct hns_roce_dev {TYPE_1__ iboe; scalar_t__ reg_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct hns_roce_dev*,int,int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct hns_roce_dev *VAR_5, u8 VAR_6,
          int VAR_7, const union ib_gid *VAR_8,
          const struct ib_gid_attr *VAR_9)
{
 unsigned long VAR_10;
 u32 *VAR_11 = ((void*)0);
 u8 VAR_12 = 0;

 VAR_12 = FUNC_0(VAR_5, VAR_6, VAR_7);

 FUNC_2(&VAR_5->iboe.lock, VAR_10);

 VAR_11 = (u32 *)&VAR_8->raw[0];
 FUNC_1(*VAR_11, VAR_5->reg_base + VAR_2 +
         (VAR_0 * VAR_12));

 VAR_11 = (u32 *)&VAR_8->raw[4];
 FUNC_1(*VAR_11, VAR_5->reg_base + VAR_4 +
         (VAR_0 * VAR_12));

 VAR_11 = (u32 *)&VAR_8->raw[8];
 FUNC_1(*VAR_11, VAR_5->reg_base + VAR_3 +
         (VAR_0 * VAR_12));

 VAR_11 = (u32 *)&VAR_8->raw[0xc];
 FUNC_1(*VAR_11, VAR_5->reg_base + VAR_1 +
         (VAR_0 * VAR_12));

 FUNC_3(&VAR_5->iboe.lock, VAR_10);

 return 0;
}
