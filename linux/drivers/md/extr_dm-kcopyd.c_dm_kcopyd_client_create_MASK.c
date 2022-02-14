
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_kcopyd_throttle {int dummy; } ;
struct dm_kcopyd_client {int sub_job_size; int job_pool; int kcopyd_wq; int nr_jobs; int destroyq; int io_client; scalar_t__ nr_free_pages; scalar_t__ nr_reserved_pages; int * pages; int kcopyd_work; struct dm_kcopyd_throttle* throttle; int pages_jobs; int io_jobs; int complete_jobs; int callback_jobs; int job_lock; } ;


 unsigned int FUNC_0 (int,int ) ;
 int VAR_0 ;
 struct dm_kcopyd_client* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct dm_kcopyd_client*) ;
 int FUNC_9 (struct dm_kcopyd_client*,unsigned int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int VAR_7 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct dm_kcopyd_client*) ;
 struct dm_kcopyd_client* FUNC_15 (int,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int ,int ) ;
 int FUNC_18 (int *) ;

struct dm_kcopyd_client *FUNC_19(struct dm_kcopyd_throttle *VAR_8)
{
 int VAR_9;
 unsigned VAR_10;
 struct dm_kcopyd_client *VAR_11;

 VAR_11 = FUNC_15(sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return FUNC_1(-VAR_0);

 FUNC_18(&VAR_11->job_lock);
 FUNC_2(&VAR_11->callback_jobs);
 FUNC_2(&VAR_11->complete_jobs);
 FUNC_2(&VAR_11->io_jobs);
 FUNC_2(&VAR_11->pages_jobs);
 VAR_11->throttle = VAR_8;

 VAR_9 = FUNC_17(&VAR_11->job_pool, VAR_2, VAR_6);
 if (VAR_9)
  goto bad_slab;

 FUNC_3(&VAR_11->kcopyd_work, VAR_7);
 VAR_11->kcopyd_wq = FUNC_6("kcopyd", VAR_5, 0);
 if (!VAR_11->kcopyd_wq) {
  VAR_9 = -VAR_0;
  goto bad_workqueue;
 }

 VAR_11->sub_job_size = FUNC_11();
 VAR_10 = FUNC_0(VAR_11->sub_job_size << VAR_4, VAR_3);

 VAR_11->pages = ((void*)0);
 VAR_11->nr_reserved_pages = VAR_11->nr_free_pages = 0;
 VAR_9 = FUNC_9(VAR_11, VAR_10);
 if (VAR_9)
  goto bad_client_pages;

 VAR_11->io_client = FUNC_12();
 if (FUNC_4(VAR_11->io_client)) {
  VAR_9 = FUNC_5(VAR_11->io_client);
  goto bad_io_client;
 }

 FUNC_13(&VAR_11->destroyq);
 FUNC_7(&VAR_11->nr_jobs, 0);

 return VAR_11;

bad_io_client:
 FUNC_8(VAR_11);
bad_client_pages:
 FUNC_10(VAR_11->kcopyd_wq);
bad_workqueue:
 FUNC_16(&VAR_11->job_pool);
bad_slab:
 FUNC_14(VAR_11);

 return FUNC_1(VAR_9);
}
