
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_msg {int addr; } ;
struct bcm_iproc_i2c_dev {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;



 int VAR_6 ;


 int FUNC_0 (struct bcm_iproc_i2c_dev*,int) ;
 int FUNC_1 (struct bcm_iproc_i2c_dev*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct bcm_iproc_i2c_dev*,int ) ;

__attribute__((used)) static int FUNC_4(struct bcm_iproc_i2c_dev *VAR_7,
          struct i2c_msg *VAR_8)
{
 u32 VAR_9;

 VAR_9 = FUNC_3(VAR_7, VAR_4);
 VAR_9 = (VAR_9 >> VAR_6) & VAR_5;

 switch (VAR_9) {
 case 129:
  return 0;

 case 133:
  FUNC_2(VAR_7->device, "lost bus arbitration\n");
  return -VAR_0;

 case 132:
  FUNC_2(VAR_7->device, "NAK addr:0x%02x\n", VAR_8->addr);
  return -VAR_2;

 case 131:
  FUNC_2(VAR_7->device, "NAK data\n");
  return -VAR_2;

 case 128:
  FUNC_2(VAR_7->device, "bus timeout\n");
  return -VAR_3;

 case 134:
  FUNC_2(VAR_7->device, "FIFO under-run\n");
  return -VAR_2;

 case 130:
  FUNC_2(VAR_7->device, "RX FIFO full\n");
  return -VAR_3;

 default:
  FUNC_2(VAR_7->device, "unknown error code=%d\n", VAR_9);


  FUNC_0(VAR_7, 0);
  FUNC_1(VAR_7);
  FUNC_0(VAR_7, 1);

  return -VAR_1;
 }
}
