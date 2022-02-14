
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lima_ctx_mgr {int lock; int handles; } ;
struct lima_ctx {int refcnt; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct lima_ctx* FUNC_3 (int *,int ) ;

int FUNC_4(struct lima_ctx_mgr *VAR_2, u32 VAR_3)
{
 struct lima_ctx *VAR_4;
 int VAR_5 = 0;

 FUNC_1(&VAR_2->lock);
 VAR_4 = FUNC_3(&VAR_2->handles, VAR_3);
 if (VAR_4)
  FUNC_0(&VAR_4->refcnt, VAR_1);
 else
  VAR_5 = -VAR_0;
 FUNC_2(&VAR_2->lock);
 return VAR_5;
}
