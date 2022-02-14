
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;
struct TYPE_2__ {int pixel_freq; } ;


 int FUNC_0 (char*,int,...) ;
 unsigned int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

enum drm_mode_status
FUNC_2(unsigned int VAR_3)
{
 int VAR_4;

 FUNC_0("freq = %d\n", VAR_3);

 for (VAR_4 = 0 ; VAR_2[VAR_4].pixel_freq ; ++VAR_4) {
  FUNC_0("i = %d pixel_freq = %d alt = %d\n",
     VAR_4, VAR_2[VAR_4].pixel_freq,
     FUNC_1(VAR_2[VAR_4].pixel_freq));

  if (VAR_3 == VAR_2[VAR_4].pixel_freq)
   return VAR_1;

  if (VAR_3 == FUNC_1(VAR_2[VAR_4].pixel_freq))
   return VAR_1;
 }

 return VAR_0;
}
