
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_dp_aux {int crc_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_dp_aux*,int ,int*,int) ;
 int FUNC_2 (struct drm_dp_aux*,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct drm_dp_aux *VAR_6, u8 *VAR_7)
{
 u8 VAR_8, VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_6, VAR_2, &VAR_8);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_0(!(VAR_8 & VAR_4));

 VAR_10 = FUNC_2(VAR_6, VAR_3, &VAR_8);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_9 = VAR_8 & VAR_0;
 if (VAR_9 == VAR_6->crc_count)
  return -VAR_5;

 VAR_6->crc_count = VAR_9;





 VAR_10 = FUNC_1(VAR_6, VAR_1, VAR_7, 6);
 if (VAR_10 < 0)
  return VAR_10;

 return 0;
}
