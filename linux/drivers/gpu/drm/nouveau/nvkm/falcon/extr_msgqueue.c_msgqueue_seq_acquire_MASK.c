
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct nvkm_subdev {int dummy; } ;
struct nvkm_msgqueue_seq {int state; } ;
struct nvkm_msgqueue {struct nvkm_msgqueue_seq* seq; int seq_lock; int seq_tbl; TYPE_1__* falcon; } ;
struct TYPE_2__ {struct nvkm_subdev* owner; } ;


 int VAR_0 ;
 struct nvkm_msgqueue_seq* FUNC_0 (int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (int ,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nvkm_subdev const*,char*) ;
 int FUNC_5 (size_t,int ) ;

__attribute__((used)) static struct nvkm_msgqueue_seq *
FUNC_6(struct nvkm_msgqueue *VAR_3)
{
 const struct nvkm_subdev *VAR_4 = VAR_3->falcon->owner;
 struct nvkm_msgqueue_seq *VAR_5;
 u32 VAR_6;

 FUNC_2(&VAR_3->seq_lock);

 VAR_6 = FUNC_1(VAR_3->seq_tbl, VAR_1);

 if (VAR_6 >= VAR_1) {
  FUNC_4(VAR_4, "no free sequence available\n");
  FUNC_3(&VAR_3->seq_lock);
  return FUNC_0(-VAR_0);
 }

 FUNC_5(VAR_6, VAR_3->seq_tbl);

 FUNC_3(&VAR_3->seq_lock);

 VAR_5 = &VAR_3->seq[VAR_6];
 VAR_5->state = VAR_2;

 return VAR_5;
}
