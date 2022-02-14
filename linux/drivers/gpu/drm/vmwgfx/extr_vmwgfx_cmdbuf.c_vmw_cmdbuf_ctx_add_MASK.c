
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmw_cmdbuf_man {TYPE_2__* ctx; } ;
struct vmw_cmdbuf_header {size_t cb_context; int list; TYPE_1__* cb_header; } ;
struct TYPE_4__ {int submitted; } ;
struct TYPE_3__ {int flags; scalar_t__ dxContext; } ;
typedef size_t SVGACBContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct vmw_cmdbuf_man*) ;

__attribute__((used)) static void FUNC_2(struct vmw_cmdbuf_man *VAR_1,
          struct vmw_cmdbuf_header *VAR_2,
          SVGACBContext VAR_3)
{
 if (!(VAR_2->cb_header->flags & VAR_0))
  VAR_2->cb_header->dxContext = 0;
 VAR_2->cb_context = VAR_3;
 FUNC_0(&VAR_2->list, &VAR_1->ctx[VAR_3].submitted);

 FUNC_1(VAR_1);
}
