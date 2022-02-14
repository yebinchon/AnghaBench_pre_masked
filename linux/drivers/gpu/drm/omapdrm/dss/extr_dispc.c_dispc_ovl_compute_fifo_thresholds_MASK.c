
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct dispc_device {TYPE_1__* feat; } ;
typedef enum omap_plane_id { ____Placeholder_omap_plane_id } omap_plane_id ;
struct TYPE_2__ {unsigned int buffer_size_unit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dispc_device*) ;
 scalar_t__ FUNC_1 (struct dispc_device*,int ) ;
 unsigned int FUNC_2 (struct dispc_device*,int) ;
 unsigned int FUNC_3 (struct dispc_device*,int) ;

void FUNC_4(struct dispc_device *VAR_2,
           enum omap_plane_id VAR_3,
           u32 *VAR_4, u32 *VAR_5,
           bool VAR_6, bool VAR_7)
{




 unsigned int VAR_8 = VAR_2->feat->buffer_size_unit;
 unsigned int VAR_9, VAR_10, VAR_11;
 int VAR_12;

 VAR_11 = FUNC_2(VAR_2, VAR_3);
 VAR_9 = FUNC_3(VAR_2, VAR_3);

 if (VAR_6) {
  VAR_10 = 0;
  for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_2); ++VAR_12)
   VAR_10 += FUNC_3(VAR_2, VAR_12);
 } else {
  VAR_10 = VAR_9;
 }







 if (VAR_7 && FUNC_1(VAR_2, VAR_0)) {
  *VAR_4 = VAR_9 - VAR_11 * 2;
  *VAR_5 = VAR_10 - VAR_11;
 } else if (VAR_3 == VAR_1) {





  *VAR_4 = 0;
  *VAR_5 = VAR_11;
 } else {
  *VAR_4 = VAR_9 - VAR_11;
  *VAR_5 = VAR_10 - VAR_8;
 }
}
