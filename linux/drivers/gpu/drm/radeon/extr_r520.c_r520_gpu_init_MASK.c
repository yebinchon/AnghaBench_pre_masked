
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,unsigned int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct radeon_device*) ;
 scalar_t__ FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_7(struct radeon_device *VAR_3)
{
 unsigned VAR_4, VAR_5, VAR_6;

 FUNC_6(VAR_3);
 if (VAR_3->family == VAR_0) {
  FUNC_1(0x4128, 0xFF);
 }
 FUNC_4(VAR_3);
 VAR_5 = FUNC_0(VAR_2);
 VAR_6 = FUNC_0(VAR_1);
 VAR_4 = (VAR_6 >> 2) & 3;
 VAR_6 = (1 << VAR_4) |
       (((VAR_5 >> 8) & 0xF) << 4);
 FUNC_2(0x000D, VAR_6);
 if (FUNC_5(VAR_3)) {
  FUNC_3("Failed to wait MC idle while programming pipes. Bad things might happen.\n");
 }
}
