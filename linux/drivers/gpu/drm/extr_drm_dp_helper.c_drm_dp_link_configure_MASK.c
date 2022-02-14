
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int values ;
typedef int u8 ;
struct drm_dp_link {int capabilities; int num_lanes; int rate; } ;
struct drm_dp_aux {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_dp_aux*,int ,int *,int) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct drm_dp_aux *VAR_3, struct drm_dp_link *VAR_4)
{
 u8 VAR_5[2];
 int VAR_6;

 VAR_5[0] = FUNC_1(VAR_4->rate);
 VAR_5[1] = VAR_4->num_lanes;

 if (VAR_4->capabilities & VAR_2)
  VAR_5[1] |= VAR_0;

 VAR_6 = FUNC_0(VAR_3, VAR_1, VAR_5, sizeof(VAR_5));
 if (VAR_6 < 0)
  return VAR_6;

 return 0;
}
