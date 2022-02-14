
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct dispc_device {int dummy; } ;
typedef enum omap_plane_id { ____Placeholder_omap_plane_id } omap_plane_id ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct dispc_device*,int ) ;
 int FUNC_2 (struct dispc_device*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,int ,int ) ;
 int FUNC_3 (struct dispc_device*,int,int ,int) ;
 int FUNC_4 (struct dispc_device*,int,int ,int) ;
 int FUNC_5 (struct dispc_device*,int ) ;
 int FUNC_6 (struct dispc_device*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct dispc_device *VAR_3,
      enum omap_plane_id VAR_4,
      u16 VAR_5, u16 VAR_6,
      u16 VAR_7, u16 VAR_8,
      bool VAR_9, bool VAR_10,
      bool VAR_11, u32 VAR_12,
      u8 VAR_13)
{
 int VAR_14 = 0;
 int VAR_15 = 0;
 u32 VAR_16;

 FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_7, VAR_8, VAR_10,
      VAR_13, VAR_0);
 VAR_16 = FUNC_5(VAR_3, FUNC_0(VAR_4));


 VAR_16 &= ~((0x3 << 5) | (0x1 << 21));
 VAR_16 |= (VAR_5 != VAR_7) ? (1 << 5) : 0;
 VAR_16 |= (VAR_6 != VAR_8) ? (1 << 6) : 0;
 VAR_16 |= VAR_10 ? (1 << 21) : 0;


 if (FUNC_1(VAR_3, VAR_2)) {
  VAR_16 &= ~(0x3 << 7);
  VAR_16 |= (VAR_5 <= VAR_7) ? 0 : (1 << 7);
  VAR_16 |= (VAR_6 <= VAR_8) ? 0 : (1 << 8);
 }


 if (FUNC_1(VAR_3, VAR_1)) {
  VAR_16 &= ~(0x1 << 22);
  VAR_16 |= VAR_10 ? (1 << 22) : 0;
 }

 FUNC_6(VAR_3, FUNC_0(VAR_4), VAR_16);





 if (VAR_9 && !VAR_11) {
  VAR_15 = 0;
  VAR_14 = ((1024 * VAR_6 / VAR_8) / 2) & 0x3ff;
  if (VAR_14 >= 1024/2) {
   VAR_15 = 1024/2;
   VAR_14 -= VAR_15;
  }
 }

 FUNC_3(VAR_3, VAR_4, 0, VAR_14);
 FUNC_4(VAR_3, VAR_4, 0, VAR_15);
}
