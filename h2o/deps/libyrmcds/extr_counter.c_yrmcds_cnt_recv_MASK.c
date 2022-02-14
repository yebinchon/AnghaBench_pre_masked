
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ yrmcds_error ;
typedef scalar_t__ yrmcds_cnt_status ;
struct TYPE_10__ {int command; scalar_t__ status; scalar_t__ body_length; int * stats; scalar_t__* body; void* resources; void* current_consumption; scalar_t__ name_length; scalar_t__ max_consumption; int serial; } ;
typedef TYPE_1__ yrmcds_cnt_response ;
typedef int yrmcds_cnt_command ;
struct TYPE_11__ {int invalid; scalar_t__ last_size; size_t used; int stats; scalar_t__* recvbuf; } ;
typedef TYPE_2__ yrmcds_cnt ;
typedef int uint8_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;




 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,scalar_t__*,int) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,size_t) ;
 void* FUNC_2 (scalar_t__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;

yrmcds_error
FUNC_6(yrmcds_cnt* VAR_5, yrmcds_cnt_response* VAR_6) {
    if( VAR_5 == ((void*)0) || VAR_6 == ((void*)0) )
        return VAR_1;
    if( VAR_5->invalid )
        return VAR_3;

    if( VAR_5->last_size > 0 ) {
        size_t VAR_7 = VAR_5->used - VAR_5->last_size;
        if( VAR_7 > 0 )
            FUNC_1(VAR_5->recvbuf, VAR_5->recvbuf + VAR_5->last_size, VAR_7);
        VAR_5->used = VAR_7;
        VAR_5->last_size = 0;
    }

    while( VAR_5->used < VAR_0 ) {
        yrmcds_error VAR_8 = FUNC_5(VAR_5);
        if( VAR_8 != VAR_2 ) return VAR_8;
    }

    if( (uint8_t)VAR_5->recvbuf[0] != 0x91 ) {
        VAR_5->invalid = 1;
        return VAR_3;
    }

    VAR_6->command = (yrmcds_cnt_command)VAR_5->recvbuf[1];
    VAR_6->status = (yrmcds_cnt_status)VAR_5->recvbuf[2];
    VAR_6->body_length = FUNC_2(VAR_5->recvbuf + 4);
    FUNC_0(&VAR_6->serial, VAR_5->recvbuf + 8, sizeof(VAR_6->serial));
    VAR_6->body = ((void*)0);
    VAR_6->resources = 0;
    VAR_6->current_consumption = 0;
    VAR_6->max_consumption = 0;
    VAR_6->name_length = 0;
    VAR_6->stats = ((void*)0);

    if( VAR_6->body_length > 0 ) {
        while( VAR_5->used < VAR_0 + VAR_6->body_length ) {
            yrmcds_error VAR_9 = FUNC_5(VAR_5);
            if( VAR_9 != VAR_2 ) return VAR_9;
        }
        VAR_6->body = VAR_5->recvbuf + VAR_0;
    }
    VAR_5->last_size = VAR_0 + VAR_6->body_length;

    if( VAR_6->status != VAR_4 )
        return VAR_2;

    yrmcds_error VAR_10;
    switch( VAR_6->command ) {
    case 129:
        if( VAR_6->body_length < 4 ) {
            VAR_5->invalid = 1;
            return VAR_3;
        }
        VAR_6->current_consumption = FUNC_2(VAR_6->body);
        break;

    case 131:
        if( VAR_6->body_length < 4 ) {
            VAR_5->invalid = 1;
            return VAR_3;
        }
        VAR_6->resources = FUNC_2(VAR_6->body);
        break;

    case 128:
        VAR_10 = FUNC_4(VAR_5, VAR_6);
        if( VAR_10 != VAR_2 ) {
            VAR_5->invalid = 1;
            return VAR_10;
        }
        VAR_6->stats = &VAR_5->stats;
        break;

    case 130:
        VAR_10 = FUNC_3(VAR_5, VAR_6);
        if( VAR_10 != VAR_2 ) {
            VAR_5->invalid = 1;
            return VAR_10;
        }
        break;

    default:

        break;
    }
    return VAR_2;
}
