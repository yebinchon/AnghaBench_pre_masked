
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int,unsigned int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
 scalar_t__ FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_7(struct radeon_device *VAR_2)
{
 unsigned VAR_3, VAR_4, VAR_5;

 if (FUNC_3(VAR_2)) {
  FUNC_2("Failed to wait GUI idle while resetting GPU. Bad things might happen.\n");
 }
 FUNC_6(VAR_2);
 FUNC_4(VAR_2);
 VAR_4 = FUNC_0(VAR_1);
 VAR_5 = FUNC_0(VAR_0);
 VAR_3 = (VAR_5 >> 2) & 3;
 VAR_5 = (1 << VAR_3) |
       (((VAR_4 >> 8) & 0xF) << 4);
 FUNC_1(0x000D, VAR_5);
 if (FUNC_3(VAR_2)) {
  FUNC_2("Failed to wait GUI idle while resetting GPU. Bad things might happen.\n");
 }
 if (FUNC_5(VAR_2)) {
  FUNC_2("Failed to wait MC idle while programming pipes. Bad things might happen.\n");
 }
}
