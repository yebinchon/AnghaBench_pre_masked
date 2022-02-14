
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
 unsigned long FUNC_1 (unsigned long,struct videomode const*,int,int,int,int,int ) ;
 int FUNC_2 (unsigned long,unsigned long,struct videomode const*,int,int,int,int,int,int) ;
 unsigned long FUNC_3 (struct dispc_device*) ;
 unsigned long FUNC_4 (unsigned long,int,int,int,int,int) ;

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
 const int VAR_21 = VAR_1->feat->max_line_width;

 do {
  VAR_20 = VAR_6 / *VAR_14;
  VAR_19 = VAR_5 / *VAR_13;
  *VAR_10 = VAR_20 > VAR_8;

  if (VAR_19 > VAR_21)
   if (VAR_20 > VAR_8 &&
      VAR_20 < VAR_8 * 2)
    *VAR_10 = 0;
again:
  if (*VAR_10)
   *VAR_16 = FUNC_1(VAR_2, VAR_4,
      VAR_19, VAR_20, VAR_7,
      VAR_8, VAR_9);
  else
   *VAR_16 = VAR_1->feat->calc_core_clk(VAR_2, VAR_19,
     VAR_20, VAR_7, VAR_8,
     VAR_17);

  VAR_18 = FUNC_2(VAR_2, VAR_3, VAR_4,
    VAR_15, VAR_19, VAR_20, VAR_7,
    VAR_8, *VAR_10);
  if (VAR_18 && *VAR_10) {
   *VAR_10 = 0;
   goto again;
  }

  VAR_18 = (VAR_18 || VAR_19 > VAR_21 * 2 ||
   (VAR_19 > VAR_21 && *VAR_10) ||
   !*VAR_16 || *VAR_16 > FUNC_3(VAR_1));

  if (!VAR_18) {

   if (VAR_19 / 4 > VAR_7)
     VAR_18 = 1;

   if (*VAR_10) {
    if (VAR_20 / 4 > VAR_8)
     VAR_18 = 1;
   } else {
    if (VAR_20 / 2 > VAR_8)
     VAR_18 = 1;
   }
  }

  if (VAR_18)
   ++*VAR_14;
 } while (*VAR_13 <= *VAR_11 && *VAR_14 <= *VAR_12 && VAR_18);

 if (VAR_18) {
  FUNC_0("failed to find scaling settings\n");
  return -VAR_0;
 }

 if (FUNC_2(VAR_2, VAR_3, VAR_4, VAR_15, VAR_19,
    VAR_20, VAR_7, VAR_8, *VAR_10)) {
   FUNC_0("horizontal timing too tight\n");
   return -VAR_0;
 }

 if (VAR_19 > (VAR_21 * 2)) {
  FUNC_0("Cannot setup scaling\n");
  FUNC_0("width exceeds maximum width possible\n");
  return -VAR_0;
 }

 if (VAR_19 > VAR_21 && *VAR_10) {
  FUNC_0("cannot setup scaling with five taps\n");
  return -VAR_0;
 }
 return 0;
}
