
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ww_acquire_ctx {int dummy; } ;
struct v3d_job {int bo_count; int * bo; int deps; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int,struct ww_acquire_ctx*) ;
 int FUNC_2 (int *,int,struct ww_acquire_ctx*) ;

__attribute__((used)) static int
FUNC_3(struct v3d_job *VAR_0,
    struct ww_acquire_ctx *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_3 = FUNC_1(VAR_0->bo, VAR_0->bo_count, VAR_1);
 if (VAR_3)
  return VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->bo_count; VAR_2++) {
  VAR_3 = FUNC_0(&VAR_0->deps,
             VAR_0->bo[VAR_2], 1);
  if (VAR_3) {
   FUNC_2(VAR_0->bo, VAR_0->bo_count,
          VAR_1);
   return VAR_3;
  }
 }

 return 0;
}
