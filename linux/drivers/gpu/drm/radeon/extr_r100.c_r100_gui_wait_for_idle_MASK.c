
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_device {unsigned int usec_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct radeon_device*,int) ;
 int FUNC_3 (int) ;

int FUNC_4(struct radeon_device *VAR_2)
{
 unsigned VAR_3;
 uint32_t VAR_4;

 if (FUNC_2(VAR_2, 64)) {
  FUNC_1("radeon: wait for empty RBBM fifo failed! Bad things might happen.\n");
 }
 for (VAR_3 = 0; VAR_3 < VAR_2->usec_timeout; VAR_3++) {
  VAR_4 = FUNC_0(VAR_1);
  if (!(VAR_4 & VAR_0)) {
   return 0;
  }
  FUNC_3(1);
 }
 return -1;
}
