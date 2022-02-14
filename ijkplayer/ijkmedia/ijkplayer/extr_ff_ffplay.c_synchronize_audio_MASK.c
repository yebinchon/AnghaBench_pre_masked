
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {double freq; } ;
struct TYPE_7__ {double audio_diff_cum; double audio_diff_avg_coef; scalar_t__ audio_diff_avg_count; scalar_t__ audio_diff_threshold; int audio_clock; TYPE_1__ audio_src; int audclk; } ;
typedef TYPE_2__ VideoState ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int *,int ,char*,double,double,int,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (double) ;
 double FUNC_3 (int *) ;
 double FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (double) ;

__attribute__((used)) static int FUNC_7(VideoState *VAR_5, int VAR_6)
{
    int VAR_7 = VAR_6;


    if (FUNC_5(VAR_5) != VAR_3) {
        double VAR_8, VAR_9;
        int VAR_10, VAR_11;

        VAR_8 = FUNC_3(&VAR_5->audclk) - FUNC_4(VAR_5);

        if (!FUNC_6(VAR_8) && FUNC_2(VAR_8) < VAR_2) {
            VAR_5->audio_diff_cum = VAR_8 + VAR_5->audio_diff_avg_coef * VAR_5->audio_diff_cum;
            if (VAR_5->audio_diff_avg_count < VAR_0) {

                VAR_5->audio_diff_avg_count++;
            } else {

                VAR_9 = VAR_5->audio_diff_cum * (1.0 - VAR_5->audio_diff_avg_coef);

                if (FUNC_2(VAR_9) >= VAR_5->audio_diff_threshold) {
                    VAR_7 = VAR_6 + (int)(VAR_8 * VAR_5->audio_src.freq);
                    VAR_10 = ((VAR_6 * (100 - VAR_4) / 100));
                    VAR_11 = ((VAR_6 * (100 + VAR_4) / 100));
                    VAR_7 = FUNC_0(VAR_7, VAR_10, VAR_11);
                }
                FUNC_1(((void*)0), VAR_1, "diff=%f adiff=%f sample_diff=%d apts=%0.3f %f\n",
                        VAR_8, VAR_9, VAR_7 - VAR_6,
                        VAR_5->audio_clock, VAR_5->audio_diff_threshold);
            }
        } else {


            VAR_5->audio_diff_avg_count = 0;
            VAR_5->audio_diff_cum = 0;
        }
    }

    return VAR_7;
}
