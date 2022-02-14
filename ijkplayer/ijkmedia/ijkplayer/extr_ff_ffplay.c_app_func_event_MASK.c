
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int buf_capacity; int buf_forwards; int buf_backwards; } ;
struct TYPE_10__ {scalar_t__ bytes; } ;
struct TYPE_9__ {scalar_t__ opaque; } ;
struct TYPE_7__ {int buf_capacity; int buf_forwards; int buf_backwards; int tcp_read_sampler; int byte_count; } ;
struct TYPE_8__ {int inject_opaque; TYPE_1__ stat; } ;
typedef TYPE_2__ FFPlayer ;
typedef TYPE_3__ AVApplicationContext ;
typedef TYPE_4__ AVAppIOTraffic ;
typedef TYPE_5__ AVAppAsyncStatistic ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int ,int,void*,size_t) ;

__attribute__((used)) static int FUNC_2(AVApplicationContext *VAR_2, int VAR_3 ,void *VAR_4, size_t VAR_5)
{
    if (!VAR_2 || !VAR_2->opaque || !VAR_4)
        return 0;

    FFPlayer *VAR_6 = (FFPlayer *)VAR_2->opaque;
    if (!VAR_6->inject_opaque)
        return 0;
    if (VAR_3 == VAR_1 && sizeof(AVAppIOTraffic) == VAR_5) {
        AVAppIOTraffic *VAR_7 = (AVAppIOTraffic *)(intptr_t)VAR_4;
        if (VAR_7->bytes > 0) {
            VAR_6->stat.byte_count += VAR_7->bytes;
            FUNC_0(&VAR_6->stat.tcp_read_sampler, VAR_7->bytes);
        }
    } else if (VAR_3 == VAR_0 && sizeof(AVAppAsyncStatistic) == VAR_5) {
        AVAppAsyncStatistic *VAR_8 = (AVAppAsyncStatistic *) (intptr_t)VAR_4;
        VAR_6->stat.buf_backwards = VAR_8->buf_backwards;
        VAR_6->stat.buf_forwards = VAR_8->buf_forwards;
        VAR_6->stat.buf_capacity = VAR_8->buf_capacity;
    }
    return FUNC_1(VAR_6->inject_opaque, VAR_3 , VAR_4, VAR_5);
}
