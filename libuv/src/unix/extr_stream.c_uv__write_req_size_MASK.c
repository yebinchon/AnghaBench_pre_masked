
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int write_index; int nbufs; TYPE_1__* handle; int * bufs; } ;
typedef TYPE_2__ uv_write_t ;
struct TYPE_4__ {size_t write_queue_size; } ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int *,int) ;

__attribute__((used)) static size_t FUNC_2(uv_write_t* VAR_0) {
  size_t VAR_1;

  FUNC_0(VAR_0->bufs != ((void*)0));
  VAR_1 = FUNC_1(VAR_0->bufs + VAR_0->write_index,
                        VAR_0->nbufs - VAR_0->write_index);
  FUNC_0(VAR_0->handle->write_queue_size >= VAR_1);

  return VAR_1;
}
