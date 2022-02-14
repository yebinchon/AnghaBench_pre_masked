
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hws_qsi_info_block {unsigned long cpu_speed; } ;
typedef int si ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ,int ) ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct hws_qsi_info_block*,int ,int) ;
 int FUNC_3 (struct hws_qsi_info_block*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(void)
{
 if (FUNC_1()) {
  struct hws_qsi_info_block VAR_2;

  FUNC_2(&VAR_2, 0, sizeof(VAR_2));
  if (!FUNC_3(&VAR_2)) {
   VAR_1 = VAR_2.cpu_speed;
   return;
  }
 }

 if (FUNC_4(34)) {
  unsigned long VAR_3 = FUNC_0(VAR_0, 0);

  if (VAR_3 != -1UL)
   VAR_1 = VAR_3 & 0xffffffff;
 }
}
