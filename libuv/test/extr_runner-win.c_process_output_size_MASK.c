
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int stdio_out; } ;
typedef TYPE_1__ process_info_t ;
struct TYPE_6__ {scalar_t__ QuadPart; } ;
typedef TYPE_2__ LARGE_INTEGER ;


 int FUNC_0 (int ,TYPE_2__*) ;

long int FUNC_1(process_info_t *VAR_0) {
  LARGE_INTEGER VAR_1;
  if (!FUNC_0(VAR_0->stdio_out, &VAR_1))
    return -1;
  return (long int)VAR_1.QuadPart;
}
