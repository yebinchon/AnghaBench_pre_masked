
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct dispc_device {int dummy; } ;
typedef int s8 ;
typedef enum omap_plane_id { ____Placeholder_omap_plane_id } omap_plane_id ;


 int FUNC_0 () ;







 int VAR_0 ;
 int FUNC_1 (struct dispc_device*,int,int,int) ;
 int FUNC_2 (struct dispc_device*,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct dispc_device *VAR_1,
      enum omap_plane_id VAR_2,
      u16 VAR_3, u16 VAR_4,
      u16 VAR_5, u16 VAR_6,
      bool VAR_7, u32 VAR_8, u8 VAR_9)
{
 int VAR_10, VAR_11;
 int VAR_12, VAR_13;
 int VAR_14, VAR_15;
 int VAR_16;

 struct accu {
  s8 h0_m, h0_n;
  s8 h1_m, h1_n;
  s8 v0_m, v0_n;
  s8 v1_m, v1_n;
 };

 const struct accu *VAR_17;
 const struct accu *VAR_18;

 static const struct accu VAR_19[4] = {
  { 0, 1, 0, 1 , -1, 2, 0, 1 },
  { 1, 2, -3, 4 , 0, 1, 0, 1 },
  { -1, 1, 0, 1 , -1, 2, 0, 1 },
  { -1, 2, -1, 2 , -1, 1, 0, 1 },
 };

 static const struct accu VAR_20[4] = {
  { 0, 1, 0, 1 , -3, 4, -1, 4 },
  { -1, 4, -3, 4 , 0, 1, 0, 1 },
  { -1, 1, 0, 1 , -1, 4, -3, 4 },
  { -3, 4, -3, 4 , -1, 1, 0, 1 },
 };

 static const struct accu VAR_21[4] = {
  { 0, 1, 0, 1, 0, 1, 0, 1 },
  { 0, 1, 0, 1, 0, 1, 0, 1 },
  { -1, 1, 0, 1, 0, 1, 0, 1 },
  { 0, 1, 0, 1, -1, 1, 0, 1 },
 };


 switch (VAR_9 & VAR_0) {
 default:
 case 131:
  VAR_16 = 0;
  break;
 case 128:
  VAR_16 = 3;
  break;
 case 130:
  VAR_16 = 2;
  break;
 case 129:
  VAR_16 = 1;
  break;
 }

 switch (VAR_8) {
 case 134:
  if (VAR_7)
   VAR_17 = VAR_20;
  else
   VAR_17 = VAR_19;
  break;
 case 132:
 case 133:
  VAR_17 = VAR_21;
  break;
 default:
  FUNC_0();
  return;
 }

 VAR_18 = &VAR_17[VAR_16];

 VAR_14 = 1024 * VAR_3 / VAR_5;
 VAR_15 = 1024 * VAR_4 / VAR_6;

 VAR_10 = (VAR_18->h0_m * VAR_14 / VAR_18->h0_n) % 1024;
 VAR_11 = (VAR_18->h1_m * VAR_14 / VAR_18->h1_n) % 1024;
 VAR_12 = (VAR_18->v0_m * VAR_15 / VAR_18->v0_n) % 1024;
 VAR_13 = (VAR_18->v1_m * VAR_15 / VAR_18->v1_n) % 1024;

 FUNC_1(VAR_1, VAR_2, VAR_10, VAR_12);
 FUNC_2(VAR_1, VAR_2, VAR_11, VAR_13);
}
