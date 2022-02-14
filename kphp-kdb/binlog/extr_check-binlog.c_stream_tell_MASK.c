
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {long long readto_off; TYPE_1__* F; } ;
typedef TYPE_2__ stream_t ;
struct TYPE_4__ {long long offset; } ;



__attribute__((used)) static long long FUNC_0 (stream_t *VAR_0) {
  return VAR_0->readto_off + VAR_0->F->offset;
}
