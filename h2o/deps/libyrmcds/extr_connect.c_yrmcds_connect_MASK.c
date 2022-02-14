
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ yrmcds_error ;
struct TYPE_3__ {int sock; char* recvbuf; int capacity; scalar_t__ rserial; scalar_t__ text_mode; scalar_t__ invalid; int * decompressed; scalar_t__ last_size; scalar_t__ used; int lock; scalar_t__ compress_size; scalar_t__ serial; } ;
typedef TYPE_1__ yrmcds ;
typedef int uint16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*,int ,int*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

yrmcds_error FUNC_5(yrmcds* VAR_5, const char* VAR_6, uint16_t VAR_7) {
    if( VAR_5 == ((void*)0) )
        return VAR_0;

    int VAR_8 = FUNC_4(&(VAR_5->lock), ((void*)0));
    if( VAR_8 != 0 ) {
        VAR_4 = VAR_8;
        return VAR_3;
    }

    int VAR_9;
    yrmcds_error VAR_10 = FUNC_1(VAR_6, VAR_7, &VAR_9);
    if( VAR_10 != VAR_1 )
        return VAR_10;
    VAR_5->sock = VAR_9;
    VAR_5->serial = 0;
    VAR_5->compress_size = 0;
    VAR_5->recvbuf = (char*)FUNC_2(1 << 20);
    if( VAR_5->recvbuf == ((void*)0) ) {
        FUNC_0(VAR_9);

        FUNC_3(&(VAR_5->lock));

        return VAR_2;
    }
    VAR_5->capacity = 1 << 20;
    VAR_5->used = 0;
    VAR_5->last_size = 0;
    VAR_5->decompressed = ((void*)0);
    VAR_5->invalid = 0;
    VAR_5->text_mode = 0;
    VAR_5->rserial = 0;
    return VAR_1;
}
