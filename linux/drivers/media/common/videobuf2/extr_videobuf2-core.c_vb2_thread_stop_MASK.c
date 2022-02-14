
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_threadio_data {int stop; int * thread; } ;
struct vb2_queue {struct vb2_threadio_data* threadio; } ;


 int FUNC_0 (struct vb2_queue*) ;
 int FUNC_1 (struct vb2_threadio_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vb2_queue*) ;

int FUNC_4(struct vb2_queue *VAR_0)
{
 struct vb2_threadio_data *VAR_1 = VAR_0->threadio;
 int VAR_2;

 if (VAR_1 == ((void*)0))
  return 0;
 VAR_1->stop = 1;

 FUNC_3(VAR_0);
 VAR_2 = FUNC_2(VAR_1->thread);
 FUNC_0(VAR_0);
 VAR_1->thread = ((void*)0);
 FUNC_1(VAR_1);
 VAR_0->threadio = ((void*)0);
 return VAR_2;
}
