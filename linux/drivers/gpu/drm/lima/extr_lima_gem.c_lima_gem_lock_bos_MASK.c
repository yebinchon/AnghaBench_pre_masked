
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ww_acquire_ctx {int dummy; } ;
struct TYPE_4__ {TYPE_1__* resv; } ;
struct lima_bo {TYPE_2__ gem; } ;
struct TYPE_3__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ww_acquire_ctx*) ;
 int FUNC_1 (struct ww_acquire_ctx*) ;
 int FUNC_2 (struct ww_acquire_ctx*,int *) ;
 int FUNC_3 (int *,struct ww_acquire_ctx*) ;
 int FUNC_4 (int *,struct ww_acquire_ctx*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct lima_bo **VAR_2, u32 VAR_3,
        struct ww_acquire_ctx *VAR_4)
{
 int VAR_5, VAR_6 = 0, VAR_7, VAR_8 = -1;

 FUNC_2(VAR_4, &VAR_1);

retry:
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if (VAR_5 == VAR_8) {
   VAR_8 = -1;
   continue;
  }

  VAR_6 = FUNC_3(&VAR_2[VAR_5]->gem.resv->lock, VAR_4);
  if (VAR_6 < 0) {
   VAR_7 = VAR_5;
   goto err;
  }
 }

 FUNC_0(VAR_4);
 return 0;

err:
 for (VAR_5--; VAR_5 >= 0; VAR_5--)
  FUNC_5(&VAR_2[VAR_5]->gem.resv->lock);

 if (VAR_8 >= 0)
  FUNC_5(&VAR_2[VAR_8]->gem.resv->lock);

 if (VAR_6 == -VAR_0) {

  VAR_6 = FUNC_4(
   &VAR_2[VAR_7]->gem.resv->lock, VAR_4);
  if (!VAR_6) {
   VAR_8 = VAR_7;
   goto retry;
  }
 }
 FUNC_1(VAR_4);

 return VAR_6;
}
