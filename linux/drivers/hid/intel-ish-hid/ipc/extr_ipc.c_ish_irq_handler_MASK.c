
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ishtp_device {scalar_t__ dev_state; int ipc_rx_bytes_cnt; int ipc_rx_cnt; int devc; } ;
typedef int irqreturn_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct ishtp_device*) ;
 int FUNC_4 (int ,char*,unsigned int) ;
 int FUNC_5 (struct ishtp_device*,int ) ;
 int FUNC_6 (struct ishtp_device*,int ,int ) ;
 int FUNC_7 (struct ishtp_device*) ;
 int FUNC_8 (struct ishtp_device*,int ) ;

irqreturn_t FUNC_9(int VAR_6, void *VAR_7)
{
 struct ishtp_device *VAR_8 = VAR_7;
 uint32_t VAR_9;
 bool VAR_10;


 VAR_10 = FUNC_3(VAR_8);

 if (!VAR_10)
  return VAR_4;

 VAR_9 = FUNC_5(VAR_8, VAR_1);
 if (!FUNC_2(VAR_9))
  return VAR_3;

 if (VAR_8->dev_state == VAR_5)
  return VAR_3;


 if (FUNC_0(VAR_9) > VAR_0) {
  FUNC_4(VAR_8->devc,
   "IPC hdr - bad length: %u; dropped\n",
   (unsigned int)FUNC_0(VAR_9));
  goto eoi;
 }

 switch (FUNC_1(VAR_9)) {
 default:
  break;
 case 128:
  FUNC_8(VAR_8, VAR_9);
  break;
 case 129:
  FUNC_7(VAR_8);
  break;
 }

eoi:

 ++VAR_8->ipc_rx_cnt;
 VAR_8->ipc_rx_bytes_cnt += FUNC_0(VAR_9);

 FUNC_6(VAR_8, VAR_1, 0);

 FUNC_5(VAR_8, VAR_2);

 return VAR_3;
}
