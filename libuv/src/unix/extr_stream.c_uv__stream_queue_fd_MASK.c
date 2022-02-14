
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* queued_fds; } ;
typedef TYPE_1__ uv_stream_t ;
struct TYPE_8__ {unsigned int size; unsigned int offset; int* fds; } ;
typedef TYPE_2__ uv__stream_queued_fds_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (unsigned int) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,unsigned int) ;

__attribute__((used)) static int FUNC_2(uv_stream_t* VAR_1, int VAR_2) {
  uv__stream_queued_fds_t* VAR_3;
  unsigned int VAR_4;

  VAR_3 = VAR_1->queued_fds;
  if (VAR_3 == ((void*)0)) {
    VAR_4 = 8;
    VAR_3 = FUNC_0((VAR_4 - 1) * sizeof(*VAR_3->fds) +
                            sizeof(*VAR_3));
    if (VAR_3 == ((void*)0))
      return VAR_0;
    VAR_3->size = VAR_4;
    VAR_3->offset = 0;
    VAR_1->queued_fds = VAR_3;


  } else if (VAR_3->size == VAR_3->offset) {
    VAR_4 = VAR_3->size + 8;
    VAR_3 = FUNC_1(VAR_3,
                             (VAR_4 - 1) * sizeof(*VAR_3->fds) +
                              sizeof(*VAR_3));





    if (VAR_3 == ((void*)0))
      return VAR_0;
    VAR_3->size = VAR_4;
    VAR_1->queued_fds = VAR_3;
  }


  VAR_3->fds[VAR_3->offset++] = VAR_2;

  return 0;
}
