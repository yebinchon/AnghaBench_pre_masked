
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
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
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct hid_device*,int,int*,int,int ,int ) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int*) ;

__attribute__((used)) static int FUNC_5(struct hid_device *VAR_10, u32 VAR_11,
 u8 *VAR_12, u8 VAR_13, bool VAR_14)
{
 int VAR_15, VAR_16;
 u8 VAR_17;
 u8 *VAR_18;
 u8 *VAR_19;

 VAR_18 = FUNC_3(VAR_8, VAR_1);
 if (!VAR_18)
  return -VAR_0;

 VAR_18[0] = VAR_7;
 if (VAR_14) {
  VAR_18[1] = VAR_5;
  VAR_18[6] = 0x00;
 } else {
  VAR_18[1] = VAR_6;
  VAR_18[6] = VAR_13;
 }

 FUNC_4(VAR_11, VAR_18 + 2);


 VAR_17 = VAR_9;
 for (VAR_16 = 0; VAR_16 < VAR_8 - 1; VAR_16++)
  VAR_17 += VAR_18[VAR_16];

 VAR_18[7] = VAR_17;
 VAR_15 = FUNC_1(VAR_10, VAR_7, VAR_18,
   VAR_8,
   VAR_2, VAR_4);

 if (VAR_15 < 0) {
  FUNC_0(&VAR_10->dev, "failed to read command (%d)\n", VAR_15);
  goto exit;
 }

 if (VAR_14) {
  VAR_19 = FUNC_3(VAR_8, VAR_1);
  if (!VAR_19) {
   VAR_15 = -VAR_0;
   goto exit;
  }

  VAR_15 = FUNC_1(VAR_10, VAR_7, VAR_19,
    VAR_8,
    VAR_2, VAR_3);

  if (VAR_15 < 0) {
   FUNC_0(&VAR_10->dev, "failed read register (%d)\n", VAR_15);
   FUNC_2(VAR_19);
   goto exit;
  }

  *VAR_12 = VAR_19[6];

  FUNC_2(VAR_19);
 }

 VAR_15 = 0;

exit:
 FUNC_2(VAR_18);
 return VAR_15;
}
