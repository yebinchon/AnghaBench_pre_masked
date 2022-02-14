
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int write_index; int nbufs; TYPE_3__* bufs; } ;
typedef TYPE_1__ uv_write_t ;
struct TYPE_7__ {size_t write_queue_size; } ;
typedef TYPE_2__ uv_stream_t ;
struct TYPE_8__ {size_t len; size_t base; } ;
typedef TYPE_3__ uv_buf_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(uv_stream_t* VAR_0,
                                uv_write_t* VAR_1,
                                size_t VAR_2) {
  uv_buf_t* VAR_3;
  size_t VAR_4;

  FUNC_0(VAR_2 <= VAR_0->write_queue_size);
  VAR_0->write_queue_size -= VAR_2;

  VAR_3 = VAR_1->bufs + VAR_1->write_index;

  do {
    VAR_4 = VAR_2 < VAR_3->len ? VAR_2 : VAR_3->len;
    VAR_3->base += VAR_4;
    VAR_3->len -= VAR_4;
    VAR_3 += (VAR_3->len == 0);
    VAR_2 -= VAR_4;
  } while (VAR_2 > 0);

  VAR_1->write_index = VAR_3 - VAR_1->bufs;

  return VAR_1->write_index == VAR_1->nbufs;
}
