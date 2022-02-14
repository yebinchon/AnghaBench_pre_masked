
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_dp_link {unsigned int num_lanes; } ;
struct drm_dp_aux {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int*,unsigned int) ;
 int FUNC_2 (int*,unsigned int) ;
 int FUNC_3 (struct drm_dp_aux*,int*) ;
 int FUNC_4 (struct drm_dp_aux*,int ,int*,unsigned int) ;
 int FUNC_5 (struct drm_dp_aux*,int ,int) ;
 int FUNC_6 (int,int) ;

int FUNC_7(struct drm_dp_aux *VAR_12, struct drm_dp_link *VAR_13,
       u8 VAR_14)
{
 u8 VAR_15 = VAR_14 & VAR_4;
 u8 VAR_16[VAR_1], VAR_17[4];
 unsigned int VAR_18;
 int VAR_19;

 VAR_19 = FUNC_5(VAR_12, VAR_5, VAR_14);
 if (VAR_19 < 0)
  return VAR_19;

 if (VAR_15 == VAR_3)
  return 0;

 for (VAR_18 = 0; VAR_18 < VAR_13->num_lanes; VAR_18++)
  VAR_17[VAR_18] = VAR_6 |
       VAR_8 |
       VAR_7 |
       VAR_9;

 VAR_19 = FUNC_4(VAR_12, VAR_2, VAR_17,
    VAR_13->num_lanes);
 if (VAR_19 < 0)
  return VAR_19;

 FUNC_6(500, 1000);

 VAR_19 = FUNC_3(VAR_12, VAR_16);
 if (VAR_19 < 0)
  return VAR_19;

 switch (VAR_15) {
 case 129:
  if (!FUNC_2(VAR_16, VAR_13->num_lanes))
   return -VAR_10;

  break;

 case 128:
  if (!FUNC_1(VAR_16, VAR_13->num_lanes))
   return -VAR_10;

  break;

 default:
  FUNC_0(VAR_12->dev, "unsupported training pattern %u\n", VAR_15);
  return -VAR_11;
 }

 VAR_19 = FUNC_5(VAR_12, VAR_0, 0);
 if (VAR_19 < 0)
  return VAR_19;

 return 0;
}
