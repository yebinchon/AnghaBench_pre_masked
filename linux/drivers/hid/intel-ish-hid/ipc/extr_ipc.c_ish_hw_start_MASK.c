
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_device {int devc; int recvd_hw_ready; int wait_hw_ready; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ishtp_device*) ;
 int FUNC_2 (struct ishtp_device*) ;
 int FUNC_3 (struct ishtp_device*) ;
 int FUNC_4 (int ,int ,int) ;

int FUNC_5(struct ishtp_device *VAR_2)
{
 FUNC_1(VAR_2);

 FUNC_3(VAR_2);


 FUNC_2(VAR_2);


 if (!VAR_2->recvd_hw_ready)
  FUNC_4(VAR_2->wait_hw_ready,
       VAR_2->recvd_hw_ready,
       10 * VAR_1);

 if (!VAR_2->recvd_hw_ready) {
  FUNC_0(VAR_2->devc,
   "[ishtp-ish]: Timed out waiting for FW-initiated reset\n");
  return -VAR_0;
 }

 return 0;
}
