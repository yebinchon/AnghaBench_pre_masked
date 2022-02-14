
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct videomode {int dummy; } ;
struct dispc_device {TYPE_1__* feat; } ;
struct TYPE_2__ {int max_line_width; int max_downscale; unsigned long (* calc_core_clk ) (unsigned long,int,int,int,int,int) ;} ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int FUNC_2 (struct dispc_device*) ;
 unsigned long FUNC_3 (unsigned long,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct dispc_device *VAR_2,
           unsigned long VAR_3, unsigned long VAR_4,
           const struct videomode *VAR_5,
           u16 VAR_6, u16 VAR_7,
           u16 VAR_8, u16 VAR_9,
           u32 VAR_10, bool *VAR_11,
           int *VAR_12, int *VAR_13,
           int *VAR_14, int *VAR_15,
           u16 VAR_16, unsigned long *VAR_17,
           bool VAR_18)
{
 u16 VAR_19, VAR_20;
 int VAR_21 = *VAR_14;
 u16 VAR_22 = VAR_7 / *VAR_15;
 const int VAR_23 = VAR_2->feat->max_line_width;
 const int VAR_24 = VAR_2->feat->max_downscale;

 if (VAR_18) {
  VAR_20 = VAR_8 * VAR_24;
 } else {
  VAR_20 = FUNC_2(VAR_2)
        / FUNC_0(VAR_3, VAR_8);
 }

 *VAR_14 = FUNC_0(VAR_6, VAR_20);

 *VAR_14 = *VAR_14 > VAR_21 ? *VAR_14 : VAR_21;
 if (*VAR_14 > *VAR_12)
  return -VAR_1;

 do {
  VAR_19 = VAR_6 / *VAR_14;
 } while (*VAR_14 <= *VAR_12 &&
   VAR_19 > VAR_23 && ++*VAR_14);

 if (VAR_19 > VAR_23) {
  FUNC_1("Cannot scale width exceeds max line width\n");
  return -VAR_1;
 }

 if (*VAR_14 > 4 && VAR_10 != VAR_0) {
  FUNC_1("Not enough bandwidth, too much downscaling (x-decimation factor %d > 4)\n", *VAR_14);

  return -VAR_1;
 }

 *VAR_17 = VAR_2->feat->calc_core_clk(VAR_3, VAR_19, VAR_22,
    VAR_8, VAR_9, VAR_18);
 return 0;
}
