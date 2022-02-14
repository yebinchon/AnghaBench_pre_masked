
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct input_dev {int dummy; } ;
struct elants_data {TYPE_1__* client; struct input_dev* input; } ;
struct TYPE_2__ {int dev; } ;


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
 int VAR_10 ;
 int FUNC_0 (int *,char*,int,unsigned int,...) ;
 int FUNC_1 (struct input_dev*,int ,int ,unsigned int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*,int) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*) ;

__attribute__((used)) static void FUNC_6(struct elants_data *VAR_11, u8 *VAR_12)
{
 struct input_dev *VAR_13 = VAR_11->input;
 unsigned int VAR_14;
 u16 VAR_15;
 int VAR_16;

 VAR_14 = VAR_12[VAR_6 + 1] & 0x0f;
 VAR_15 = ((VAR_12[VAR_6 + 1] & 0x30) << 4) |
   VAR_12[VAR_6];

 FUNC_0(&VAR_11->client->dev,
  "n_fingers: %u, state: %04x\n", VAR_14, VAR_15);

 for (VAR_16 = 0; VAR_16 < VAR_9 && VAR_14; VAR_16++) {
  if (VAR_15 & 1) {
   unsigned int VAR_17, VAR_18, VAR_19, VAR_20;
   u8 *VAR_21;

   VAR_21 = &VAR_12[VAR_8 + VAR_16 * 3];
   VAR_17 = (((u16)VAR_21[0] & 0xf0) << 4) | VAR_21[1];
   VAR_18 = (((u16)VAR_21[0] & 0x0f) << 8) | VAR_21[2];
   VAR_19 = VAR_12[VAR_5 + VAR_16];
   VAR_20 = VAR_12[VAR_7 + VAR_16];

   FUNC_0(&VAR_11->client->dev, "i=%d x=%d y=%d p=%d w=%d\n",
    VAR_16, VAR_17, VAR_18, VAR_19, VAR_20);

   FUNC_3(VAR_13, VAR_16);
   FUNC_2(VAR_13, VAR_10, 1);
   FUNC_1(VAR_13, VAR_4, VAR_0, VAR_17);
   FUNC_1(VAR_13, VAR_4, VAR_1, VAR_18);
   FUNC_1(VAR_13, VAR_4, VAR_2, VAR_19);
   FUNC_1(VAR_13, VAR_4, VAR_3, VAR_20);

   VAR_14--;
  }

  VAR_15 >>= 1;
 }

 FUNC_4(VAR_13);
 FUNC_5(VAR_13);
}
