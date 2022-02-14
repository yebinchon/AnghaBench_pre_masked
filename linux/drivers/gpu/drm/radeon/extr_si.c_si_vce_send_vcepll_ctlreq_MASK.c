
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct radeon_device *VAR_5)
{
 unsigned VAR_6;


 FUNC_2(VAR_0, 0, ~VAR_4);

 FUNC_3(10);


 FUNC_2(VAR_0, VAR_4, ~VAR_4);


 for (VAR_6 = 0; VAR_6 < 100; ++VAR_6) {
  uint32_t VAR_7 = VAR_3 | VAR_2;
  if ((FUNC_1(VAR_0) & VAR_7) == VAR_7)
   break;
  FUNC_3(10);
 }


 FUNC_2(VAR_0, 0, ~VAR_4);

 if (VAR_6 == 100) {
  FUNC_0("Timeout setting UVD clocks!\n");
  return -VAR_1;
 }

 return 0;
}
