
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {char* base; scalar_t__ len; } ;
struct TYPE_9__ {TYPE_5__ buf; int req; } ;
typedef TYPE_2__ write_req_t ;
typedef int uv_write_t ;
typedef int uv_stream_t ;
struct TYPE_10__ {char* base; } ;
typedef TYPE_3__ uv_buf_t ;
typedef void* ssize_t ;
struct TYPE_8__ {char* prevbuf_ptr; int prevbuf_pos; int prevbuf_rem; } ;
struct TYPE_11__ {TYPE_1__ state; } ;
typedef TYPE_4__ dnshandle ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,char*,int) ;
 scalar_t__ FUNC_5 (int *,int *,TYPE_5__*,int,int ) ;

__attribute__((used)) static void FUNC_6(uv_stream_t* VAR_3,
                        ssize_t VAR_4,
                        const uv_buf_t* VAR_5) {
  write_req_t* VAR_6;
  dnshandle* VAR_7 = (dnshandle*)VAR_3;
  char VAR_8[VAR_0];
  int VAR_9 = VAR_0;
  int VAR_10 = 0;
  int VAR_11;
  char* VAR_12;
  char* VAR_13;
  int VAR_14 = 0;

  VAR_6 = (write_req_t*) FUNC_3(sizeof *VAR_6);
  VAR_6->buf.base = (char*)FUNC_3(VAR_1);
  VAR_6->buf.len = 0;

  if (VAR_7->state.prevbuf_ptr != ((void*)0)) {
    VAR_12 = VAR_7->state.prevbuf_ptr + VAR_7->state.prevbuf_pos;
    VAR_11 = VAR_7->state.prevbuf_rem;
    VAR_14 = 1;
  } else {
    VAR_12 = VAR_5->base;
    VAR_11 = VAR_4;
  }
  VAR_13 = VAR_12;

  while (VAR_12 != ((void*)0)) {

    while (VAR_11 > 0) {

      if (VAR_9 > 0) {

        if (VAR_11 < VAR_9) {

          FUNC_4(&VAR_8[VAR_0 - VAR_9],
                 VAR_12,
                 VAR_11);
          VAR_9 = VAR_0 - VAR_11;
          break;
        } else {

          FUNC_4(&VAR_8[VAR_0 - VAR_9],
                 VAR_12,
                 VAR_9);
          VAR_12 += VAR_9;
          VAR_11 -= VAR_9;
          VAR_9 = 0;


          VAR_10 = (unsigned) VAR_8[0] * 256 + (unsigned) VAR_8[1];
          VAR_10 -= (VAR_0 - 2);
        }
      }

      if (VAR_10 <= VAR_11) {

        FUNC_1(VAR_6, VAR_8);


        VAR_12 += VAR_10;
        VAR_13 = VAR_12;
        VAR_11 -= VAR_10;
        VAR_10 = 0;
        VAR_9 = VAR_0;
      } else {

        VAR_10 -= VAR_11;
        break;
      }
    }




    if (VAR_14 == 1) {

      FUNC_2(VAR_7->state.prevbuf_ptr);
      VAR_12 = VAR_5->base;
      VAR_11 = VAR_4;
      VAR_14 = 0;
    } else {
      VAR_12 = ((void*)0);
    }
  }


  if (VAR_6->buf.len > 0) {
    if (FUNC_5((uv_write_t*) &VAR_6->req, VAR_3, &VAR_6->buf, 1, VAR_2)) {
      FUNC_0("uv_write failed");
    }
  }

  if (VAR_11 > 0) {

    VAR_7->state.prevbuf_ptr = VAR_5->base;
    VAR_7->state.prevbuf_pos = VAR_13 - VAR_5->base;
    VAR_7->state.prevbuf_rem = VAR_4 - VAR_7->state.prevbuf_pos;
  } else {

    VAR_7->state.prevbuf_ptr = ((void*)0);
    VAR_7->state.prevbuf_pos = 0;
    VAR_7->state.prevbuf_rem = 0;
    FUNC_2(VAR_5->base);
  }
}
