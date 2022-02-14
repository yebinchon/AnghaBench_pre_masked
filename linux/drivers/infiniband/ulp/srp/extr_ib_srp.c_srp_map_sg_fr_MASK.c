
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct srp_request {scalar_t__ fr_list; } ;
struct srp_rdma_ch {TYPE_2__* target; } ;
struct TYPE_3__ {scalar_t__ end; scalar_t__ next; } ;
struct srp_map_state {struct scatterlist* sg; TYPE_1__ fr; } ;
struct scatterlist {int dummy; } ;
struct TYPE_4__ {scalar_t__ mr_per_cmd; } ;


 struct scatterlist* FUNC_0 (struct scatterlist*) ;
 int FUNC_1 (struct srp_map_state*,struct srp_request*,struct srp_rdma_ch*,int,unsigned int*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct srp_map_state *VAR_0, struct srp_rdma_ch *VAR_1,
    struct srp_request *VAR_2, struct scatterlist *VAR_3,
    int VAR_4)
{
 unsigned int VAR_5 = 0;

 VAR_0->fr.next = VAR_2->fr_list;
 VAR_0->fr.end = VAR_2->fr_list + VAR_1->target->mr_per_cmd;
 VAR_0->sg = VAR_3;

 if (VAR_4 == 0)
  return 0;

 while (VAR_4) {
  int VAR_6, VAR_7;

  VAR_7 = FUNC_1(VAR_0, VAR_2, VAR_1, VAR_4, &VAR_5);
  if (FUNC_2(VAR_7 < 0))
   return VAR_7;

  VAR_4 -= VAR_7;
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
   VAR_0->sg = FUNC_0(VAR_0->sg);
 }

 return 0;
}
