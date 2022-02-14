
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct bu21029_ts_data {int x_plate_ohms; int in_dev; int prop; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int,int,int) ;

__attribute__((used)) static void FUNC_6(struct bu21029_ts_data *VAR_3, const u8 *VAR_4)
{
 u16 VAR_5, VAR_6, VAR_7, VAR_8;
 u32 VAR_9;
 s32 VAR_10 = FUNC_1(VAR_3->in_dev, VAR_0);
 VAR_5 = (VAR_4[0] << 4) | (VAR_4[1] >> 4);
 VAR_6 = (VAR_4[2] << 4) | (VAR_4[3] >> 4);
 VAR_7 = (VAR_4[4] << 4) | (VAR_4[5] >> 4);
 VAR_8 = (VAR_4[6] << 4) | (VAR_4[7] >> 4);

 if (VAR_7 && VAR_8) {







  VAR_9 = VAR_8 - VAR_7;
  VAR_9 *= VAR_5;
  VAR_9 *= VAR_3->x_plate_ohms;
  VAR_9 /= VAR_7;
  VAR_9 = FUNC_0(VAR_9, VAR_2);
  if (VAR_9 <= VAR_10) {
   FUNC_5(VAR_3->in_dev, &VAR_3->prop,
            VAR_5, VAR_6, 0);
   FUNC_2(VAR_3->in_dev, VAR_0,
      VAR_10 - VAR_9);
   FUNC_3(VAR_3->in_dev, VAR_1, 1);
   FUNC_4(VAR_3->in_dev);
  }
 }
}
