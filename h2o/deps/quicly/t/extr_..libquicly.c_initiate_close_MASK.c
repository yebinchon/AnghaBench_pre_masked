
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_7__ {char const* reason_phrase; int frame_type; scalar_t__ error_code; } ;
struct TYPE_8__ {TYPE_1__ connection_close; } ;
struct TYPE_9__ {scalar_t__ state; } ;
struct TYPE_10__ {TYPE_2__ egress; TYPE_3__ super; } ;
typedef TYPE_4__ quicly_conn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (TYPE_4__*,int,int ) ;

__attribute__((used)) static int FUNC_6(quicly_conn_t *VAR_5, int VAR_6, uint64_t VAR_7, const char *VAR_8)
{
    uint16_t VAR_9;

    if (VAR_5->super.state >= VAR_1)
        return 0;

    if (VAR_8 == ((void*)0))
        VAR_8 = "";


    if (FUNC_4(VAR_6)) {
        VAR_9 = FUNC_2(VAR_6);
    } else if (FUNC_3(VAR_6)) {
        VAR_9 = FUNC_2(VAR_6);
        VAR_7 = VAR_4;
    } else if (FUNC_0(VAR_6) == VAR_0) {
        VAR_9 = VAR_3 + FUNC_1(VAR_6);
    } else {
        VAR_9 = FUNC_2(VAR_2);
        VAR_7 = VAR_4;
    }

    VAR_5->egress.connection_close.error_code = VAR_9;
    VAR_5->egress.connection_close.frame_type = VAR_7;
    VAR_5->egress.connection_close.reason_phrase = VAR_8;
    return FUNC_5(VAR_5, 1, 0);
}
