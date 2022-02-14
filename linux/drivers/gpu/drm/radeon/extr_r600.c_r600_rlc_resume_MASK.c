
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct radeon_device {scalar_t__ family; TYPE_1__* rlc_fw; } ;
typedef int __be32 ;
struct TYPE_2__ {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_4(struct radeon_device *VAR_14)
{
 u32 VAR_15;
 const __be32 *VAR_16;

 if (!VAR_14->rlc_fw)
  return -VAR_1;

 FUNC_3(VAR_14);

 FUNC_0(VAR_5, 0);

 FUNC_0(VAR_4, 0);
 FUNC_0(VAR_6, 0);
 FUNC_0(VAR_7, 0);
 FUNC_0(VAR_8, 0);
 FUNC_0(VAR_9, 0);
 FUNC_0(VAR_10, 0);
 FUNC_0(VAR_12, 0);

 VAR_16 = (const __be32 *)VAR_14->rlc_fw->data;
 if (VAR_14->family >= VAR_0) {
  for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
   FUNC_0(VAR_11, VAR_15);
   FUNC_0(VAR_13, FUNC_1(VAR_16++));
  }
 } else {
  for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++) {
   FUNC_0(VAR_11, VAR_15);
   FUNC_0(VAR_13, FUNC_1(VAR_16++));
  }
 }
 FUNC_0(VAR_11, 0);

 FUNC_2(VAR_14);

 return 0;
}
