
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int* status_ptr; } ;
typedef TYPE_1__ drm_savage_private_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(drm_savage_private_t * VAR_2, uint16_t VAR_3)
{
 uint32_t VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  FUNC_2();
  VAR_4 = VAR_2->status_ptr[1];
  if ((((VAR_4 & 0xffff) - VAR_3) & 0xffff) <= 0x7fff ||
      (VAR_4 & 0xffff) == 0)
   return 0;
  FUNC_3(1);
 }






 return -VAR_0;
}
