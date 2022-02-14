
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lima_ctx_mgr {int lock; int handles; } ;
struct lima_ctx {int refcnt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct lima_ctx* FUNC_3 (int *,int ) ;

struct lima_ctx *FUNC_4(struct lima_ctx_mgr *VAR_0, u32 VAR_1)
{
 struct lima_ctx *VAR_2;

 FUNC_1(&VAR_0->lock);
 VAR_2 = FUNC_3(&VAR_0->handles, VAR_1);
 if (VAR_2)
  FUNC_0(&VAR_2->refcnt);
 FUNC_2(&VAR_0->lock);
 return VAR_2;
}
