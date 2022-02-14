
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int * saved_table_addr; } ;
struct radeon_device {TYPE_1__ vm_manager; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_6(struct radeon_device *VAR_14)
{
 unsigned VAR_15;

 for (VAR_15 = 1; VAR_15 < 16; ++VAR_15) {
  uint32_t VAR_16;
  if (VAR_15 < 8)
   VAR_16 = VAR_8 + (VAR_15 << 2);
  else
   VAR_16 = VAR_10 + ((VAR_15 - 8) << 2);
  VAR_14->vm_manager.saved_table_addr[VAR_15] = FUNC_3(VAR_16);
 }


 FUNC_4(VAR_7, 0);
 FUNC_4(VAR_9, 0);

 FUNC_4(VAR_4, VAR_5 |
        VAR_6);

 FUNC_4(VAR_11,
        VAR_0 |
        VAR_2 |
        VAR_1 |
        FUNC_1(7) |
        FUNC_0(1));
 FUNC_4(VAR_12, 0);
 FUNC_4(VAR_13, VAR_3 |
        FUNC_2(6));
 FUNC_5(VAR_14);
}
