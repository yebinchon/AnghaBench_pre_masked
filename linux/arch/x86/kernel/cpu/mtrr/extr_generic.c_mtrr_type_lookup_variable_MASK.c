
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_4__ {int def_type; TYPE_1__* var_ranges; } ;
struct TYPE_3__ {int mask_lo; int base_lo; scalar_t__ mask_hi; scalar_t__ base_hi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int*,int*) ;
 int FUNC_2 (int) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static u8 FUNC_4(u64 VAR_5, u64 VAR_6, u64 *VAR_7,
        int *VAR_8, u8 *VAR_9)
{
 int VAR_10;
 u64 VAR_11, VAR_12;
 u8 VAR_13, VAR_14;

 *VAR_8 = 0;
 *VAR_9 = 1;


 VAR_6--;

 VAR_13 = VAR_0;
 for (VAR_10 = 0; VAR_10 < VAR_4; ++VAR_10) {
  unsigned short VAR_15, VAR_16, VAR_17;

  if (!(VAR_3.var_ranges[VAR_10].mask_lo & (1 << 11)))
   continue;

  VAR_11 = (((u64)VAR_3.var_ranges[VAR_10].base_hi) << 32) +
         (VAR_3.var_ranges[VAR_10].base_lo & VAR_1);
  VAR_12 = (((u64)VAR_3.var_ranges[VAR_10].mask_hi) << 32) +
         (VAR_3.var_ranges[VAR_10].mask_lo & VAR_1);

  VAR_15 = ((VAR_5 & VAR_12) == (VAR_11 & VAR_12));
  VAR_16 = ((VAR_6 & VAR_12) == (VAR_11 & VAR_12));
  VAR_17 = ((VAR_5 < VAR_11) && (VAR_6 > VAR_11));

  if ((VAR_15 != VAR_16) || VAR_17) {
   if (VAR_15)
    *VAR_7 = VAR_11 + FUNC_2(VAR_12);
   else
    *VAR_7 = VAR_11;

   if (FUNC_3(*VAR_7 <= VAR_5)) {
    FUNC_0(1);
    *VAR_7 = VAR_5 + VAR_2;
   }

   VAR_6 = *VAR_7 - 1;
   *VAR_8 = 1;
   *VAR_9 = 0;
  }

  if ((VAR_5 & VAR_12) != (VAR_11 & VAR_12))
   continue;

  VAR_14 = VAR_3.var_ranges[VAR_10].base_lo & 0xff;
  if (VAR_13 == VAR_0) {
   VAR_13 = VAR_14;
   continue;
  }

  *VAR_9 = 0;
  if (FUNC_1(&VAR_13, &VAR_14))
   return VAR_14;
 }

 if (VAR_13 != VAR_0)
  return VAR_13;

 return VAR_3.def_type;
}
