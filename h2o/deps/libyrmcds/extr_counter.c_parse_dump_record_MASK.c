
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int yrmcds_error ;
struct TYPE_5__ {int body_length; int name_length; scalar_t__ body; scalar_t__ name; void* max_consumption; void* current_consumption; } ;
typedef TYPE_1__ yrmcds_cnt_response ;
struct TYPE_6__ {int invalid; } ;
typedef TYPE_2__ yrmcds_cnt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 void* FUNC_1 (scalar_t__) ;

__attribute__((used)) static yrmcds_error
FUNC_2(yrmcds_cnt* VAR_2, yrmcds_cnt_response* VAR_3) {
    if( VAR_3->body_length == 0 ) {

        return VAR_0;
    }
    if( VAR_3->body_length < 10 ) {
        VAR_2->invalid = 1;
        return VAR_1;
    }
    VAR_3->current_consumption = FUNC_1(VAR_3->body);
    VAR_3->max_consumption = FUNC_1(VAR_3->body + 4);
    VAR_3->name_length = FUNC_0(VAR_3->body + 8);
    if( VAR_3->body_length < 10 + VAR_3->name_length ) {
        VAR_2->invalid = 1;
        return VAR_1;
    }
    VAR_3->name = VAR_3->body + 10;
    return VAR_0;
}
