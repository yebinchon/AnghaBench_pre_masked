
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct videomode {int dummy; } ;
struct dispc_device {TYPE_1__* feat; } ;
struct TYPE_2__ {int max_line_width; unsigned long (* calc_core_clk ) (unsigned long,int,int,int,int,int) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 unsigned long FUNC_1 (struct dispc_device*) ;
 int FUNC_2 (int,int) ;
 unsigned long FUNC_3 (unsigned long,int,int,int,int,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct dispc_device *VAR_1,
           unsigned long VAR_2, unsigned long VAR_3,
           const struct videomode *VAR_4,
           u16 VAR_5, u16 VAR_6,
           u16 VAR_7, u16 VAR_8,
           u32 VAR_9, bool *VAR_10,
           int *VAR_11, int *VAR_12,
           int *VAR_13, int *VAR_14,
           u16 VAR_15, unsigned long *VAR_16,
           bool VAR_17)
{
 int VAR_18;
 u16 VAR_19, VAR_20;
 int VAR_21 = FUNC_2(*VAR_13, *VAR_14);
 const int VAR_22 = VAR_1->feat->max_line_width;

 *VAR_10 = 0;

 do {
  VAR_20 = VAR_6 / *VAR_14;
  VAR_19 = VAR_5 / *VAR_13;
  *VAR_16 = VAR_1->feat->calc_core_clk(VAR_2, VAR_19,
    VAR_20, VAR_7, VAR_8, VAR_17);
  VAR_18 = (VAR_19 > VAR_22 || !*VAR_16 ||
   *VAR_16 > FUNC_1(VAR_1));
  if (VAR_18) {
   if (*VAR_13 == *VAR_14) {
    *VAR_13 = VAR_21;
    ++*VAR_14;
   } else {
    FUNC_4(*VAR_13, *VAR_14);
    if (*VAR_13 < *VAR_14)
     ++*VAR_13;
   }
  }
 } while (*VAR_13 <= *VAR_11 && *VAR_14 <= *VAR_12 && VAR_18);

 if (VAR_18) {
  FUNC_0("failed to find scaling settings\n");
  return -VAR_0;
 }

 if (VAR_19 > VAR_22) {
  FUNC_0("Cannot scale max input width exceeded\n");
  return -VAR_0;
 }
 return 0;
}
