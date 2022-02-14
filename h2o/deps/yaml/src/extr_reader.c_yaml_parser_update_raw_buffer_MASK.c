
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ start; scalar_t__ pointer; scalar_t__ last; scalar_t__ end; } ;
struct TYPE_6__ {int eof; TYPE_1__ raw_buffer; int offset; int read_handler_data; int (* read_handler ) (int ,scalar_t__,scalar_t__,size_t*) ;} ;
typedef TYPE_2__ yaml_parser_t ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,size_t*) ;
 int FUNC_2 (TYPE_2__*,char*,int ,int) ;

__attribute__((used)) static int
FUNC_3(yaml_parser_t *VAR_0)
{
    size_t VAR_1 = 0;



    if (VAR_0->raw_buffer.start == VAR_0->raw_buffer.pointer
            && VAR_0->raw_buffer.last == VAR_0->raw_buffer.end)
        return 1;



    if (VAR_0->eof) return 1;



    if (VAR_0->raw_buffer.start < VAR_0->raw_buffer.pointer
            && VAR_0->raw_buffer.pointer < VAR_0->raw_buffer.last) {
        FUNC_0(VAR_0->raw_buffer.start, VAR_0->raw_buffer.pointer,
                VAR_0->raw_buffer.last - VAR_0->raw_buffer.pointer);
    }
    VAR_0->raw_buffer.last -=
        VAR_0->raw_buffer.pointer - VAR_0->raw_buffer.start;
    VAR_0->raw_buffer.pointer = VAR_0->raw_buffer.start;



    if (!VAR_0->read_handler(VAR_0->read_handler_data, VAR_0->raw_buffer.last,
                VAR_0->raw_buffer.end - VAR_0->raw_buffer.last, &VAR_1)) {
        return FUNC_2(VAR_0, "input error",
                VAR_0->offset, -1);
    }
    VAR_0->raw_buffer.last += VAR_1;
    if (!VAR_1) {
        VAR_0->eof = 1;
    }

    return 1;
}
