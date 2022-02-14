
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct radeon_sa_manager {unsigned int size; int * bo; int * flist; int olist; int * hole; void* align; void* domain; int wq; } ;
struct radeon_device {int dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct radeon_device*,unsigned int,void*,int,void*,void*,int *,int *,int **) ;

int FUNC_4(struct radeon_device *VAR_1,
         struct radeon_sa_manager *VAR_2,
         unsigned VAR_3, u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 int VAR_7, VAR_8;

 FUNC_2(&VAR_2->wq);
 VAR_2->bo = ((void*)0);
 VAR_2->size = VAR_3;
 VAR_2->domain = VAR_5;
 VAR_2->align = VAR_4;
 VAR_2->hole = &VAR_2->olist;
 FUNC_0(&VAR_2->olist);
 for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7) {
  FUNC_0(&VAR_2->flist[VAR_7]);
 }

 VAR_8 = FUNC_3(VAR_1, VAR_3, VAR_4, 1,
        VAR_5, VAR_6, ((void*)0), ((void*)0), &VAR_2->bo);
 if (VAR_8) {
  FUNC_1(VAR_1->dev, "(%d) failed to allocate bo for manager\n", VAR_8);
  return VAR_8;
 }

 return VAR_8;
}
