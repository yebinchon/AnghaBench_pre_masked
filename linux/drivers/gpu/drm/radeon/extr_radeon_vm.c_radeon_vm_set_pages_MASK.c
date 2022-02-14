
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct radeon_ib {int dummy; } ;
struct TYPE_2__ {int table_addr; } ;
struct radeon_device {TYPE_1__ gart; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct radeon_device*,struct radeon_ib*,int,int,unsigned int) ;
 int FUNC_1 (struct radeon_device*,struct radeon_ib*,int,int,unsigned int,int,int) ;
 int FUNC_2 (struct radeon_device*,struct radeon_ib*,int,int,unsigned int,int,int) ;
 int FUNC_3 (int,int,unsigned int,int,int) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_2,
    struct radeon_ib *VAR_3,
    uint64_t VAR_4,
    uint64_t VAR_5, unsigned VAR_6,
    uint32_t VAR_7, uint32_t VAR_8)
{
 FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);

 if ((VAR_8 & VAR_0) == VAR_0) {
  uint64_t VAR_9 = VAR_2->gart.table_addr + (VAR_5 >> 12) * 8;
  FUNC_0(VAR_2, VAR_3, VAR_4, VAR_9, VAR_6);

 } else if ((VAR_8 & VAR_1) || (VAR_6 < 3)) {
  FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5,
        VAR_6, VAR_7, VAR_8);

 } else {
  FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6, VAR_7, VAR_8);
 }
}
