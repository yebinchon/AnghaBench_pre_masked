
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad_sigma_delta {int dummy; } ;
struct ad_sd_calib_data {int channel; int mode; } ;


 int FUNC_0 (struct ad_sigma_delta*,int ,int ) ;

int FUNC_1(struct ad_sigma_delta *VAR_0,
 const struct ad_sd_calib_data *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = FUNC_0(VAR_0, VAR_1[VAR_3].mode, VAR_1[VAR_3].channel);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}
