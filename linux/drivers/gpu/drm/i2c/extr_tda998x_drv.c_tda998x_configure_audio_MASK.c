
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct tda998x_audio_settings {scalar_t__ ena_ap; int sample_rate; int i2s_format; int cts_n; int* status; int cea; TYPE_1__* route; } ;
struct tda998x_priv {struct tda998x_audio_settings audio; } ;
struct TYPE_2__ {int ena_aclk; int mux_ap; int aip_clksel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct tda998x_priv*,int ,int) ;
 int FUNC_3 (struct tda998x_priv*,int ,int) ;
 int FUNC_4 (struct tda998x_priv*,int ,int) ;
 int FUNC_5 (struct tda998x_priv*,int ,int*,int) ;
 int FUNC_6 (struct tda998x_priv*,int) ;
 int FUNC_7 (struct tda998x_priv*,int) ;
 int FUNC_8 (struct tda998x_priv*,int *) ;

__attribute__((used)) static void FUNC_9(struct tda998x_priv *VAR_12)
{
 const struct tda998x_audio_settings *VAR_13 = &VAR_12->audio;
 u8 VAR_14[6], VAR_15;
 u32 VAR_16;


 if (VAR_13->ena_ap == 0)
  return;

 VAR_15 = FUNC_7(VAR_12, VAR_13->sample_rate);


 FUNC_4(VAR_12, VAR_9, VAR_13->ena_ap);
 FUNC_4(VAR_12, VAR_8, VAR_13->route->ena_aclk);
 FUNC_4(VAR_12, VAR_11, VAR_13->route->mux_ap);
 FUNC_4(VAR_12, VAR_10, VAR_13->i2s_format);
 FUNC_4(VAR_12, VAR_4, VAR_13->route->aip_clksel);
 FUNC_2(VAR_12, VAR_5, VAR_1 |
     VAR_0);
 FUNC_4(VAR_12, VAR_7, VAR_13->cts_n);
 FUNC_4(VAR_12, VAR_6, VAR_15);





 VAR_16 = 128 * VAR_13->sample_rate / 1000;


 VAR_14[0] = 0x44;
 VAR_14[1] = 0x42;
 VAR_14[2] = 0x01;
 VAR_14[3] = VAR_16;
 VAR_14[4] = VAR_16 >> 8;
 VAR_14[5] = VAR_16 >> 16;
 FUNC_5(VAR_12, VAR_3, VAR_14, 6);


 FUNC_3(VAR_12, VAR_5, VAR_2);
 FUNC_2(VAR_12, VAR_5, VAR_2);





 VAR_14[0] = VAR_13->status[0];
 VAR_14[1] = VAR_13->status[1];
 VAR_14[2] = VAR_13->status[3];
 VAR_14[3] = VAR_13->status[4];
 FUNC_5(VAR_12, FUNC_0(0), VAR_14, 4);

 FUNC_6(VAR_12, 1);
 FUNC_1(20);
 FUNC_6(VAR_12, 0);

 FUNC_8(VAR_12, &VAR_13->cea);
}
