
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int values ;
typedef int u8 ;
struct drm_dp_link {int revision; int num_lanes; int capabilities; int rate; } ;
struct drm_dp_aux {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_dp_aux*,int ,int*,int) ;
 int FUNC_2 (struct drm_dp_link*,int ,int) ;

int FUNC_3(struct drm_dp_aux *VAR_4, struct drm_dp_link *VAR_5)
{
 u8 VAR_6[3];
 int VAR_7;

 FUNC_2(VAR_5, 0, sizeof(*VAR_5));

 VAR_7 = FUNC_1(VAR_4, VAR_0, VAR_6, sizeof(VAR_6));
 if (VAR_7 < 0)
  return VAR_7;

 VAR_5->revision = VAR_6[0];
 VAR_5->rate = FUNC_0(VAR_6[1]);
 VAR_5->num_lanes = VAR_6[2] & VAR_3;

 if (VAR_6[2] & VAR_1)
  VAR_5->capabilities |= VAR_2;

 return 0;
}
