
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssi_protocol {scalar_t__ main_state; scalar_t__ send_state; int lock; } ;
struct hsi_client {int device; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 struct ssi_protocol* FUNC_1 (struct hsi_client*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ssi_protocol*,int ) ;
 int FUNC_5 (struct hsi_client*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct hsi_client *VAR_3)
{
 struct ssi_protocol *VAR_4 = FUNC_1(VAR_3);

 FUNC_2(&VAR_4->lock);
 if (FUNC_6(VAR_4->main_state != VAR_0)) {
  FUNC_0(&VAR_3->device, "READY on wrong state: S(%d) M(%d)\n",
     VAR_4->send_state, VAR_4->main_state);
  FUNC_3(&VAR_4->lock);
  return;
 }
 if (VAR_4->send_state != VAR_2) {
  FUNC_0(&VAR_3->device, "Ignore spurious READY command\n");
  FUNC_3(&VAR_4->lock);
  return;
 }
 FUNC_4(VAR_4, VAR_1);
 FUNC_3(&VAR_4->lock);
 FUNC_5(VAR_3);
}
