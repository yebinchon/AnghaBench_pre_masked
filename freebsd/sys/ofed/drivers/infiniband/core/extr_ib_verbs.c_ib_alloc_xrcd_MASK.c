
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_xrcd {int tgt_qp_list; int tgt_qp_mutex; int usecnt; int * inode; struct ib_device* device; } ;
struct ib_device {struct ib_xrcd* (* alloc_xrcd ) (struct ib_device*,int *,int *) ;} ;


 int VAR_0 ;
 struct ib_xrcd* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ib_xrcd*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 struct ib_xrcd* FUNC_5 (struct ib_device*,int *,int *) ;

struct ib_xrcd *FUNC_6(struct ib_device *VAR_1)
{
 struct ib_xrcd *VAR_2;

 if (!VAR_1->alloc_xrcd)
  return FUNC_0(-VAR_0);

 VAR_2 = VAR_1->alloc_xrcd(VAR_1, ((void*)0), ((void*)0));
 if (!FUNC_2(VAR_2)) {
  VAR_2->device = VAR_1;
  VAR_2->inode = ((void*)0);
  FUNC_3(&VAR_2->usecnt, 0);
  FUNC_4(&VAR_2->tgt_qp_mutex);
  FUNC_1(&VAR_2->tgt_qp_list);
 }

 return VAR_2;
}
