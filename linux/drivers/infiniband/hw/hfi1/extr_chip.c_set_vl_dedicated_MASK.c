
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct hfi1_devdata {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hfi1_devdata*,scalar_t__) ;
 int FUNC_1 (struct hfi1_devdata*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct hfi1_devdata *VAR_5, int VAR_6, u16 VAR_7)
{
 u64 VAR_8;
 u32 VAR_9;

 if (VAR_6 < VAR_4)
  VAR_9 = VAR_0 + (8 * VAR_6);
 else
  VAR_9 = VAR_1;

 VAR_8 = FUNC_0(VAR_5, VAR_9);
 VAR_8 &= ~VAR_3;
 VAR_8 |= (u64)VAR_7 << VAR_2;
 FUNC_1(VAR_5, VAR_9, VAR_8);
}
