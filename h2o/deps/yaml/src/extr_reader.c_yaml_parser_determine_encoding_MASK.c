
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int last; int pointer; } ;
struct TYPE_6__ {int offset; void* encoding; TYPE_1__ raw_buffer; int eof; } ;
typedef TYPE_2__ yaml_parser_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_2(yaml_parser_t *VAR_6)
{


    while (!VAR_6->eof
            && VAR_6->raw_buffer.last - VAR_6->raw_buffer.pointer < 3) {
        if (!FUNC_1(VAR_6)) {
            return 0;
        }
    }



    if (VAR_6->raw_buffer.last - VAR_6->raw_buffer.pointer >= 2
            && !FUNC_0(VAR_6->raw_buffer.pointer, VAR_1, 2)) {
        VAR_6->encoding = VAR_4;
        VAR_6->raw_buffer.pointer += 2;
        VAR_6->offset += 2;
    }
    else if (VAR_6->raw_buffer.last - VAR_6->raw_buffer.pointer >= 2
            && !FUNC_0(VAR_6->raw_buffer.pointer, VAR_0, 2)) {
        VAR_6->encoding = VAR_3;
        VAR_6->raw_buffer.pointer += 2;
        VAR_6->offset += 2;
    }
    else if (VAR_6->raw_buffer.last - VAR_6->raw_buffer.pointer >= 3
            && !FUNC_0(VAR_6->raw_buffer.pointer, VAR_2, 3)) {
        VAR_6->encoding = VAR_5;
        VAR_6->raw_buffer.pointer += 3;
        VAR_6->offset += 3;
    }
    else {
        VAR_6->encoding = VAR_5;
    }

    return 1;
}
