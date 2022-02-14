
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_fence {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct amdgpu_sa_manager {unsigned int align; unsigned int size; TYPE_1__ wq; } ;
struct amdgpu_sa_bo {int flist; int olist; int * fence; struct amdgpu_sa_manager* manager; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct amdgpu_sa_manager*,struct dma_fence**,unsigned int*) ;
 scalar_t__ FUNC_3 (struct amdgpu_sa_manager*,struct amdgpu_sa_bo*,unsigned int,unsigned int) ;
 int FUNC_4 (struct amdgpu_sa_manager*) ;
 int FUNC_5 (struct amdgpu_sa_manager*,unsigned int,unsigned int) ;
 struct dma_fence* FUNC_6 (struct dma_fence*) ;
 int FUNC_7 (struct dma_fence*) ;
 long FUNC_8 (struct dma_fence**,unsigned int,int,int ,int *) ;
 int FUNC_9 (struct amdgpu_sa_bo*) ;
 struct amdgpu_sa_bo* FUNC_10 (int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_1__,int ) ;

int FUNC_14(struct amdgpu_sa_manager *VAR_5,
       struct amdgpu_sa_bo **VAR_6,
       unsigned VAR_7, unsigned VAR_8)
{
 struct dma_fence *VAR_9[VAR_0];
 unsigned VAR_10[VAR_0];
 unsigned VAR_11;
 int VAR_12, VAR_13;
 signed long VAR_14;

 if (FUNC_1(VAR_8 > VAR_5->align))
  return -VAR_1;

 if (FUNC_1(VAR_7 > VAR_5->size))
  return -VAR_1;

 *VAR_6 = FUNC_10(sizeof(struct amdgpu_sa_bo), VAR_3);
 if (!(*VAR_6))
  return -VAR_2;
 (*VAR_6)->manager = VAR_5;
 (*VAR_6)->fence = ((void*)0);
 FUNC_0(&(*VAR_6)->olist);
 FUNC_0(&(*VAR_6)->flist);

 FUNC_11(&VAR_5->wq.lock);
 do {
  for (VAR_12 = 0; VAR_12 < VAR_0; ++VAR_12)
   VAR_10[VAR_12] = 0;

  do {
   FUNC_4(VAR_5);

   if (FUNC_3(VAR_5, *VAR_6,
         VAR_7, VAR_8)) {
    FUNC_12(&VAR_5->wq.lock);
    return 0;
   }


  } while (FUNC_2(VAR_5, VAR_9, VAR_10));

  for (VAR_12 = 0, VAR_11 = 0; VAR_12 < VAR_0; ++VAR_12)
   if (VAR_9[VAR_12])
    VAR_9[VAR_11++] = FUNC_6(VAR_9[VAR_12]);

  if (VAR_11) {
   FUNC_12(&VAR_5->wq.lock);
   VAR_14 = FUNC_8(VAR_9, VAR_11, 0,
             VAR_4,
             ((void*)0));
   for (VAR_12 = 0; VAR_12 < VAR_11; ++VAR_12)
    FUNC_7(VAR_9[VAR_12]);

   VAR_13 = (VAR_14 > 0) ? 0 : VAR_14;
   FUNC_11(&VAR_5->wq.lock);
  } else {

   VAR_13 = FUNC_13(
    VAR_5->wq,
    FUNC_5(VAR_5, VAR_7, VAR_8)
   );
  }

 } while (!VAR_13);

 FUNC_12(&VAR_5->wq.lock);
 FUNC_9(*VAR_6);
 *VAR_6 = ((void*)0);
 return VAR_13;
}
