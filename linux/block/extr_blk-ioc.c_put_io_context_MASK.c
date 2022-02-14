
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_context {int lock; int release_work; int icq_list; int refcount; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int ,struct io_context*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int VAR_1 ;

void FUNC_8(struct io_context *VAR_2)
{
 unsigned long VAR_3;
 bool VAR_4 = 0;

 if (VAR_2 == ((void*)0))
  return;

 FUNC_0(FUNC_2(&VAR_2->refcount) <= 0);





 if (FUNC_1(&VAR_2->refcount)) {
  FUNC_6(&VAR_2->lock, VAR_3);
  if (!FUNC_3(&VAR_2->icq_list))
   FUNC_5(VAR_1,
     &VAR_2->release_work);
  else
   VAR_4 = 1;
  FUNC_7(&VAR_2->lock, VAR_3);
 }

 if (VAR_4)
  FUNC_4(VAR_0, VAR_2);
}
