
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dispc_device {int dummy; } ;
typedef enum omap_plane_id { ____Placeholder_omap_plane_id } omap_plane_id ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct dispc_device*,int ,int *,int *) ;
 int FUNC_3 (struct dispc_device*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct dispc_device *VAR_2,
        enum omap_plane_id VAR_3, int VAR_4,
        int VAR_5)
{
 u32 VAR_6;
 u8 VAR_7, VAR_8, VAR_9, VAR_10;

 FUNC_2(VAR_2, VAR_0,
       &VAR_7, &VAR_8);
 FUNC_2(VAR_2, VAR_1,
       &VAR_9, &VAR_10);

 VAR_6 = FUNC_1(VAR_5, VAR_9, VAR_10) |
   FUNC_1(VAR_4, VAR_7, VAR_8);

 FUNC_3(VAR_2, FUNC_0(VAR_3), VAR_6);
}
