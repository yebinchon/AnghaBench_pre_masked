
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct TYPE_4__ {int recvd_hw_ready; int devc; int wait_hw_ready; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct work_struct *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if (!VAR_3) {

  FUNC_3(VAR_0);
  VAR_1->recvd_hw_ready = 1;
  FUNC_4(&VAR_1->wait_hw_ready);


  FUNC_2(VAR_1);
 } else
  FUNC_0(VAR_1->devc, "[ishtp-ish]: FW reset failed (%d)\n",
   VAR_3);
}
