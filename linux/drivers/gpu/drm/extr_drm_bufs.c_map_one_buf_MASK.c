
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_buf_map {TYPE_1__* list; } ;
struct drm_buf {unsigned long offset; unsigned long idx; unsigned long total; } ;
typedef int address ;
struct TYPE_2__ {int address; int used; int total; int idx; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,unsigned long*,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, int VAR_2, unsigned long VAR_3,
   struct drm_buf *VAR_4)
{
 struct drm_buf_map *VAR_5 = VAR_1;
 unsigned long VAR_6 = VAR_3 + VAR_4->offset;

 if (FUNC_1(&VAR_5->list[VAR_2].idx, &VAR_4->idx,
    sizeof(VAR_5->list[0].idx)))
  return -VAR_0;
 if (FUNC_1(&VAR_5->list[VAR_2].total, &VAR_4->total,
    sizeof(VAR_5->list[0].total)))
  return -VAR_0;
 if (FUNC_0(&VAR_5->list[VAR_2].used, sizeof(int)))
  return -VAR_0;
 if (FUNC_1(&VAR_5->list[VAR_2].address, &VAR_6,
    sizeof(VAR_6)))
  return -VAR_0;
 return 0;
}
