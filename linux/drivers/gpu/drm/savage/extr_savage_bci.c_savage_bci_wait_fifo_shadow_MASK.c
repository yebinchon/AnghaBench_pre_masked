
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int status_used_mask; int bci_threshold_hi; unsigned int cob_size; int* status_ptr; } ;
typedef TYPE_1__ drm_savage_private_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(drm_savage_private_t * VAR_3, unsigned int VAR_4)
{
 uint32_t VAR_5 = VAR_3->status_used_mask;
 uint32_t VAR_6 = VAR_3->bci_threshold_hi;
 uint32_t VAR_7;
 int VAR_8;







 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  FUNC_2();
  VAR_7 = VAR_3->status_ptr[0];
  if ((VAR_7 & VAR_5) < VAR_6)
   return 0;
  FUNC_3(1);
 }





 return -VAR_0;
}
