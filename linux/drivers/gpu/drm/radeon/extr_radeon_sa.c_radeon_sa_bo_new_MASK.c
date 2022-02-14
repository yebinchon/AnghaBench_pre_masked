
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct radeon_sa_manager {unsigned int align; unsigned int size; TYPE_1__ wq; } ;
struct radeon_sa_bo {int flist; int olist; int * fence; struct radeon_sa_manager* manager; } ;
struct radeon_fence {int dummy; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (struct radeon_sa_bo*) ;
 struct radeon_sa_bo* FUNC_3 (int,int ) ;
 int FUNC_4 (struct radeon_fence*) ;
 int FUNC_5 (struct radeon_fence**) ;
 int FUNC_6 (struct radeon_device*,struct radeon_fence**,int) ;
 scalar_t__ FUNC_7 (struct radeon_sa_manager*,struct radeon_fence**,unsigned int*) ;
 scalar_t__ FUNC_8 (struct radeon_sa_manager*,struct radeon_sa_bo*,unsigned int,unsigned int) ;
 int FUNC_9 (struct radeon_sa_manager*) ;
 int FUNC_10 (struct radeon_sa_manager*,unsigned int,unsigned int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_1__,int ) ;

int FUNC_14(struct radeon_device *VAR_4,
       struct radeon_sa_manager *VAR_5,
       struct radeon_sa_bo **VAR_6,
       unsigned VAR_7, unsigned VAR_8)
{
 struct radeon_fence *VAR_9[VAR_3];
 unsigned VAR_10[VAR_3];
 int VAR_11, VAR_12;

 FUNC_0(VAR_8 > VAR_5->align);
 FUNC_0(VAR_7 > VAR_5->size);

 *VAR_6 = FUNC_3(sizeof(struct radeon_sa_bo), VAR_2);
 if ((*VAR_6) == ((void*)0)) {
  return -VAR_1;
 }
 (*VAR_6)->manager = VAR_5;
 (*VAR_6)->fence = ((void*)0);
 FUNC_1(&(*VAR_6)->olist);
 FUNC_1(&(*VAR_6)->flist);

 FUNC_11(&VAR_5->wq.lock);
 do {
  for (VAR_11 = 0; VAR_11 < VAR_3; ++VAR_11) {
   VAR_9[VAR_11] = ((void*)0);
   VAR_10[VAR_11] = 0;
  }

  do {
   FUNC_9(VAR_5);

   if (FUNC_8(VAR_5, *VAR_6,
         VAR_7, VAR_8)) {
    FUNC_12(&VAR_5->wq.lock);
    return 0;
   }


  } while (FUNC_7(VAR_5, VAR_9, VAR_10));

  for (VAR_11 = 0; VAR_11 < VAR_3; ++VAR_11)
   FUNC_4(VAR_9[VAR_11]);

  FUNC_12(&VAR_5->wq.lock);
  VAR_12 = FUNC_6(VAR_4, VAR_9, 0);
  for (VAR_11 = 0; VAR_11 < VAR_3; ++VAR_11)
   FUNC_5(&VAR_9[VAR_11]);
  FUNC_11(&VAR_5->wq.lock);

  if (VAR_12 == -VAR_0) {
   VAR_12 = FUNC_13(
    VAR_5->wq,
    FUNC_10(VAR_5, VAR_7, VAR_8)
   );
  }

 } while (!VAR_12);

 FUNC_12(&VAR_5->wq.lock);
 FUNC_2(*VAR_6);
 *VAR_6 = ((void*)0);
 return VAR_12;
}
