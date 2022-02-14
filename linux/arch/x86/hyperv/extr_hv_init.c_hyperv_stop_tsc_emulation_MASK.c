
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hv_tsc_emulation_status {scalar_t__ inprogress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(void)
{
 u64 VAR_3;
 struct hv_tsc_emulation_status VAR_4;

 FUNC_1(VAR_0, *(u64 *)&VAR_4);
 VAR_4.inprogress = 0;
 FUNC_2(VAR_0, *(u64 *)&VAR_4);

 FUNC_1(VAR_1, VAR_3);
 VAR_2 = FUNC_0(VAR_3, 1000);
}
