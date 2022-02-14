
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct work_struct {int dummy; } ;
struct hv_tsc_emulation_status {scalar_t__ inprogress; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct work_struct *VAR_1)
{
 struct hv_tsc_emulation_status VAR_2;

 FUNC_1(VAR_0, *(u64 *)&VAR_2);


 if (&FUNC_0 && VAR_2.inprogress)
  FUNC_0();
}
