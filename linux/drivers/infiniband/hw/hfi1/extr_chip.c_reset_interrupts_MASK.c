
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hfi1_devdata {int * gi_mask; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hfi1_devdata*,scalar_t__,int ) ;

void FUNC_1(struct hfi1_devdata *VAR_3)
{
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  VAR_3->gi_mask[VAR_4] = ~(u64)0;


 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_0(VAR_3, VAR_0 + (8 * VAR_4), 0);
}
