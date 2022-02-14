
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smi_info {int msg_flags; int si_state; scalar_t__ (* oem_data_avail_handler ) (struct smi_info*) ;void* curr_msg; int intf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (struct smi_info*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct smi_info*,int ) ;
 int FUNC_3 (struct smi_info*) ;
 int FUNC_4 (struct smi_info*) ;
 int FUNC_5 (struct smi_info*) ;
 scalar_t__ FUNC_6 (struct smi_info*) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_7(struct smi_info *VAR_6)
{
retry:
 if (VAR_6->msg_flags & VAR_4) {

  FUNC_2(VAR_6, VAR_5);

  FUNC_3(VAR_6);
  VAR_6->msg_flags &= ~VAR_4;
  FUNC_1(VAR_6->intf);
 } else if (VAR_6->msg_flags & VAR_2) {

  VAR_6->curr_msg = FUNC_0(VAR_6);
  if (!VAR_6->curr_msg)
   return;

  FUNC_5(VAR_6);
 } else if (VAR_6->msg_flags & VAR_0) {

  VAR_6->curr_msg = FUNC_0(VAR_6);
  if (!VAR_6->curr_msg)
   return;

  FUNC_4(VAR_6);
 } else if (VAR_6->msg_flags & VAR_1 &&
     VAR_6->oem_data_avail_handler) {
  if (VAR_6->oem_data_avail_handler(VAR_6))
   goto retry;
 } else
  VAR_6->si_state = VAR_3;
}
