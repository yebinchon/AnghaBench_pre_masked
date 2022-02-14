
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_pages; } ;
struct qxl_bo {int map_count; void* kptr; int kmap; TYPE_1__ tbo; } ;


 int FUNC_0 (TYPE_1__*,int ,int ,int *) ;
 void* FUNC_1 (int *,int*) ;

int FUNC_2(struct qxl_bo *VAR_0, void **VAR_1)
{
 bool VAR_2;
 int VAR_3;

 if (VAR_0->kptr) {
  if (VAR_1)
   *VAR_1 = VAR_0->kptr;
  VAR_0->map_count++;
  return 0;
 }
 VAR_3 = FUNC_0(&VAR_0->tbo, 0, VAR_0->tbo.num_pages, &VAR_0->kmap);
 if (VAR_3)
  return VAR_3;
 VAR_0->kptr = FUNC_1(&VAR_0->kmap, &VAR_2);
 if (VAR_1)
  *VAR_1 = VAR_0->kptr;
 VAR_0->map_count = 1;
 return 0;
}
