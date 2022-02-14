
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rdma_route {int num_paths; struct ib_sa_path_rec* path_rec; } ;
struct ib_sa_path_rec {int dummy; } ;
struct TYPE_4__ {int status; int event; } ;
struct cma_work {int work; TYPE_1__ event; int new_state; int old_state; TYPE_3__* id; } ;
struct TYPE_5__ {struct rdma_route route; } ;
struct TYPE_6__ {TYPE_2__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(int VAR_4, struct ib_sa_path_rec *VAR_5,
         void *VAR_6)
{
 struct cma_work *VAR_7 = VAR_6;
 struct rdma_route *VAR_8;

 VAR_8 = &VAR_7->id->id.route;

 if (!VAR_4) {
  VAR_8->num_paths = 1;
  *VAR_8->path_rec = *VAR_5;
 } else {
  VAR_7->old_state = VAR_2;
  VAR_7->new_state = VAR_0;
  VAR_7->event.event = VAR_1;
  VAR_7->event.status = VAR_4;
 }

 FUNC_0(VAR_3, &VAR_7->work);
}
