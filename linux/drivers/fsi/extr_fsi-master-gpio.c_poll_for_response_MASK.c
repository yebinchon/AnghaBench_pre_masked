
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct fsi_master_gpio {int t_send_delay; int dev; } ;
struct fsi_gpio_msg {int msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_0 (struct fsi_gpio_msg*,int) ;
 int FUNC_1 (struct fsi_gpio_msg*,int) ;
 int FUNC_2 (struct fsi_master_gpio*,int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct fsi_master_gpio*) ;
 int FUNC_6 (struct fsi_master_gpio*,int) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (struct fsi_master_gpio*,int,struct fsi_gpio_msg*,int*) ;
 int FUNC_10 (struct fsi_master_gpio*,struct fsi_gpio_msg*) ;
 int FUNC_11 (struct fsi_master_gpio*) ;
 int FUNC_12 (struct fsi_master_gpio*) ;
 int FUNC_13 (struct fsi_master_gpio*,int) ;

__attribute__((used)) static int FUNC_14(struct fsi_master_gpio *VAR_6,
  uint8_t VAR_7, uint8_t VAR_8, void *VAR_9)
{
 struct fsi_gpio_msg VAR_10, VAR_11;
 int VAR_12 = 0, VAR_13, VAR_14;
 unsigned long VAR_15;
 uint8_t VAR_16;
 uint8_t *VAR_17 = VAR_9;
 int VAR_18 = 0;
retry:
 VAR_13 = FUNC_9(VAR_6, VAR_8, &VAR_10, &VAR_16);


 if (VAR_13 == -VAR_0) {

  if (VAR_18++ > VAR_2) {




   VAR_13 = -VAR_1;
   goto fail;
  }
  FUNC_3(VAR_6->dev,
    "CRC error retry %d\n", VAR_18);
  FUNC_12(VAR_6);
  FUNC_1(&VAR_11, VAR_7);
  FUNC_8(VAR_15);
  FUNC_2(VAR_6, VAR_4);
  FUNC_10(VAR_6, &VAR_11);
  FUNC_5(VAR_6);
  FUNC_7(VAR_15);
  goto retry;
 } else if (VAR_13)
  goto fail;

 switch (VAR_16) {
 case 131:
  if (VAR_8 && VAR_9) {
   uint64_t VAR_19 = VAR_10.msg;

   VAR_19 >>= 4;
   VAR_19 &= (1ull << (VAR_8 * 8)) - 1;

   for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
    VAR_17[VAR_8-VAR_14-1] = VAR_19;
    VAR_19 >>= 8;
   }
  }
  break;
 case 130:





  if (VAR_12++ < VAR_5) {
   FUNC_0(&VAR_11, VAR_7);
   FUNC_8(VAR_15);
   FUNC_2(VAR_6, VAR_3);
   FUNC_10(VAR_6, &VAR_11);
   FUNC_5(VAR_6);
   FUNC_7(VAR_15);
   goto retry;
  }
  FUNC_4(VAR_6->dev,
   "ERR slave is stuck in busy state, issuing TERM\n");
  FUNC_8(VAR_15);
  FUNC_2(VAR_6, VAR_3);
  FUNC_7(VAR_15);
  FUNC_6(VAR_6, VAR_7);
  VAR_13 = -VAR_1;
  break;

 case 129:
  FUNC_3(VAR_6->dev, "ERRA received: 0x%x\n", (int)VAR_10.msg);
  VAR_13 = -VAR_1;
  break;
 case 128:
  FUNC_3(VAR_6->dev, "ERRC received: 0x%x\n", (int)VAR_10.msg);
  FUNC_11(VAR_6);
  VAR_13 = -VAR_0;
  break;
 }

 if (VAR_12 > 0)
  FUNC_13(VAR_6, VAR_12);
 fail:




 FUNC_8(VAR_15);
 FUNC_2(VAR_6, VAR_6->t_send_delay);
 FUNC_7(VAR_15);

 return VAR_13;
}
