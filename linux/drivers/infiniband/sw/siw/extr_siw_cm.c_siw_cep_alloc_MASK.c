
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siw_device {int lock; int cep_list; } ;
struct siw_cep {int enhanced_rdma_conn_est; int devq; struct siw_device* sdev; int lock; int waitq; int state; int ref; int work_freelist; int listenq; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct siw_cep* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct siw_cep*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static struct siw_cep *FUNC_9(struct siw_device *VAR_2)
{
 struct siw_cep *VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_0);
 unsigned long VAR_4;

 if (!VAR_3)
  return ((void*)0);

 FUNC_0(&VAR_3->listenq);
 FUNC_0(&VAR_3->devq);
 FUNC_0(&VAR_3->work_freelist);

 FUNC_2(&VAR_3->ref);
 VAR_3->state = VAR_1;
 FUNC_1(&VAR_3->waitq);
 FUNC_6(&VAR_3->lock);
 VAR_3->sdev = VAR_2;
 VAR_3->enhanced_rdma_conn_est = 0;

 FUNC_7(&VAR_2->lock, VAR_4);
 FUNC_4(&VAR_3->devq, &VAR_2->cep_list);
 FUNC_8(&VAR_2->lock, VAR_4);

 FUNC_5(VAR_3, "new endpoint\n");
 return VAR_3;
}
