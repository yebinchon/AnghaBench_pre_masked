
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ yrmcds_error ;
struct TYPE_4__ {scalar_t__ serial; } ;
typedef TYPE_1__ yrmcds_cnt_response ;
typedef int yrmcds_cnt ;
typedef scalar_t__ uint32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*) ;
 char* FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(yrmcds_cnt* VAR_2, yrmcds_cnt_response* VAR_3, uint32_t VAR_4) {
    yrmcds_error VAR_5;
    while( 1 ) {
        VAR_5 = FUNC_3(VAR_2, VAR_3);
        if( VAR_5 != VAR_0 ) {
            FUNC_1(VAR_1, "yc-cnt: failed to recv: %s\n",
                    FUNC_4(VAR_5));
            FUNC_2(VAR_2);
            FUNC_0(1);
        }
        if( VAR_3->serial == VAR_4 )
            break;
    }
}
