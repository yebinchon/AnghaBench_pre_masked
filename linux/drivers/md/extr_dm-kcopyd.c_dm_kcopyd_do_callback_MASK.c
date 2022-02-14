
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kcopyd_job {int read_err; unsigned long write_err; struct dm_kcopyd_client* kc; } ;
struct dm_kcopyd_client {int callback_jobs; } ;


 int FUNC_0 (int *,struct kcopyd_job*) ;
 int FUNC_1 (struct dm_kcopyd_client*) ;

void FUNC_2(void *VAR_0, int VAR_1, unsigned long VAR_2)
{
 struct kcopyd_job *VAR_3 = VAR_0;
 struct dm_kcopyd_client *VAR_4 = VAR_3->kc;

 VAR_3->read_err = VAR_1;
 VAR_3->write_err = VAR_2;

 FUNC_0(&VAR_4->callback_jobs, VAR_3);
 FUNC_1(VAR_4);
}
