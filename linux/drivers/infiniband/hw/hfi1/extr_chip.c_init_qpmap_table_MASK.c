
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hfi1_devdata*,int) ;
 int FUNC_1 (struct hfi1_devdata*,int,int) ;

__attribute__((used)) static void FUNC_2(struct hfi1_devdata *VAR_3,
        u32 VAR_4,
        u32 VAR_5)
{
 u64 VAR_6 = 0;
 u64 VAR_7 = VAR_2;
 int VAR_8;
 u64 VAR_9 = VAR_4;

 for (VAR_8 = 0; VAR_8 < 256; VAR_8++) {
  VAR_6 |= VAR_9 << (8 * (VAR_8 % 8));
  VAR_9++;
  if (VAR_9 > VAR_5)
   VAR_9 = VAR_4;
  if (VAR_8 % 8 == 7) {
   FUNC_1(VAR_3, VAR_7, VAR_6);
   VAR_6 = 0;
   VAR_7 += 8;
  }
 }

 FUNC_0(VAR_3, VAR_1
   | VAR_0);
}
