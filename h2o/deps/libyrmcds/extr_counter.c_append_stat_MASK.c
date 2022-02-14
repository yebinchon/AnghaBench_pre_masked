
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int yrmcds_error ;
struct TYPE_6__ {int count; int capacity; TYPE_2__* records; } ;
typedef TYPE_1__ yrmcds_cnt_statistics ;
struct TYPE_7__ {char const* name; char const* value; void* value_length; void* name_length; } ;
typedef TYPE_2__ yrmcds_cnt_stat ;
typedef void* uint16_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static yrmcds_error
FUNC_1(yrmcds_cnt_statistics* VAR_3,
            uint16_t VAR_4, uint16_t VAR_5,
            const char* VAR_6, const char* VAR_7) {
    if( VAR_3->count == VAR_3->capacity ) {
        size_t VAR_8 = VAR_3->capacity * 2;
        if( VAR_8 < VAR_0 )
            VAR_8 = VAR_0;
        yrmcds_cnt_stat* VAR_9 =
            FUNC_0(VAR_3->records, sizeof(yrmcds_cnt_stat) * VAR_8);
        if( VAR_9 == ((void*)0) )
            return VAR_2;
        VAR_3->capacity = VAR_8;
        VAR_3->records = VAR_9;
    }

    VAR_3->records[VAR_3->count].name_length = VAR_4;
    VAR_3->records[VAR_3->count].value_length = VAR_5;
    VAR_3->records[VAR_3->count].name = VAR_6;
    VAR_3->records[VAR_3->count].value = VAR_7;
    VAR_3->count += 1;
    return VAR_1;
}
