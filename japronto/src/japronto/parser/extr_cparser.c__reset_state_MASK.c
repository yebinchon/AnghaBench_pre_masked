
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct phr_chunked_decoder {int dummy; } ;
struct TYPE_5__ {int consume_trailer; } ;
struct TYPE_4__ {scalar_t__ buffer_end; scalar_t__ buffer_start; int connection; scalar_t__ chunked_offset; TYPE_2__ chunked_decoder; int content_length; int transfer; int state; } ;
typedef TYPE_1__ Parser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_1(Parser* VAR_4, bool VAR_5) {
    VAR_4->state = VAR_2;
    VAR_4->transfer = VAR_3;
    VAR_4->content_length = VAR_0;
    FUNC_0(&VAR_4->chunked_decoder, 0, sizeof(struct phr_chunked_decoder));
    VAR_4->chunked_decoder.consume_trailer = 1;
    VAR_4->chunked_offset = 0;
    if(VAR_5) {
      VAR_4->connection = VAR_1;
      VAR_4->buffer_start = 0;
      VAR_4->buffer_end = 0;
    }
}
