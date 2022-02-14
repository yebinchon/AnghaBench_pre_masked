
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_device {int hbm_state; int devc; int wait_hbm_recvd_msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int,int ) ;
 int FUNC_2 (int ,int,int) ;

int FUNC_3(struct ishtp_device *VAR_6)
{
 int VAR_7;

 if (VAR_6->hbm_state > VAR_3)
  return 0;

 FUNC_0(VAR_6->devc, "Going to wait for ishtp start. hbm_state=%08X\n",
  VAR_6->hbm_state);
 VAR_7 = FUNC_2(VAR_6->wait_hbm_recvd_msg,
     VAR_6->hbm_state >= VAR_4,
     (VAR_5 * VAR_1));

 FUNC_0(VAR_6->devc,
  "Woke up from waiting for ishtp start. hbm_state=%08X\n",
  VAR_6->hbm_state);

 if (VAR_7 <= 0 && (VAR_6->hbm_state <= VAR_3)) {
  VAR_6->hbm_state = VAR_2;
  FUNC_1(VAR_6->devc,
  "waiting for ishtp start failed. ret=%d hbm_state=%08X\n",
   VAR_7, VAR_6->hbm_state);
  return -VAR_0;
 }
 return 0;
}
