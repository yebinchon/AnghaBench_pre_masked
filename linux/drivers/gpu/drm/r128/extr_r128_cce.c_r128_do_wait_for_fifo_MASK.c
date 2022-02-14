
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int usec_timeout; } ;
typedef TYPE_1__ drm_r128_private_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(drm_r128_private_t *VAR_3, int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->usec_timeout; VAR_5++) {
  int VAR_6 = FUNC_1(VAR_2) & VAR_1;
  if (VAR_6 >= VAR_4)
   return 0;
  FUNC_2(1);
 }




 return -VAR_0;
}
