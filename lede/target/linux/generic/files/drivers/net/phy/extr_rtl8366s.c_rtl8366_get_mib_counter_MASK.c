
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct rtl8366_smi {int dummy; } ;
struct TYPE_2__ {int base; int offset; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct rtl8366_smi*,int,int*) ;
 int FUNC_1 (struct rtl8366_smi*,int,int) ;
 TYPE_1__* VAR_12 ;

__attribute__((used)) static int FUNC_2(struct rtl8366_smi *VAR_13, int VAR_14,
       int VAR_15, unsigned long long *VAR_16)
{
 int VAR_17;
 int VAR_18;
 u32 VAR_19, VAR_20;
 u64 VAR_21;

 if (VAR_15 > VAR_11 || VAR_14 >= VAR_3)
  return -VAR_1;

 switch (VAR_12[VAR_14].base) {
 case 0:
  VAR_19 = VAR_4 +
         VAR_6 * VAR_15;
  break;

 case 1:
  VAR_19 = VAR_5 +
   VAR_7 * VAR_15;
  break;

 default:
  return -VAR_1;
 }

 VAR_19 += VAR_12[VAR_14].offset;





 VAR_20 = 0;
 VAR_18 = FUNC_1(VAR_13, VAR_19, VAR_20);
 if (VAR_18)
  return VAR_18;


 VAR_18 = FUNC_0(VAR_13, VAR_9, &VAR_20);
 if (VAR_18)
  return VAR_18;

 if (VAR_20 & VAR_8)
  return -VAR_0;

 if (VAR_20 & VAR_10)
  return -VAR_2;

 VAR_21 = 0;
 for (VAR_17 = VAR_12[VAR_14].length; VAR_17 > 0; VAR_17--) {
  VAR_18 = FUNC_0(VAR_13, VAR_19 + (VAR_17 - 1), &VAR_20);
  if (VAR_18)
   return VAR_18;

  VAR_21 = (VAR_21 << 16) | (VAR_20 & 0xFFFF);
 }

 *VAR_16 = VAR_21;
 return 0;
}
