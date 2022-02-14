
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct rtl8366_smi {int dummy; } ;
typedef int port ;
struct TYPE_2__ {int length; scalar_t__ offset; } ;


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
 int FUNC_0 (struct rtl8366_smi*,int,int*) ;
 int FUNC_1 (struct rtl8366_smi*,int,int) ;
 TYPE_1__* VAR_10 ;

__attribute__((used)) static int FUNC_2(struct rtl8366_smi *VAR_11, int VAR_12,
         int VAR_13, unsigned long long *VAR_14)
{
 int VAR_15;
 int VAR_16;
 u32 VAR_17, VAR_18;
 u64 VAR_19;

 if (VAR_13 > VAR_9 || VAR_12 >= VAR_3)
  return -VAR_1;

 VAR_17 = VAR_4 +
        VAR_5 * (VAR_13) +
        VAR_10[VAR_12].offset;





 VAR_18 = 0;
 VAR_16 = FUNC_1(VAR_11, VAR_17, VAR_18);
 if (VAR_16)
  return VAR_16;


 VAR_16 = FUNC_0(VAR_11, VAR_7, &VAR_18);
 if (VAR_16)
  return VAR_16;

 if (VAR_18 & VAR_6)
  return -VAR_0;

 if (VAR_18 & VAR_8)
  return -VAR_2;

 VAR_19 = 0;
 for (VAR_15 = VAR_10[VAR_12].length; VAR_15 > 0; VAR_15--) {
  VAR_16 = FUNC_0(VAR_11, VAR_17 + (VAR_15 - 1), &VAR_18);
  if (VAR_16)
   return VAR_16;

  VAR_19 = (VAR_19 << 16) | (VAR_18 & 0xFFFF);
 }

 *VAR_14 = VAR_19;
 return 0;
}
