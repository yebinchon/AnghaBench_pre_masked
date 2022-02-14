
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct hfi1_pportdata {int current_egress_rate; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static u16 FUNC_1(struct hfi1_pportdata *VAR_0, u32 VAR_1,
   u32 VAR_2)
{
 u32 VAR_3;
 u32 VAR_4 = VAR_0->current_egress_rate;


 if (VAR_1 == -1)
  return 0;

 if (VAR_1 >= VAR_4)
  return 0;

 VAR_3 = FUNC_0(VAR_2 * 4, VAR_1) -
   FUNC_0(VAR_2 * 4, VAR_4);

 return (u16)VAR_3;
}
