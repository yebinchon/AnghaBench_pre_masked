
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_device {int devc; scalar_t__ recvd_hw_ready; int wait_hw_ready; } ;
struct ipc_rst_payload_type {int reset_id; scalar_t__ reserved; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ishtp_device*,int ,struct ipc_rst_payload_type*,int) ;
 int FUNC_2 (struct ishtp_device*,int ) ;
 int FUNC_3 (struct ishtp_device*,int ,int ) ;
 int FUNC_4 (struct ishtp_device*) ;
 int FUNC_5 (int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_6(struct ishtp_device *VAR_5)
{
 struct ipc_rst_payload_type VAR_6;
 int VAR_7 = 0;

 VAR_6.reset_id = 1;
 VAR_6.reserved = 0;

 FUNC_4(VAR_5);


 FUNC_3(VAR_5, VAR_2, 0);

 FUNC_2(VAR_5, VAR_3);

 VAR_5->recvd_hw_ready = 0;


 VAR_7 = FUNC_1(VAR_5, VAR_4, &VAR_6,
  sizeof(struct ipc_rst_payload_type));
 if (VAR_7) {
  FUNC_0(VAR_5->devc, "Failed to send IPC MNG_RESET_NOTIFY\n");
  return VAR_7;
 }

 FUNC_5(VAR_5->wait_hw_ready,
      VAR_5->recvd_hw_ready, 2 * VAR_1);
 if (!VAR_5->recvd_hw_ready) {
  FUNC_0(VAR_5->devc, "Timed out waiting for HW ready\n");
  VAR_7 = -VAR_0;
 }

 return VAR_7;
}
