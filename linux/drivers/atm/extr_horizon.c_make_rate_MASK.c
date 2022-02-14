
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
typedef unsigned int u16 ;
typedef int rounding ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ hrz_dev ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_0 (unsigned long const,unsigned int) ;
 unsigned int FUNC_1 (unsigned long const,unsigned int) ;
 int VAR_9 ;
 int FUNC_2 (int,char*,...) ;


 int VAR_10 ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_4 (const hrz_dev * VAR_12, u32 VAR_13, rounding VAR_14,
        u16 * VAR_15, unsigned int * VAR_16)
{

 const unsigned long VAR_17 = FUNC_3(VAR_11, &VAR_12->flags) ? VAR_1 : VAR_0;

 u32 VAR_18 = VAR_5;
 u32 VAR_19;





 unsigned long VAR_20 = VAR_17;
 unsigned int VAR_21 = 0;

 FUNC_2 (VAR_8|VAR_7, "make_rate b=%lu, c=%u, %s", VAR_17, VAR_13,
  VAR_14 == VAR_10 ? "up" : VAR_14 == 129 ? "down" : "nearest");


 if (!VAR_13) {
  FUNC_2 (VAR_8|VAR_6, "zero rate is not allowed!");
  return -VAR_9;
 }

 while (VAR_21 < VAR_4 + VAR_5 && (VAR_20 % 2 == 0)) {
  VAR_20 = VAR_20 >> 1;
  ++VAR_21;
 }



 if (VAR_20 <= (VAR_13 << (VAR_4+VAR_5-VAR_21))) {


  switch (VAR_14) {
   case 129:
    VAR_19 = FUNC_1(VAR_17, VAR_13<<VAR_18);

    if (!VAR_19)
     VAR_19 = 1;
    break;
   case 128:
    VAR_19 = FUNC_0(VAR_17, VAR_13<<VAR_18);

    if (!VAR_19)
     VAR_19 = 1;
    break;
   default:
    VAR_19 = VAR_17/(VAR_13<<VAR_18);

    if (!VAR_19)
     return -VAR_9;
  }
  FUNC_2 (VAR_8, "A: p=%u, d=%u", VAR_19, VAR_18);
  goto got_it;
 }



 while (VAR_18 < VAR_3) {
  VAR_18++;
  if (VAR_20 <= (VAR_13 << (VAR_4+VAR_18-VAR_21))) {





   switch (VAR_14) {
    case 129:
     VAR_19 = FUNC_1(VAR_17, VAR_13<<VAR_18);
     break;
    case 128:
     VAR_19 = FUNC_0(VAR_17, VAR_13<<VAR_18);
     break;
    default:
     VAR_19 = VAR_17/(VAR_13<<VAR_18);
   }
   FUNC_2 (VAR_8, "B: p=%u, d=%u", VAR_19, VAR_18);
   goto got_it;
  }
 }




 if (VAR_14 == 129)
  return -VAR_9;
 VAR_19 = 1 << VAR_4;
 FUNC_2 (VAR_8, "C: p=%u, d=%u", VAR_19, VAR_18);
got_it:

 if (VAR_18 > VAR_3 || (!VAR_19) || VAR_19 > 1<<VAR_4) {
  FUNC_2 (VAR_8, "set_cr internal failure: d=%u p=%u",
   VAR_18, VAR_19);
  return -VAR_9;
 } else {
  if (VAR_15)
   *VAR_15 = (VAR_18<<VAR_2) | (VAR_19-1);
  if (VAR_16) {
   *VAR_16 = FUNC_1(VAR_17, VAR_19<<VAR_18);
   FUNC_2 (VAR_8, "actual rate: %u", *VAR_16);
  }
  return 0;
 }
}
