
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* data; } ;
typedef TYPE_3__ uv_handle_t ;
struct TYPE_8__ {TYPE_4__* data; } ;
struct TYPE_7__ {TYPE_3__ handle; } ;
struct TYPE_10__ {scalar_t__ rdstate; scalar_t__ wrstate; TYPE_2__ timer_handle; TYPE_1__ handle; } ;
typedef TYPE_4__ conn ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_2(conn *VAR_2) {
  FUNC_0(VAR_2->rdstate != VAR_0);
  FUNC_0(VAR_2->wrstate != VAR_0);
  VAR_2->rdstate = VAR_0;
  VAR_2->wrstate = VAR_0;
  VAR_2->timer_handle.data = VAR_2;
  VAR_2->handle.handle.data = VAR_2;
  FUNC_1(&VAR_2->handle.handle, VAR_1);
  FUNC_1((uv_handle_t *) &VAR_2->timer_handle, VAR_1);
}
