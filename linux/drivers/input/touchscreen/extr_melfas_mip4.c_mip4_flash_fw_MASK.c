
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mip4_ts {int ppm_y; int input; int ppm_x; int max_y; int max_x; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct mip4_ts*) ;
 int FUNC_5 (struct mip4_ts*) ;
 int FUNC_6 (struct mip4_ts*,int *) ;
 int FUNC_7 (struct mip4_ts*,int,int const*,scalar_t__,int ) ;
 int FUNC_8 (struct mip4_ts*,int,int const*,scalar_t__,int ) ;
 int FUNC_9 (struct mip4_ts*) ;
 int FUNC_10 (struct mip4_ts*) ;
 int FUNC_11 (struct mip4_ts*) ;

__attribute__((used)) static int FUNC_12(struct mip4_ts *VAR_6,
    const u8 *VAR_7, u32 VAR_8, u32 VAR_9)
{
 struct i2c_client *VAR_10 = VAR_6->client;
 int VAR_11;
 u16 VAR_12;
 int VAR_13, VAR_14;


 FUNC_0(&VAR_10->dev, "Entering bootloader mode\n");

 VAR_13 = FUNC_4(VAR_6);
 if (VAR_13) {
  FUNC_1(&VAR_10->dev,
   "Failed to enter bootloader mode: %d\n",
   VAR_13);
  return VAR_13;
 }


 VAR_13 = FUNC_6(VAR_6, &VAR_12);
 if (VAR_13)
  goto exit_bl;


 FUNC_0(&VAR_10->dev,
  "Program & Verify, page size: %d, packet size: %d\n",
  VAR_5, VAR_4);

 for (VAR_11 = VAR_9;
      VAR_11 < VAR_9 + VAR_8;
      VAR_11 += VAR_5) {

  VAR_13 = FUNC_7(VAR_6, VAR_11, VAR_7 + VAR_11,
          VAR_5, VAR_12);
  if (VAR_13)
   break;


  VAR_13 = FUNC_8(VAR_6, VAR_11, VAR_7 + VAR_11,
         VAR_5, VAR_12);
  if (VAR_13)
   break;
 }

exit_bl:

 FUNC_0(&VAR_10->dev, "Exiting bootloader mode\n");

 VAR_14 = FUNC_5(VAR_6);
 if (VAR_14) {
  FUNC_1(&VAR_10->dev,
   "Failed to exit bootloader mode: %d\n", VAR_14);
  if (!VAR_13)
   VAR_13 = VAR_14;
 }


 FUNC_9(VAR_6);
 FUNC_10(VAR_6);

 FUNC_11(VAR_6);


 FUNC_3(VAR_6->input, VAR_0, 0, VAR_6->max_x, 0, 0);
 FUNC_3(VAR_6->input, VAR_1, 0, VAR_6->max_y, 0, 0);
 FUNC_3(VAR_6->input, VAR_2, 0, VAR_6->max_x, 0, 0);
 FUNC_3(VAR_6->input, VAR_3, 0, VAR_6->max_y, 0, 0);
 FUNC_2(VAR_6->input, VAR_0, VAR_6->ppm_x);
 FUNC_2(VAR_6->input, VAR_1, VAR_6->ppm_y);
 FUNC_2(VAR_6->input, VAR_2, VAR_6->ppm_x);
 FUNC_2(VAR_6->input, VAR_3, VAR_6->ppm_y);

 return VAR_13 ? VAR_13 : 0;
}
