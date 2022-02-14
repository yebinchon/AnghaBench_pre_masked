
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {size_t dst; } ;
typedef TYPE_3__ quicly_send_context_t ;
struct TYPE_10__ {size_t frame_type; size_t error_code; int * reason_phrase; } ;
struct TYPE_11__ {TYPE_1__ connection_close; } ;
struct TYPE_13__ {TYPE_2__ egress; } ;
typedef TYPE_4__ quicly_conn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_4__*,int ,size_t,size_t,...) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*,int) ;
 int FUNC_2 (size_t,int *,size_t) ;
 int FUNC_3 () ;
 int * FUNC_4 (int *,size_t) ;
 size_t FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(quicly_conn_t *VAR_5, quicly_send_context_t *VAR_6)
{
    uint8_t VAR_7[1 + 8 + 8 + 8], *VAR_8;
    size_t VAR_9 = FUNC_5(VAR_5->egress.connection_close.reason_phrase);
    int VAR_10;


    VAR_8 = VAR_7;
    *VAR_8++ = VAR_5->egress.connection_close.frame_type != VAR_4 ? VAR_2
                                                                  : VAR_1;
    VAR_8 = FUNC_4(VAR_8, VAR_5->egress.connection_close.error_code);
    if (VAR_5->egress.connection_close.frame_type != VAR_4)
        VAR_8 = FUNC_4(VAR_8, VAR_5->egress.connection_close.frame_type);
    VAR_8 = FUNC_4(VAR_8, VAR_9);


    if ((VAR_10 = FUNC_1(VAR_5, VAR_6, VAR_8 - VAR_7 + VAR_9)) != 0)
        return VAR_10;
    FUNC_2(VAR_6->dst, VAR_7, VAR_8 - VAR_7);
    VAR_6->dst += VAR_8 - VAR_7;
    FUNC_2(VAR_6->dst, VAR_5->egress.connection_close.reason_phrase, VAR_9);
    VAR_6->dst += VAR_9;

    if (VAR_5->egress.connection_close.frame_type != VAR_4) {
        FUNC_0(VAR_3, VAR_5, FUNC_3(), VAR_5->egress.connection_close.error_code,
                     VAR_5->egress.connection_close.frame_type, VAR_5->egress.connection_close.reason_phrase);
    } else {
        FUNC_0(VAR_0, VAR_5, FUNC_3(), VAR_5->egress.connection_close.error_code,
                     VAR_5->egress.connection_close.reason_phrase);
    }
    return 0;
}
