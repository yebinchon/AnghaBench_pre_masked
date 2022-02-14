
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sdma_engine {int dummy; } ;
struct hfi1_devdata {int dummy; } ;


 int FUNC_0 (struct hfi1_devdata*,int ) ;
 struct sdma_engine* FUNC_1 (struct hfi1_devdata*,int ,int ) ;

struct sdma_engine *FUNC_2(
 struct hfi1_devdata *VAR_0,
 u32 VAR_1,
 u8 VAR_2)
{
 u8 VAR_3 = FUNC_0(VAR_0, VAR_2);

 return FUNC_1(VAR_0, VAR_1, VAR_3);
}
