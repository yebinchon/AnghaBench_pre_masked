
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lima_device {scalar_t__ pipe; } ;
struct lima_ctx_mgr {int handles; } ;
struct lima_ctx {scalar_t__ context; int guilty; int refcnt; struct lima_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lima_ctx*) ;
 int FUNC_1 (int *) ;
 struct lima_ctx* FUNC_2 (int,int ) ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__,int *) ;
 int FUNC_5 (int *,int *,struct lima_ctx*,int ,int ) ;
 int VAR_3 ;

int FUNC_6(struct lima_device *VAR_4, struct lima_ctx_mgr *VAR_5, u32 *VAR_6)
{
 struct lima_ctx *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;
 VAR_7->dev = VAR_4;
 FUNC_1(&VAR_7->refcnt);

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_9 = FUNC_4(VAR_4->pipe + VAR_8, VAR_7->context + VAR_8, &VAR_7->guilty);
  if (VAR_9)
   goto err_out0;
 }

 VAR_9 = FUNC_5(&VAR_5->handles, VAR_6, VAR_7, VAR_3, VAR_1);
 if (VAR_9 < 0)
  goto err_out0;

 return 0;

err_out0:
 for (VAR_8--; VAR_8 >= 0; VAR_8--)
  FUNC_3(VAR_4->pipe + VAR_8, VAR_7->context + VAR_8);
 FUNC_0(VAR_7);
 return VAR_9;
}
