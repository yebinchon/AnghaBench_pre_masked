
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ extradata_size; scalar_t__ extradata; scalar_t__ codec_id; } ;
struct TYPE_7__ {int metadata; int sample_aspect_ratio; int time_base; int avg_frame_rate; int r_frame_rate; TYPE_2__* codecpar; } ;
typedef TYPE_1__ AVStream ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(AVStream *VAR_0, AVStream *VAR_1)
{
    int VAR_2;

    if (VAR_0->codecpar->codec_id || !VAR_1->codecpar->codec_id) {
        if (VAR_0->codecpar->extradata_size < VAR_1->codecpar->extradata_size) {
            if (VAR_0->codecpar->extradata) {
                FUNC_1(&VAR_0->codecpar->extradata);
                VAR_0->codecpar->extradata_size = 0;
            }
            VAR_2 = FUNC_3(VAR_0->codecpar,
                                     VAR_1->codecpar->extradata_size);
            if (VAR_2 < 0)
                return VAR_2;
        }
        FUNC_4(VAR_0->codecpar->extradata, VAR_1->codecpar->extradata,
               VAR_1->codecpar->extradata_size);
        return 0;
    }
    if ((VAR_2 = FUNC_2(VAR_0->codecpar, VAR_1->codecpar)) < 0)
        return VAR_2;
    VAR_0->r_frame_rate = VAR_1->r_frame_rate;
    VAR_0->avg_frame_rate = VAR_1->avg_frame_rate;
    VAR_0->time_base = VAR_1->time_base;
    VAR_0->sample_aspect_ratio = VAR_1->sample_aspect_ratio;

    FUNC_0(&VAR_0->metadata, VAR_1->metadata, 0);
    return 0;
}
