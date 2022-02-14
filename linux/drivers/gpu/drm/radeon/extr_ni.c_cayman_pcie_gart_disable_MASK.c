
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_6(struct radeon_device *VAR_13)
{
 unsigned VAR_14;

 for (VAR_14 = 1; VAR_14 < 8; ++VAR_14) {
  VAR_13->vm_manager.saved_table_addr[VAR_14] = FUNC_3(
   VAR_8 + (VAR_14 << 2));
 }


 FUNC_4(VAR_7, 0);
 FUNC_4(VAR_9, 0);

 FUNC_4(VAR_4, VAR_0 |
        VAR_5 |
        VAR_6);

 FUNC_4(VAR_10, VAR_2 |
        VAR_1 |
        FUNC_1(7) |
        FUNC_0(1));
 FUNC_4(VAR_11, 0);
 FUNC_4(VAR_12, VAR_3 |
        FUNC_2(6));
 FUNC_5(VAR_13);
}
