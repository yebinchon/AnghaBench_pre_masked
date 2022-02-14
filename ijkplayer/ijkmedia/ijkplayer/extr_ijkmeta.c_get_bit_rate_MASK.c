
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {int codec_type; int bit_rate; int sample_rate; int channels; int codec_id; } ;
typedef TYPE_1__ AVCodecParameters ;







 int FUNC_0 (int ) ;

__attribute__((used)) static int64_t FUNC_1(AVCodecParameters *VAR_0)
{
    int64_t VAR_1;
    int VAR_2;

    switch (VAR_0->codec_type) {
        case 128:
        case 130:
        case 129:
        case 132:
            VAR_1 = VAR_0->bit_rate;
            break;
        case 131:
            VAR_2 = FUNC_0(VAR_0->codec_id);
            VAR_1 = VAR_2 ? VAR_0->sample_rate * VAR_0->channels * VAR_2 : VAR_0->bit_rate;
            break;
        default:
            VAR_1 = 0;
            break;
    }
    return VAR_1;
}
