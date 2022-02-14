
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_9__ {int packets; int bytes; int duration; } ;
struct TYPE_8__ {int packets; int bytes; int duration; } ;
struct TYPE_10__ {int logical_file_size; int cache_count_bytes; int cache_file_pos; int cache_file_forwards; int cache_physical_pos; int byte_count; int latest_seek_load_duration; int buf_capacity; int buf_forwards; int buf_backwards; int tcp_read_sampler; int bit_rate; TYPE_3__ audio_cache; TYPE_2__ video_cache; int vdec_type; } ;
struct TYPE_11__ {TYPE_4__ stat; TYPE_1__* is; } ;
struct TYPE_7__ {int subtitle_stream; int audio_stream; int video_stream; } ;
typedef TYPE_5__ FFPlayer ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

int64_t FUNC_1(FFPlayer *VAR_1, int VAR_2, int64_t VAR_3)
{
    switch (VAR_2) {
        case 134:
            if (!VAR_1 || !VAR_1->is)
                return VAR_3;
            return VAR_1->is->video_stream;
        case 136:
            if (!VAR_1 || !VAR_1->is)
                return VAR_3;
            return VAR_1->is->audio_stream;
        case 135:
            if (!VAR_1 || !VAR_1->is)
                return VAR_3;
            return VAR_1->is->subtitle_stream;
        case 128:
            if (!VAR_1)
                return VAR_3;
            return VAR_1->stat.vdec_type;
        case 144:
            return VAR_0;

        case 130:
            if (!VAR_1)
                return VAR_3;
            return VAR_1->stat.video_cache.duration;
        case 146:
            if (!VAR_1)
                return VAR_3;
            return VAR_1->stat.audio_cache.duration;
        case 131:
            if (!VAR_1)
                return VAR_3;
            return VAR_1->stat.video_cache.bytes;
        case 147:
            if (!VAR_1)
                return VAR_3;
            return VAR_1->stat.audio_cache.bytes;
        case 129:
            if (!VAR_1)
                return VAR_3;
            return VAR_1->stat.video_cache.packets;
        case 145:
            if (!VAR_1)
                return VAR_3;
            return VAR_1->stat.audio_cache.packets;
        case 143:
            return VAR_1 ? VAR_1->stat.bit_rate : VAR_3;
        case 133:
            return VAR_1 ? FUNC_0(&VAR_1->stat.tcp_read_sampler) : VAR_3;
        case 150:
            if (!VAR_1)
                return VAR_3;
            return VAR_1->stat.buf_backwards;
        case 148:
            if (!VAR_1)
                return VAR_3;
            return VAR_1->stat.buf_forwards;
        case 149:
            if (!VAR_1)
                return VAR_3;
            return VAR_1->stat.buf_capacity;
        case 138:
            return VAR_1 ? VAR_1->stat.latest_seek_load_duration : VAR_3;
        case 132:
            return VAR_1 ? VAR_1->stat.byte_count : VAR_3;
        case 139:
            if (!VAR_1)
                return VAR_3;
            return VAR_1->stat.cache_physical_pos;
       case 141:
            if (!VAR_1)
                return VAR_3;
            return VAR_1->stat.cache_file_forwards;
       case 140:
            if (!VAR_1)
                return VAR_3;
            return VAR_1->stat.cache_file_pos;
       case 142:
            if (!VAR_1)
                return VAR_3;
            return VAR_1->stat.cache_count_bytes;
       case 137:
            if (!VAR_1)
                return VAR_3;
            return VAR_1->stat.logical_file_size;
        default:
            return VAR_3;
    }
}
