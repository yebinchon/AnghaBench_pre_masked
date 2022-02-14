
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stb0899_internal {int master_clk; int mclk; int agc_gain; int av_frame_coarse; int av_frame_fine; int step_size; scalar_t__ center_freq; int rrc_alpha; int rolloff; scalar_t__ t_agc2; scalar_t__ t_agc1; } ;
struct stb0899_state {struct stb0899_internal internal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct stb0899_state*) ;
 int FUNC_4 (struct stb0899_state*) ;
 int FUNC_5 (struct stb0899_state*,int ,int *,int) ;
 int FUNC_6 (struct stb0899_state*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct stb0899_state *VAR_7)
{
 struct stb0899_internal *VAR_8 = &VAR_7->internal;
 int VAR_9;
 u8 VAR_10[2];
 u32 VAR_11;


 FUNC_5(VAR_7, VAR_3, VAR_10, 2);


 VAR_9 = FUNC_4(VAR_7);
 VAR_8->t_agc1 = 0;
 VAR_8->t_agc2 = 0;
 VAR_8->master_clk = VAR_9;
 VAR_8->mclk = VAR_9 / 65536L;
 VAR_8->rolloff = FUNC_3(VAR_7);



 VAR_8->agc_gain = 8154;
 VAR_11 = FUNC_1(VAR_6, VAR_0);
 FUNC_2(VAR_1, VAR_11, VAR_8->agc_gain);
 FUNC_6(VAR_7, VAR_6, VAR_4, VAR_5, VAR_11);

 VAR_11 = FUNC_1(VAR_6, VAR_2);
 VAR_8->rrc_alpha = FUNC_0(VAR_2, VAR_11);

 VAR_8->center_freq = 0;
 VAR_8->av_frame_coarse = 10;
 VAR_8->av_frame_fine = 20;
 VAR_8->step_size = 2;






}
