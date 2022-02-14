
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ yrmcds_error ;
struct TYPE_7__ {scalar_t__ count; } ;
typedef TYPE_1__ yrmcds_cnt_statistics ;
struct TYPE_8__ {char* body; int body_length; } ;
typedef TYPE_2__ yrmcds_cnt_response ;
struct TYPE_9__ {TYPE_1__ stats; } ;
typedef TYPE_3__ yrmcds_cnt ;
typedef int uint16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int,int,char const*,char const*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static yrmcds_error
FUNC_2(yrmcds_cnt* VAR_2, const yrmcds_cnt_response* VAR_3) {
    yrmcds_cnt_statistics* VAR_4 = &VAR_2->stats;
    VAR_4->count = 0;

    const char* VAR_5 = VAR_3->body;
    const char* VAR_6 = VAR_3->body + VAR_3->body_length;
    while( VAR_5 < VAR_6 ) {
        if( VAR_5 + 4 > VAR_6 )
            return VAR_1;
        uint16_t VAR_7 = FUNC_1(VAR_5);
        uint16_t VAR_8 = FUNC_1(VAR_5 + 2);
        if( VAR_5 + 4 + VAR_7 + VAR_8 > VAR_6 )
            return VAR_1;
        yrmcds_error VAR_9 =
            FUNC_0(VAR_4, VAR_7, VAR_8, VAR_5 + 4, VAR_5 + 4 + VAR_7);
        if( VAR_9 != VAR_0 )
            return VAR_9;
        VAR_5 += 4 + VAR_7 + VAR_8;
    }
    return VAR_0;
}
