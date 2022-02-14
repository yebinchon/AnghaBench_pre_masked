
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct sdma_engine {int dummy; } ;
struct hfi1_devdata {int num_sdma; struct sdma_engine* per_sdma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (struct sdma_engine*,int,int) ;

void FUNC_3(struct hfi1_devdata *VAR_6, u64 VAR_7, u32 VAR_8)
{
 struct sdma_engine *VAR_9;
 int VAR_10;
 u64 VAR_11;

 VAR_11 = ((VAR_7 & FUNC_0(VAR_1)) <<
  FUNC_0(VAR_2)) |
  (((VAR_8 & VAR_7) & FUNC_0(VAR_3)) <<
  FUNC_0(VAR_4));

 for (VAR_10 = 0; VAR_10 < VAR_6->num_sdma; VAR_10++) {
  FUNC_1(VAR_5, "SendDmaEngine[%d].SLID_CHECK = 0x%x",
     VAR_10, (u32)VAR_11);
  VAR_9 = &VAR_6->per_sdma[VAR_10];
  FUNC_2(VAR_9, FUNC_0(VAR_0), VAR_11);
 }
}
