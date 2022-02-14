
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int u8 ;
struct fsi_master_acf {int dev; scalar_t__ sram; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct fsi_master_acf*,int,int,scalar_t__,int) ;

__attribute__((used)) static int FUNC_5(struct fsi_master_acf *VAR_6, uint8_t VAR_7,
          uint32_t *VAR_8, u8 *VAR_9)
{
 uint8_t VAR_10 = FUNC_3(VAR_6->sram + VAR_5) & 0xf;
 uint8_t VAR_11 = FUNC_3(VAR_6->sram + VAR_4) & 0xf;
 uint32_t VAR_12 = 0;
 uint32_t VAR_13;
 uint8_t VAR_14;

 *VAR_9 = VAR_14 = VAR_10 & 3;


 VAR_13 = FUNC_0(0, 1, 1);
 VAR_13 = FUNC_0(VAR_13, VAR_10, 4);
 if (VAR_14 == VAR_2 && VAR_7) {
  VAR_12 = FUNC_2(VAR_6->sram + VAR_3);
  VAR_13 = FUNC_0(VAR_13, VAR_12, VAR_7);
  if (VAR_8)
   *VAR_8 = VAR_12;
 }
 VAR_13 = FUNC_0(VAR_13, VAR_11, 4);

 FUNC_4(VAR_6, VAR_10, VAR_11, VAR_12, VAR_13 == 0);

 if (VAR_13) {




  if ((VAR_10 == 0xf && VAR_11 == 0xf) || (VAR_10 == 0 && VAR_11 == 0))
   return -VAR_1;
  FUNC_1(VAR_6->dev, "Bad response CRC !\n");
  return -VAR_0;
 }
 return 0;
}
