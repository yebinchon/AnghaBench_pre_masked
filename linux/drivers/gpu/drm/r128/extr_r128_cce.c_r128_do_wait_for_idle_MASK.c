
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int usec_timeout; } ;
typedef TYPE_1__ drm_r128_private_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(drm_r128_private_t *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = FUNC_3(VAR_3, 64);
 if (VAR_5)
  return VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3->usec_timeout; VAR_4++) {
  if (!(FUNC_1(VAR_2) & VAR_1)) {
   FUNC_2(VAR_3);
   return 0;
  }
  FUNC_4(1);
 }




 return -VAR_0;
}
