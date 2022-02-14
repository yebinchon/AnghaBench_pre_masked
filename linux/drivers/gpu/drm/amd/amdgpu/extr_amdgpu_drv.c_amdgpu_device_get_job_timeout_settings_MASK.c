
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {long gfx_timeout; long sdma_timeout; long video_timeout; long compute_timeout; } ;


 int VAR_0 ;
 void* VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (char*,int ,long*) ;
 void* FUNC_1 (long) ;
 scalar_t__ FUNC_2 (char*,int ) ;
 char* FUNC_3 (char**,char*) ;

int FUNC_4(struct amdgpu_device *VAR_3)
{
 char *VAR_4 = VAR_2;
 char *VAR_5 = ((void*)0);
 int VAR_6 = 0;
 long VAR_7;
 int VAR_8 = 0;





 VAR_3->gfx_timeout = FUNC_1(10000);
 VAR_3->sdma_timeout = VAR_3->video_timeout = VAR_3->gfx_timeout;
 VAR_3->compute_timeout = VAR_1;

 if (FUNC_2(VAR_4, VAR_0)) {
  while ((VAR_5 = FUNC_3(&VAR_4, ",")) &&
    FUNC_2(VAR_5, VAR_0)) {
   VAR_8 = FUNC_0(VAR_5, 0, &VAR_7);
   if (VAR_8)
    return VAR_8;

   if (VAR_7 == 0) {
    VAR_6++;
    continue;
   } else if (VAR_7 < 0) {
    VAR_7 = VAR_1;
   } else {
    VAR_7 = FUNC_1(VAR_7);
   }

   switch (VAR_6++) {
   case 0:
    VAR_3->gfx_timeout = VAR_7;
    break;
   case 1:
    VAR_3->compute_timeout = VAR_7;
    break;
   case 2:
    VAR_3->sdma_timeout = VAR_7;
    break;
   case 3:
    VAR_3->video_timeout = VAR_7;
    break;
   default:
    break;
   }
  }




  if (VAR_6 == 1)
   VAR_3->sdma_timeout = VAR_3->video_timeout = VAR_3->gfx_timeout;
 }

 return VAR_8;
}
