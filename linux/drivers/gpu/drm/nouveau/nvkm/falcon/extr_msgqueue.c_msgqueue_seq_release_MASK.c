
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_msgqueue_seq {int id; int * completion; int * callback; int state; } ;
struct nvkm_msgqueue {int seq_tbl; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct nvkm_msgqueue *VAR_1, struct nvkm_msgqueue_seq *VAR_2)
{

 VAR_2->state = VAR_0;
 VAR_2->callback = ((void*)0);
 VAR_2->completion = ((void*)0);
 FUNC_0(VAR_2->id, VAR_1->seq_tbl);
}
