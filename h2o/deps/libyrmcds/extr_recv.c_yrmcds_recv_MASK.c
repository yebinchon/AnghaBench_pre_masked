
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int length; unsigned char command; char const* key; scalar_t__ status; int flags; char const* data; size_t data_len; void* value; void* cas_unique; int serial; scalar_t__ key_len; } ;
typedef TYPE_1__ yrmcds_response ;
typedef scalar_t__ yrmcds_error ;
struct TYPE_9__ {int invalid; scalar_t__ last_size; size_t used; char* recvbuf; char* decompressed; scalar_t__ compress_size; scalar_t__ text_mode; } ;
typedef TYPE_2__ yrmcds ;
typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*,char*,int,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,char const*,int) ;
 int FUNC_4 (char*,char*,size_t) ;
 void* FUNC_5 (char const*) ;
 void* FUNC_6 (char const*) ;
 void* FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,TYPE_1__*) ;

yrmcds_error FUNC_10(yrmcds* VAR_12, yrmcds_response* VAR_13) {
    if( VAR_12 == ((void*)0) || VAR_13 == ((void*)0) )
        return VAR_4;
    if( VAR_12->invalid )
        return VAR_10;

    if( VAR_12->last_size > 0 ) {
        size_t VAR_14 = VAR_12->used - VAR_12->last_size;
        if( VAR_14 > 0 )
            FUNC_4(VAR_12->recvbuf, VAR_12->recvbuf + VAR_12->last_size, VAR_14);
        VAR_12->used = VAR_14;
        VAR_12->last_size = 0;
        FUNC_1(VAR_12->decompressed);
        VAR_12->decompressed = ((void*)0);
    }

    if( VAR_12->text_mode ) {
        return FUNC_9(VAR_12, VAR_13);
    }

    while( VAR_12->used < VAR_0 ) {
        yrmcds_error VAR_15 = FUNC_8(VAR_12);
        if( VAR_15 != 0 ) return VAR_15;
    }

    if( *VAR_12->recvbuf != '\x81' ) {
        VAR_12->invalid = 1;
        return VAR_10;
    }
    uint32_t VAR_16 = FUNC_6(VAR_12->recvbuf + 8);
    if( VAR_16 > VAR_2 ) {
        VAR_12->invalid = 1;
        return VAR_10;
    }
    while( VAR_12->used < (VAR_0 + VAR_16) ) {
        yrmcds_error VAR_17 = FUNC_8(VAR_12);
        if( VAR_17 != 0 ) return VAR_17;
    }

    uint16_t VAR_18 = FUNC_5(VAR_12->recvbuf + 2);
    uint8_t VAR_19 = *(unsigned char*)(VAR_12->recvbuf + 4);
    if( VAR_16 < (VAR_18 + VAR_19) ) {
        VAR_12->invalid = 1;
        return VAR_10;
    }

    const char* VAR_20 = VAR_12->recvbuf + (VAR_0 + VAR_19);
    VAR_13->length = VAR_0 + VAR_16;
    VAR_13->command = *(unsigned char*)(VAR_12->recvbuf + 1);
    VAR_13->key = VAR_18 ? VAR_20 : ((void*)0);
    VAR_13->key_len = VAR_18;
    VAR_13->status = FUNC_5(VAR_12->recvbuf + 6);
    FUNC_3(&(VAR_13->serial), VAR_12->recvbuf + 12, 4);
    VAR_13->cas_unique = FUNC_7(VAR_12->recvbuf + 16);
    VAR_13->flags = 0;
    if( VAR_19 > 0 ) {
        if( VAR_19 != 4 ) {
            VAR_12->invalid = 1;
            return VAR_10;
        }
        VAR_13->flags = FUNC_6(VAR_12->recvbuf + VAR_0);
    }

    size_t VAR_21 = VAR_16 - VAR_18 - VAR_19;
    const char* VAR_22 = VAR_20 + VAR_18;

    if( (VAR_13->command == VAR_6 ||
         VAR_13->command == VAR_5) &&
        (VAR_13->status == VAR_11) ) {
        VAR_13->data = ((void*)0);
        VAR_13->data_len = 0;
        if( VAR_21 != 8 ) {
            VAR_12->invalid = 1;
            return VAR_10;
        }
        VAR_13->value = FUNC_7(VAR_22);
        VAR_12->last_size = VAR_13->length;
        return VAR_8;
    }
    VAR_13->value = 0;
    VAR_13->data = VAR_21 ? VAR_22 : ((void*)0);
    VAR_13->data_len = VAR_21;
    VAR_12->last_size = VAR_13->length;
    return VAR_8;
}
