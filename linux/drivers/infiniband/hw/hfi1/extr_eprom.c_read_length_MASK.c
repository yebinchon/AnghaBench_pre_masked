
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (void*,scalar_t__*,scalar_t__) ;
 int FUNC_1 (struct hfi1_devdata*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct hfi1_devdata *VAR_5, u32 VAR_6, u32 VAR_7, void *VAR_8)
{
 u32 VAR_9[VAR_2];
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;

 if (VAR_7 == 0)
  return 0;

 VAR_10 = VAR_6 + VAR_7;






 if (VAR_10 > (1 << VAR_0))
  return -VAR_1;


 VAR_11 = VAR_6 & VAR_3;
 if (VAR_11) {



  VAR_12 = VAR_6 & ~VAR_3;
  FUNC_1(VAR_5, VAR_12, VAR_9);


  VAR_13 = VAR_4 - VAR_11;

  if (VAR_7 <= VAR_13) {

   FUNC_0(VAR_8, (u8 *)VAR_9 + VAR_11, VAR_7);
   return 0;
  }

  FUNC_0(VAR_8, (u8 *)VAR_9 + VAR_11, VAR_13);

  VAR_6 += VAR_13;
  VAR_7 -= VAR_13;
  VAR_8 += VAR_13;
 }



 while (VAR_7 >= VAR_4) {
  FUNC_1(VAR_5, VAR_6, VAR_9);
  FUNC_0(VAR_8, VAR_9, VAR_4);

  VAR_6 += VAR_4;
  VAR_7 -= VAR_4;
  VAR_8 += VAR_4;
 }


 if (VAR_7) {
  FUNC_1(VAR_5, VAR_6, VAR_9);
  FUNC_0(VAR_8, VAR_9, VAR_7);
 }

 return 0;
}
