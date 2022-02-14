
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usnic_ib_mr {TYPE_1__* umem; } ;
struct ib_udata {int dummy; } ;
struct ib_mr {int dummy; } ;
struct TYPE_2__ {int length; int va; } ;


 int FUNC_0 (struct usnic_ib_mr*) ;
 struct usnic_ib_mr* FUNC_1 (struct ib_mr*) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(struct ib_mr *VAR_0, struct ib_udata *VAR_1)
{
 struct usnic_ib_mr *VAR_2 = FUNC_1(VAR_0);

 FUNC_2("va 0x%lx length 0x%zx\n", VAR_2->umem->va, VAR_2->umem->length);

 FUNC_3(VAR_2->umem);
 FUNC_0(VAR_2);
 return 0;
}
