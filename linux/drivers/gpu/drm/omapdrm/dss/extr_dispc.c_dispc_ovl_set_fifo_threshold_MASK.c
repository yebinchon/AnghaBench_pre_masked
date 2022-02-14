
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct dispc_device {TYPE_1__* feat; } ;
typedef enum omap_plane_id { ____Placeholder_omap_plane_id } omap_plane_id ;
struct TYPE_2__ {int buffer_size_unit; scalar_t__ set_max_preload; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int,int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct dispc_device*,int ,int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct dispc_device*,int ,int *,int *) ;
 scalar_t__ FUNC_7 (struct dispc_device*,int ) ;
 int FUNC_8 (struct dispc_device*,int ,int) ;
 int FUNC_9 (int,int) ;

void FUNC_10(struct dispc_device *VAR_4,
      enum omap_plane_id VAR_5,
      u32 VAR_6, u32 VAR_7)
{
 u8 VAR_8, VAR_9, VAR_10, VAR_11;
 u32 VAR_12;

 VAR_12 = VAR_4->feat->buffer_size_unit;

 FUNC_5(VAR_6 % VAR_12 != 0);
 FUNC_5(VAR_7 % VAR_12 != 0);

 VAR_6 /= VAR_12;
 VAR_7 /= VAR_12;

 FUNC_6(VAR_4, VAR_1,
       &VAR_8, &VAR_9);
 FUNC_6(VAR_4, VAR_2,
       &VAR_10, &VAR_11);

 FUNC_2("fifo(%d) threshold (bytes), old %u/%u, new %u/%u\n",
   VAR_5,
   FUNC_4(VAR_4, FUNC_0(VAR_5),
    VAR_10, VAR_11) * VAR_12,
   FUNC_4(VAR_4, FUNC_0(VAR_5),
    VAR_8, VAR_9) * VAR_12,
   VAR_6 * VAR_12, VAR_7 * VAR_12);

 FUNC_8(VAR_4, FUNC_0(VAR_5),
   FUNC_3(VAR_7, VAR_8, VAR_9) |
   FUNC_3(VAR_6, VAR_10, VAR_11));






 if (FUNC_7(VAR_4, VAR_0) &&
     VAR_4->feat->set_max_preload && VAR_5 != VAR_3)
  FUNC_8(VAR_4, FUNC_1(VAR_5),
    FUNC_9(VAR_7, 0xfffu));
}
