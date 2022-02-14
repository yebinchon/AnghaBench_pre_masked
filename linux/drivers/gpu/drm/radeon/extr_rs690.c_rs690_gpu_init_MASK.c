
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct radeon_device*) ;
 scalar_t__ FUNC_2 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_0)
{

 FUNC_1(VAR_0);
 if (FUNC_2(VAR_0)) {
  FUNC_0("Failed to wait MC idle while programming pipes. Bad things might happen.\n");
 }
}
