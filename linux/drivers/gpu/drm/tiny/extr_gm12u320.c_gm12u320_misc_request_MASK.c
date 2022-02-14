
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct gm12u320_device {void** cmd_buf; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (void**,int *,int) ;
 int FUNC_2 (int ,int ,void**,int,int*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct gm12u320_device *VAR_9,
     u8 VAR_10, u8 VAR_11,
     u8 VAR_12, u8 VAR_13, u8 VAR_14, u8 VAR_15)
{
 int VAR_16, VAR_17;

 FUNC_1(VAR_9->cmd_buf, &VAR_8, VAR_0);
 VAR_9->cmd_buf[20] = VAR_10;
 VAR_9->cmd_buf[21] = VAR_11;
 VAR_9->cmd_buf[22] = VAR_12;
 VAR_9->cmd_buf[23] = VAR_13;
 VAR_9->cmd_buf[24] = VAR_14;
 VAR_9->cmd_buf[25] = VAR_15;


 VAR_16 = FUNC_2(VAR_9->udev,
      FUNC_4(VAR_9->udev, VAR_5),
      VAR_9->cmd_buf, VAR_0, &VAR_17, VAR_1);
 if (VAR_16 || VAR_17 != VAR_0) {
  FUNC_0("Misc. req. error %d\n", VAR_16);
  return -VAR_3;
 }


 VAR_16 = FUNC_2(VAR_9->udev,
      FUNC_3(VAR_9->udev, VAR_4),
      VAR_9->cmd_buf, VAR_6, &VAR_17,
      VAR_2);
 if (VAR_16 || VAR_17 != VAR_6) {
  FUNC_0("Misc. value error %d\n", VAR_16);
  return -VAR_3;
 }



 VAR_16 = FUNC_2(VAR_9->udev,
      FUNC_3(VAR_9->udev, VAR_4),
      VAR_9->cmd_buf, VAR_7, &VAR_17,
      VAR_1);
 if (VAR_16 || VAR_17 != VAR_7) {
  FUNC_0("Misc. status error %d\n", VAR_16);
  return -VAR_3;
 }

 return 0;
}
