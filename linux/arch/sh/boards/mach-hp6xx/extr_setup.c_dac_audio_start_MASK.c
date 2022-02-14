
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dac_audio_pdata {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct dac_audio_pdata *VAR_4)
{
 u16 VAR_5;
 u8 VAR_6;


 VAR_5 = FUNC_1(VAR_0);
 VAR_5 &= ~VAR_1;
 FUNC_3(VAR_5, VAR_0);


 VAR_6 = FUNC_0(VAR_2);
 VAR_6 &= ~VAR_3;
 FUNC_2(VAR_6, VAR_2);

 FUNC_4(VAR_4->channel);
}
