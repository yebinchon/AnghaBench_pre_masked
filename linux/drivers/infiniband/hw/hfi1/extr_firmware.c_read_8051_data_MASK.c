
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct hfi1_devdata {int dc8051_memlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hfi1_devdata*,scalar_t__,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct hfi1_devdata*,int ,int ) ;

int FUNC_4(struct hfi1_devdata *VAR_2, u32 VAR_3, u32 VAR_4, u64 *VAR_5)
{
 unsigned long VAR_6;
 u32 VAR_7;
 int VAR_8 = 0;

 FUNC_1(&VAR_2->dc8051_memlock, VAR_6);


 FUNC_3(VAR_2, VAR_1, 0);

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_3 += 8, VAR_7 += 8, VAR_5++) {
  VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_5);
  if (VAR_8)
   break;
 }


 FUNC_3(VAR_2, VAR_0, 0);

 FUNC_2(&VAR_2->dc8051_memlock, VAR_6);

 return VAR_8;
}
