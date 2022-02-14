
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stb0899_internal {int av_frame_fine; int av_frame_coarse; } ;
struct stb0899_state {struct stb0899_config* config; struct stb0899_internal internal; } ;
struct stb0899_config {int sof_search_timeout; int uwp_threshold_track; int uwp_threshold_acq; int miss_threshold; int uwp_threshold_sof; int esno_quant; int esno_ave; } ;


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
 int VAR_11 ;
 int FUNC_0 (int ,int ) ;
 int VAR_12 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (struct stb0899_state*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct stb0899_state *VAR_22)
{
 struct stb0899_internal *VAR_23 = &VAR_22->internal;
 struct stb0899_config *VAR_24 = VAR_22->config;
 u32 VAR_25, VAR_26, VAR_27, VAR_28;

 VAR_25 = FUNC_0(VAR_12, VAR_13);
 VAR_26 = FUNC_0(VAR_12, VAR_14);
 VAR_27 = FUNC_0(VAR_12, VAR_15);

 FUNC_1(VAR_16, VAR_25, VAR_24->esno_ave);
 FUNC_1(VAR_17, VAR_25, VAR_24->esno_quant);
 FUNC_1(VAR_20, VAR_25, VAR_24->uwp_threshold_sof);

 FUNC_1(VAR_0, VAR_26, VAR_23->av_frame_coarse);
 FUNC_1(VAR_1, VAR_26, VAR_23->av_frame_fine);
 FUNC_1(VAR_18, VAR_26, VAR_24->miss_threshold);

 FUNC_1(VAR_19, VAR_27, VAR_24->uwp_threshold_acq);
 FUNC_1(VAR_21, VAR_27, VAR_24->uwp_threshold_track);

 FUNC_2(VAR_22, VAR_12, VAR_5, VAR_9, VAR_25);
 FUNC_2(VAR_22, VAR_12, VAR_6, VAR_10, VAR_26);
 FUNC_2(VAR_22, VAR_12, VAR_7, VAR_11, VAR_27);

 VAR_28 = FUNC_0(VAR_12, VAR_3);
 FUNC_1(VAR_2, VAR_28, VAR_24->sof_search_timeout);
 FUNC_2(VAR_22, VAR_12, VAR_4, VAR_8, VAR_28);
}
