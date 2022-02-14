
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int stream; } ;
struct TYPE_5__ {int flags; TYPE_1__ data; } ;
typedef TYPE_2__ uv_stdio_container_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(uv_stdio_container_t* VAR_1) {
  if (!(VAR_1->flags & VAR_0)) return;
  FUNC_0(VAR_1->data.stream);
}
