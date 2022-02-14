
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct hid_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (struct hid_device*,int,int*,int ,int ,int ) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int ,int ) ;
 int FUNC_4 (int,int*) ;
 int FUNC_5 (int*,int,int) ;

__attribute__((used)) static int FUNC_6(struct hid_device *VAR_10, u32 VAR_11,
 u8 *VAR_12, u8 VAR_13, bool VAR_14)
{
 int VAR_15;
 u16 VAR_16;
 u8 *VAR_17;
 u8 *VAR_18 = ((void*)0);

 VAR_17 = FUNC_3(VAR_9, VAR_2);
 if (!VAR_17)
  return -VAR_1;

 VAR_17[0] = VAR_8;
 if (VAR_14) {
  VAR_17[1] = VAR_6;
  VAR_17[8] = 0x00;
 } else {
  VAR_17[1] = VAR_7;
  VAR_17[8] = VAR_13;
 }
 FUNC_4(VAR_11, VAR_17 + 2);
 VAR_17[6] = 1;
 VAR_17[7] = 0;


 VAR_16 = FUNC_5(VAR_17, 1, 8);
 VAR_17[9] = (u8)VAR_16;
 VAR_17[10] = (u8)(VAR_16 >> 8);
 VAR_17[11] = 0;

 VAR_15 = FUNC_1(VAR_10, VAR_8, VAR_17,
   VAR_9,
   VAR_3, VAR_5);

 if (VAR_15 < 0) {
  FUNC_0(&VAR_10->dev, "failed to read command (%d)\n", VAR_15);
  goto exit;
 }

 if (VAR_14) {
  VAR_18 = FUNC_3(VAR_9, VAR_2);
  if (!VAR_18) {
   VAR_15 = -VAR_1;
   goto exit;
  }

  VAR_15 = FUNC_1(VAR_10, VAR_8, VAR_18,
    VAR_9,
    VAR_3, VAR_4);
  if (VAR_15 < 0) {
   FUNC_0(&VAR_10->dev, "failed read register (%d)\n", VAR_15);
   goto exit_readbuf;
  }

  VAR_15 = -VAR_0;

  if (*(u32 *)&VAR_18[6] != VAR_11) {
   FUNC_0(&VAR_10->dev, "read register address error (%x,%x)\n",
    *(u32 *)&VAR_18[6], VAR_11);
   goto exit_readbuf;
  }

  if (*(u16 *)&VAR_18[10] != 1) {
   FUNC_0(&VAR_10->dev, "read register size error (%x)\n",
    *(u16 *)&VAR_18[10]);
   goto exit_readbuf;
  }

  VAR_16 = FUNC_5(VAR_18, 6, 7);
  if (*(u16 *)&VAR_18[13] != VAR_16) {
   FUNC_0(&VAR_10->dev, "read register checksum error (%x,%x)\n",
    *(u16 *)&VAR_18[13], VAR_16);
   goto exit_readbuf;
  }

  *VAR_12 = VAR_18[12];
 }

 VAR_15 = 0;

exit_readbuf:
 FUNC_2(VAR_18);
exit:
 FUNC_2(VAR_17);
 return VAR_15;
}
