
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_blkif {TYPE_1__* be; int vbd; } ;
struct TYPE_2__ {struct TYPE_2__* mode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,struct xen_blkif*) ;
 int VAR_0 ;
 int FUNC_3 (struct xen_blkif*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct xen_blkif *VAR_1)
{
 FUNC_0(FUNC_3(VAR_1));
 FUNC_4(&VAR_1->vbd);
 FUNC_1(VAR_1->be->mode);
 FUNC_1(VAR_1->be);


 FUNC_2(VAR_0, VAR_1);
}
