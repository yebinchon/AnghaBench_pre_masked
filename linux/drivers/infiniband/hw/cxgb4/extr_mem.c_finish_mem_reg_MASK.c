
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int state; int stag; int page_size; int va_fbo; int len; } ;
struct TYPE_4__ {int rkey; int lkey; unsigned int page_size; int iova; int length; } ;
struct c4iw_mr {TYPE_3__* rhp; TYPE_2__ attr; TYPE_1__ ibmr; } ;
struct TYPE_6__ {int mrs; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,struct c4iw_mr*) ;
 int FUNC_1 (int *,int,struct c4iw_mr*,int ) ;

__attribute__((used)) static int FUNC_2(struct c4iw_mr *VAR_1, u32 VAR_2)
{
 u32 VAR_3;

 VAR_1->attr.state = 1;
 VAR_1->attr.stag = VAR_2;
 VAR_3 = VAR_2 >> 8;
 VAR_1->ibmr.rkey = VAR_1->ibmr.lkey = VAR_2;
 VAR_1->ibmr.length = VAR_1->attr.len;
 VAR_1->ibmr.iova = VAR_1->attr.va_fbo;
 VAR_1->ibmr.page_size = 1U << (VAR_1->attr.page_size + 12);
 FUNC_0("mmid 0x%x mhp %p\n", VAR_3, VAR_1);
 return FUNC_1(&VAR_1->rhp->mrs, VAR_3, VAR_1, VAR_0);
}
