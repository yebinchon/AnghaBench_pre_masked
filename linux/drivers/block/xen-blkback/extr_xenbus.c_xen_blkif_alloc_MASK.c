
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_blkif {int free_work; int drain_complete; int refcnt; int domid; } ;
typedef int domid_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 struct xen_blkif* FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 struct xen_blkif* FUNC_5 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static struct xen_blkif *FUNC_6(domid_t VAR_6)
{
 struct xen_blkif *VAR_7;

 FUNC_0(VAR_3 > VAR_0);

 VAR_7 = FUNC_5(VAR_4, VAR_2);
 if (!VAR_7)
  return FUNC_1(-VAR_1);

 VAR_7->domid = VAR_6;
 FUNC_3(&VAR_7->refcnt, 1);
 FUNC_4(&VAR_7->drain_complete);
 FUNC_2(&VAR_7->free_work, VAR_5);

 return VAR_7;
}
