
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u16 ;
struct hfi1_devdata {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct hfi1_devdata*,scalar_t__,scalar_t__,int) ;

int FUNC_2(struct hfi1_devdata *VAR_4, u16 VAR_5, u16 VAR_6, bool VAR_7)
{
 u64 VAR_8 = 0;
 u64 VAR_9;
 u16 VAR_10;

 if (VAR_5 > VAR_3 || VAR_6 > VAR_3)
  return -VAR_1;

 if (VAR_6 < VAR_5)
  return -VAR_2;

 for (VAR_10 = VAR_5; VAR_10 <= VAR_6; VAR_10++) {
  VAR_9 = VAR_10 % VAR_0;

  if (!VAR_9 && VAR_8) {
   FUNC_1(VAR_4, VAR_10 - 1, VAR_8, VAR_7);
   VAR_8 = 0;
  }
  VAR_8 |= FUNC_0(VAR_9);
 }
 FUNC_1(VAR_4, VAR_6, VAR_8, VAR_7);

 return 0;
}
