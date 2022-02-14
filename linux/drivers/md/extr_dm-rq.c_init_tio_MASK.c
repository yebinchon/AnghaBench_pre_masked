
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct mapped_device {int init_tio_pdu; } ;
struct dm_rq_target_io {int info; scalar_t__ completed; scalar_t__ error; struct request* orig; int * clone; int * ti; struct mapped_device* md; } ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void FUNC_1(struct dm_rq_target_io *VAR_0, struct request *VAR_1,
       struct mapped_device *VAR_2)
{
 VAR_0->md = VAR_2;
 VAR_0->ti = ((void*)0);
 VAR_0->clone = ((void*)0);
 VAR_0->orig = VAR_1;
 VAR_0->error = 0;
 VAR_0->completed = 0;





 if (!VAR_2->init_tio_pdu)
  FUNC_0(&VAR_0->info, 0, sizeof(VAR_0->info));
}
