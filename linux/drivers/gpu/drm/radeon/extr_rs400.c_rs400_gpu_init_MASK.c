
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct radeon_device*) ;
 scalar_t__ FUNC_3 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_1)
{

 FUNC_2(VAR_1);
 if (FUNC_3(VAR_1)) {
  FUNC_1("rs400: Failed to wait MC idle while programming pipes. Bad things might happen. %08x\n",
   FUNC_0(VAR_0));
 }
}
